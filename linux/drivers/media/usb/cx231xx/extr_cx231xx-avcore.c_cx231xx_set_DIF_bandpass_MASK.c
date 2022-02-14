
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef long u64 ;
typedef scalar_t__ u32 ;
struct cx231xx {int dev; } ;
struct TYPE_3__ {scalar_t__ if_freq; scalar_t__ value; int register_address; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (long,int) ;
 int FUNC_3 (struct cx231xx*,int ,scalar_t__*) ;
 int FUNC_4 (struct cx231xx*,int ,scalar_t__) ;

void FUNC_5(struct cx231xx *VAR_4, u32 VAR_5,
   u8 VAR_6, u32 VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9 = 0;
 u64 VAR_10 = 0;
 u32 VAR_11 = 0;

 FUNC_1(VAR_4->dev, "if_freq=%d;spectral_invert=0x%x;mode=0x%x\n",
  VAR_5, VAR_6, VAR_7);


 if (VAR_7 == VAR_3) {
  VAR_8 = 0x905A1CAC;
  FUNC_4(VAR_4, VAR_1, VAR_8);

 } else {

  VAR_8 = VAR_5;
  VAR_10 = (u64)VAR_8 << 28L;
  FUNC_2(VAR_10, 50000000);
  VAR_8 = (u32)VAR_10;

  FUNC_4(VAR_4, VAR_1, VAR_8);

  if (VAR_6) {
   VAR_5 -= 400000;

   FUNC_3(VAR_4, VAR_0,
       &VAR_9);
   VAR_9 = VAR_9 | 0x00200000;
   FUNC_4(VAR_4, VAR_0,
       VAR_9);
  } else {
   VAR_5 += 400000;

   FUNC_3(VAR_4, VAR_0,
       &VAR_9);
   VAR_9 = VAR_9 & 0xFFDFFFFF;
   FUNC_4(VAR_4, VAR_0,
       VAR_9);
  }

  VAR_5 = (VAR_5 / 100000) * 100000;

  if (VAR_5 < 3000000)
   VAR_5 = 3000000;

  if (VAR_5 > 16000000)
   VAR_5 = 16000000;
 }

 FUNC_1(VAR_4->dev, "Enter IF=%zu\n", FUNC_0(VAR_2));
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); VAR_11++) {
  if (VAR_2[VAR_11].if_freq == VAR_5) {
   FUNC_4(VAR_4,
   VAR_2[VAR_11].register_address, VAR_2[VAR_11].value);
  }
 }
}
