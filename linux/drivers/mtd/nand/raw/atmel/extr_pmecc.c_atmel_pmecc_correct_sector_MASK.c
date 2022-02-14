
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct atmel_pmecc_user {int eccbytes; int isr; struct atmel_pmecc* pmecc; } ;
struct TYPE_3__ {scalar_t__ errloc; } ;
struct atmel_pmecc {int dev; TYPE_2__* caps; TYPE_1__ regs; } ;
struct TYPE_4__ {int el_offset; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct atmel_pmecc_user*) ;
 int FUNC_3 (struct atmel_pmecc_user*,int) ;
 int FUNC_4 (struct atmel_pmecc_user*) ;
 int FUNC_5 (struct atmel_pmecc_user*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct atmel_pmecc_user*) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(struct atmel_pmecc_user *VAR_1, int VAR_2,
          void *VAR_3, void *VAR_4)
{
 struct atmel_pmecc *VAR_5 = VAR_1->pmecc;
 int VAR_6 = FUNC_7(VAR_1);
 int VAR_7 = VAR_1->eccbytes;
 int VAR_8, VAR_9;

 if (!(VAR_1->isr & FUNC_1(VAR_2)))
  return 0;

 FUNC_3(VAR_1, VAR_2);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);

 VAR_9 = FUNC_2(VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  const char *VAR_10;
  int VAR_11, VAR_12;
  u32 VAR_13;
  u8 *VAR_14;

  VAR_13 = FUNC_8(VAR_5->regs.errloc +
    FUNC_0(VAR_5->caps->el_offset, VAR_8));
  VAR_13--;

  VAR_11 = VAR_13 / 8;
  VAR_12 = VAR_13 % 8;

  if (VAR_11 < VAR_6) {
   VAR_14 = VAR_3 + VAR_11;
   VAR_10 = "data";
  } else if (VAR_11 < VAR_6 + VAR_7) {
   VAR_14 = VAR_4 + VAR_11 - VAR_6;
   VAR_10 = "ECC";
  } else {
   FUNC_6(VAR_5->dev,
    "Invalid errpos value (%d, max is %d)\n",
    VAR_13, (VAR_6 + VAR_7) * 8);
   return -VAR_0;
  }

  FUNC_6(VAR_5->dev,
   "Bit flip in %s area, byte %d: 0x%02x -> 0x%02x\n",
   VAR_10, VAR_11, *VAR_14, (unsigned int)(*VAR_14 ^ FUNC_1(VAR_12)));

  *VAR_14 ^= FUNC_1(VAR_12);
 }

 return VAR_9;
}
