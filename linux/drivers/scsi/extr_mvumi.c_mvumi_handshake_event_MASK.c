
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvumi_hba {scalar_t__ fw_state; int global_isr; TYPE_1__* pdev; TYPE_2__* instancet; } ;
struct TYPE_4__ {unsigned int (* read_fw_status_reg ) (struct mvumi_hba*) ;} ;
struct TYPE_3__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__,...) ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct mvumi_hba*) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (struct mvumi_hba*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static unsigned char FUNC_6(struct mvumi_hba *VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7;

 VAR_7 = VAR_4;
 FUNC_1(VAR_5);
 do {
  VAR_6 = VAR_5->instancet->read_fw_status_reg(VAR_5);

  if (VAR_5->fw_state == VAR_2)
   return 0;
  if (FUNC_4(VAR_4, VAR_7 + VAR_1 * VAR_3)) {
   FUNC_0(&VAR_5->pdev->dev,
    "no handshake response at state 0x%x.\n",
      VAR_5->fw_state);
   FUNC_0(&VAR_5->pdev->dev,
    "isr : global=0x%x,status=0x%x.\n",
     VAR_5->global_isr, VAR_6);
   return -1;
  }
  FUNC_2();
  FUNC_5(1000, 2000);
 } while (!(VAR_6 & VAR_0));

 return 0;
}
