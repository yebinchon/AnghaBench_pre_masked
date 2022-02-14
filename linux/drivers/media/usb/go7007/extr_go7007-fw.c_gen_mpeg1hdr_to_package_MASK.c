
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct go7007 {scalar_t__ interlace_coding; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__*,int*,int) ;
 int FUNC_4 (struct go7007*,int*,int ,int,int ) ;
 int FUNC_5 (struct go7007*,int*,int ) ;

__attribute__((used)) static int FUNC_6(struct go7007 *VAR_6,
     __le16 *VAR_7, int VAR_8, int *VAR_9)
{
 u8 *VAR_10;
 u16 VAR_11 = 0x3e00;
 unsigned int VAR_12 = 0x19;
 int VAR_13, VAR_14 = 0, VAR_15;

 VAR_10 = FUNC_2(5120, VAR_4);
 if (VAR_10 == ((void*)0))
  return -VAR_3;

 VAR_9[0] = FUNC_4(VAR_6, VAR_10, 0, 1, VAR_5);
 if (VAR_6->interlace_coding)
  VAR_9[0] += FUNC_4(VAR_6, VAR_10 + VAR_9[0] / 8,
       0, 2, VAR_5);
 VAR_10[0] = VAR_9[0] & 0xff;
 VAR_10[1] = VAR_9[0] >> 8;
 VAR_13 = 368;
 VAR_9[1] = FUNC_4(VAR_6, VAR_10 + VAR_13, 0, 1, VAR_2);
 if (VAR_6->interlace_coding)
  VAR_9[1] += FUNC_4(VAR_6, VAR_10 + VAR_13 + VAR_9[1] / 8,
       0, 2, VAR_2);
 VAR_10[VAR_13] = VAR_9[1] & 0xff;
 VAR_10[VAR_13 + 1] = VAR_9[1] >> 8;
 VAR_13 += 1632;
 VAR_9[2] = FUNC_4(VAR_6, VAR_10 + VAR_13, 0, 1, VAR_1);
 if (VAR_6->interlace_coding)
  VAR_9[2] += FUNC_4(VAR_6, VAR_10 + VAR_13 + VAR_9[2] / 8,
       0, 2, VAR_1);
 VAR_10[VAR_13] = VAR_9[2] & 0xff;
 VAR_10[VAR_13 + 1] = VAR_9[2] >> 8;
 VAR_13 += 1432;
 VAR_9[3] = FUNC_4(VAR_6, VAR_10 + VAR_13, 0, 1, VAR_0);
 if (VAR_6->interlace_coding)
  VAR_9[3] += FUNC_4(VAR_6, VAR_10 + VAR_13 + VAR_9[3] / 8,
       0, 2, VAR_0);
 VAR_10[VAR_13] = VAR_9[3] & 0xff;
 VAR_10[VAR_13 + 1] = VAR_9[3] >> 8;
 VAR_13 += 1632 + 16;
 FUNC_5(VAR_6, VAR_10 + VAR_13, 0);
 VAR_13 += 40;
 for (VAR_13 = 0; VAR_13 < 5120; VAR_13 += VAR_15 * 2) {
  if (VAR_8 - VAR_14 < 32) {
   VAR_14 = -1;
   goto done;
  }

  VAR_7[VAR_14 + 1] = FUNC_0(0x8000 | VAR_11);

  VAR_15 = 28;
  if (VAR_11 + VAR_15 > 0x4000)
   VAR_15 = 0x4000 - VAR_11;
  if (VAR_13 + 2 * VAR_15 > 5120)
   VAR_15 = (5120 - VAR_13) / 2;

  if (VAR_15 < 28) {
   VAR_7[VAR_14] = FUNC_0(0x4000 | VAR_15);
   VAR_7[VAR_14 + 31] = FUNC_0(VAR_12);
   if (VAR_11 + VAR_15 == 0x4000) {
    VAR_11 = 0x3e00;
    ++VAR_12;
   }
  } else {
   VAR_7[VAR_14] = FUNC_0(0x1000 | 28);
   VAR_7[VAR_14 + 31] = 0;
   VAR_11 += 28;
  }

  FUNC_3(&VAR_7[VAR_14 + 2], VAR_10 + VAR_13, VAR_15 * 2);
  VAR_14 += 32;
 }
done:
 FUNC_1(VAR_10);
 return VAR_14;
}
