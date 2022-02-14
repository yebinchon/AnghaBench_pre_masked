
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ipr_ioa_cfg {scalar_t__ sdt_state; TYPE_1__* pdev; int errors_logged; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (struct ipr_ioa_cfg*,int ) ;

__attribute__((used)) static void FUNC_2(struct ipr_ioa_cfg *VAR_3, char *VAR_4, u16 VAR_5)
{
 VAR_3->errors_logged++;
 FUNC_0(&VAR_3->pdev->dev, "%s %d\n", VAR_4, VAR_5);

 if (VAR_2 == VAR_3->sdt_state)
  VAR_3->sdt_state = VAR_0;

 FUNC_1(VAR_3, VAR_1);
}
