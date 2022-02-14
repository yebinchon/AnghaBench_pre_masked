
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct aac_dev {int OIMR; int max_msix; scalar_t__ msi_enabled; TYPE_1__* IndexRegs; int in_soft_reset; int sync_mode; } ;
struct TYPE_4__ {int ODR_C; int IDR; int OIMR; } ;
struct TYPE_3__ {int * Mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct aac_dev*,int ) ;
 int FUNC_2 (struct aac_dev*) ;
 unsigned long VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct aac_dev*,int ) ;
 int FUNC_6 (struct aac_dev*,int ,int) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_11(struct aac_dev *VAR_12, u32 VAR_13,
 u32 VAR_14, u32 VAR_15, u32 VAR_16, u32 VAR_17, u32 VAR_18, u32 VAR_19,
 u32 *VAR_20, u32 * VAR_21, u32 * VAR_22, u32 * VAR_23, u32 * VAR_24)
{
 unsigned long VAR_25;
 unsigned long VAR_26;
 int VAR_27;




 FUNC_10(VAR_13, &VAR_12->IndexRegs->Mailbox[0]);



 FUNC_10(VAR_14, &VAR_12->IndexRegs->Mailbox[1]);
 FUNC_10(VAR_15, &VAR_12->IndexRegs->Mailbox[2]);
 FUNC_10(VAR_16, &VAR_12->IndexRegs->Mailbox[3]);
 FUNC_10(VAR_17, &VAR_12->IndexRegs->Mailbox[4]);




 if (!VAR_12->msi_enabled)
  FUNC_6(VAR_12,
      VAR_6.ODR_C,
      VAR_7 << VAR_10);




 FUNC_6(VAR_12, VAR_6.OIMR, VAR_12->OIMR = 0xffffffff);





 FUNC_5(VAR_12, VAR_6.OIMR);




 FUNC_6(VAR_12, VAR_6.IDR, VAR_4 << VAR_9);

 if ((!VAR_12->sync_mode || VAR_13 != VAR_8) &&
  !VAR_12->in_soft_reset) {
  VAR_27 = 0;
  VAR_25 = VAR_11;

  if (VAR_13 == VAR_5) {

   VAR_26 = 10*VAR_3;
  } else {

   VAR_26 = 300*VAR_3;
  }
  while (FUNC_7(VAR_11, VAR_25+VAR_26)) {
   FUNC_8(5);



   if (FUNC_2(VAR_12) & VAR_7) {



    if (VAR_12->msi_enabled)
     FUNC_1(VAR_12,
      VAR_0);
    else
     FUNC_6(VAR_12,
      VAR_6.ODR_C,
      VAR_7 << VAR_10);
    VAR_27 = 1;
    break;
   }



   FUNC_3(1);
  }
  if (FUNC_9(VAR_27 != 1)) {



   FUNC_0(VAR_12);
   return -VAR_1;
  }



  if (VAR_20)
   *VAR_20 = FUNC_4(&VAR_12->IndexRegs->Mailbox[0]);
  if (VAR_21)
   *VAR_21 = FUNC_4(&VAR_12->IndexRegs->Mailbox[1]);
  if (VAR_22)
   *VAR_22 = FUNC_4(&VAR_12->IndexRegs->Mailbox[2]);
  if (VAR_23)
   *VAR_23 = FUNC_4(&VAR_12->IndexRegs->Mailbox[3]);
  if (VAR_24)
   *VAR_24 = FUNC_4(&VAR_12->IndexRegs->Mailbox[4]);
  if (VAR_13 == VAR_2)
   VAR_12->max_msix =
    FUNC_4(&VAR_12->IndexRegs->Mailbox[5]) & 0xFFFF;



  if (!VAR_12->msi_enabled)
   FUNC_6(VAR_12,
    VAR_6.ODR_C,
    VAR_7 << VAR_10);
 }




 FUNC_0(VAR_12);
 return 0;
}
