
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aac_dev {TYPE_1__* IndexRegs; scalar_t__ msi_enabled; } ;
struct TYPE_4__ {int ODR_C; } ;
struct TYPE_3__ {int * Mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aac_dev*,int ) ;
 int FUNC_1 (struct aac_dev*) ;
 unsigned long VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct aac_dev*,int ,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct aac_dev *VAR_7, int *VAR_8)
{
 unsigned long VAR_9 = VAR_6;
 unsigned long VAR_10 = 0;
 int VAR_11 = 5 * VAR_1;
 int VAR_12 = 1;

 while (FUNC_4(VAR_6, VAR_9+VAR_11)) {



  FUNC_5(5);





  if (FUNC_1(VAR_7) & VAR_3) {



   if (VAR_7->msi_enabled)
    FUNC_0(VAR_7, VAR_0);
   else
    FUNC_3(VAR_7, VAR_2.ODR_C,
     VAR_3 << VAR_4);
   VAR_12 = 0;

   break;
  }




  VAR_10 = 1 * VAR_5;
  FUNC_6(VAR_10, VAR_10 + 50);
 }



 if (VAR_8 && !VAR_12) {
  VAR_8[0] = FUNC_2(&VAR_7->IndexRegs->Mailbox[0]);
  VAR_8[1] = FUNC_2(&VAR_7->IndexRegs->Mailbox[1]);
  VAR_8[2] = FUNC_2(&VAR_7->IndexRegs->Mailbox[2]);
  VAR_8[3] = FUNC_2(&VAR_7->IndexRegs->Mailbox[3]);
  VAR_8[4] = FUNC_2(&VAR_7->IndexRegs->Mailbox[4]);
 }

 return VAR_12;
}
