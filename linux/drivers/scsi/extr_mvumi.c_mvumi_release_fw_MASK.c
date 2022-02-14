
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mvumi_hba {TYPE_1__* pdev; int regs; int handshake_page_phys; int handshake_page; int base_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mvumi_hba*) ;
 int FUNC_3 (struct mvumi_hba*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct mvumi_hba *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1->pdev, VAR_1->base_addr);
 FUNC_0(&VAR_1->pdev->dev, VAR_0,
  VAR_1->handshake_page, VAR_1->handshake_page_phys);
 FUNC_1(VAR_1->regs);
 FUNC_5(VAR_1->pdev);
}
