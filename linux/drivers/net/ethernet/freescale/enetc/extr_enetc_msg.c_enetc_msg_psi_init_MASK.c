
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct enetc_si {int hw; TYPE_2__* pdev; TYPE_1__* ndev; } ;
struct enetc_pf {int num_vfs; int msg_task; int msg_int_name; struct enetc_si* si; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct enetc_si*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct enetc_si*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int,struct enetc_si*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int,int ,int ,int ,struct enetc_si*) ;
 int FUNC_9 (int ,int,char*,char*) ;

int FUNC_10(struct enetc_pf *VAR_4)
{
 struct enetc_si *VAR_5 = VAR_4->si;
 int VAR_6, VAR_7, VAR_8;


 FUNC_9(VAR_4->msg_int_name, sizeof(VAR_4->msg_int_name), "%s-vfmsg",
   VAR_5->ndev->name);
 VAR_6 = FUNC_7(VAR_5->pdev, VAR_1);
 VAR_8 = FUNC_8(VAR_6, VAR_2, 0, VAR_4->msg_int_name, VAR_5);
 if (VAR_8) {
  FUNC_1(&VAR_5->pdev->dev,
   "PSI messaging: request_irq() failed!\n");
  return VAR_8;
 }


 FUNC_5(&VAR_5->hw, VAR_0, VAR_1);


 FUNC_0(&VAR_4->msg_task, VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_4->num_vfs; VAR_7++) {
  VAR_8 = FUNC_2(VAR_5, VAR_7);
  if (VAR_8)
   goto err_init_mbx;
 }


 FUNC_3(&VAR_5->hw);

 return 0;

err_init_mbx:
 for (VAR_7--; VAR_7 >= 0; VAR_7--)
  FUNC_4(VAR_5, VAR_7);

 FUNC_6(VAR_6, VAR_5);

 return VAR_8;
}
