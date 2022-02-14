
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct msi2500_dev {int next_sample; int pixelformat; unsigned int sample; int dev; scalar_t__ jiffies_next; } ;
typedef int s8 ;
typedef int s16 ;


 int VAR_0 ;






 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct msi2500_dev *VAR_2, u8 *VAR_3, u8 *VAR_4,
      unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 u32 VAR_10[3];


 VAR_8 = VAR_5 / 1024;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_10[VAR_6] = VAR_4[3] << 24 | VAR_4[2] << 16 | VAR_4[1] << 8 |
    VAR_4[0] << 0;
  if (VAR_6 == 0 && VAR_2->next_sample != VAR_10[0]) {
   FUNC_1(VAR_2->dev,
         "%d samples lost, %d %08x:%08x\n",
         VAR_10[0] - VAR_2->next_sample,
         VAR_5, VAR_2->next_sample,
         VAR_10[0]);
  }





  FUNC_1(VAR_2->dev, "%*ph\n", 12, &VAR_4[4]);

  VAR_4 += 16;

  switch (VAR_2->pixelformat) {
  case 128:
  {
   s8 *VAR_11 = (s8 *)VAR_4;
   u8 *VAR_12 = (u8 *)VAR_3;

   for (VAR_7 = 0; VAR_7 < 1008; VAR_7++)
    *VAR_12++ = *VAR_11++ + 128;

   VAR_4 += 1008;
   VAR_3 += 1008;
   VAR_9 += 1008;
   VAR_2->next_sample = VAR_10[VAR_6] + 504;
   break;
  }
  case 129:
  {
   s16 *VAR_13 = (s16 *)VAR_4;
   u16 *VAR_14 = (u16 *)VAR_3;
   struct {signed int x:14; } VAR_15;
   unsigned int VAR_16;

   for (VAR_7 = 0; VAR_7 < 1008; VAR_7 += 2) {

    VAR_15.x = *VAR_13++;

    VAR_16 = VAR_15.x + 8192;

    *VAR_14++ = VAR_16 << 2 | VAR_16 >> 12;
   }

   VAR_4 += 1008;
   VAR_3 += 1008;
   VAR_9 += 1008;
   VAR_2->next_sample = VAR_10[VAR_6] + 252;
   break;
  }
  case 133:

   FUNC_1(VAR_2->dev, "%*ph\n", 24, &VAR_4[1000]);
   FUNC_3(VAR_3, VAR_4, 984);
   VAR_4 += 984 + 24;
   VAR_3 += 984;
   VAR_9 += 984;
   VAR_2->next_sample = VAR_10[VAR_6] + 384;
   break;
  case 130:
   FUNC_3(VAR_3, VAR_4, 1008);
   VAR_4 += 1008;
   VAR_3 += 1008;
   VAR_9 += 1008;
   VAR_2->next_sample = VAR_10[VAR_6] + 504;
   break;
  case 132:
   FUNC_3(VAR_3, VAR_4, 1008);
   VAR_4 += 1008;
   VAR_3 += 1008;
   VAR_9 += 1008;
   VAR_2->next_sample = VAR_10[VAR_6] + 336;
   break;
  case 131:
   FUNC_3(VAR_3, VAR_4, 1008);
   VAR_4 += 1008;
   VAR_3 += 1008;
   VAR_9 += 1008;
   VAR_2->next_sample = VAR_10[VAR_6] + 252;
   break;
  default:
   break;
  }
 }


 if (FUNC_6(FUNC_5(VAR_2->jiffies_next))) {

  unsigned int VAR_17 = FUNC_2(VAR_1 -
    VAR_2->jiffies_next + FUNC_4(10000UL));
  unsigned int VAR_18 = VAR_2->next_sample - VAR_2->sample;

  VAR_2->jiffies_next = VAR_1 + FUNC_4(10000UL);
  VAR_2->sample = VAR_2->next_sample;
  FUNC_0(VAR_2->dev, "size=%u samples=%u msecs=%u sample rate=%lu\n",
   VAR_5, VAR_18, VAR_17,
   VAR_18 * 1000UL / VAR_17);
 }

 return VAR_9;
}
