
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchtec_ntb {TYPE_2__* self_shared; TYPE_1__* stdev; } ;
struct ntb_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ link_sta; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct switchtec_ntb* FUNC_1 (struct ntb_dev*) ;
 int FUNC_2 (struct switchtec_ntb*) ;
 int FUNC_3 (struct switchtec_ntb*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ntb_dev *VAR_2)
{
 struct switchtec_ntb *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->stdev->dev, "disabling link\n");

 VAR_3->self_shared->link_sta = 0;
 FUNC_3(VAR_3, VAR_0, VAR_1);

 FUNC_2(VAR_3);

 return 0;
}
