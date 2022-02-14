
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct miphy28lp_phy {scalar_t__ type; int pipebase; int base; TYPE_2__* phy; struct miphy28lp_dev* phydev; } ;
struct miphy28lp_dev {int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char** VAR_4 ;
 int FUNC_0 (int ,struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct miphy28lp_phy *VAR_5)
{
 struct miphy28lp_dev *VAR_6 = VAR_5->phydev;
 struct device_node *VAR_7 = VAR_5->phy->dev.of_node;
 int VAR_8;

 if ((VAR_5->type != VAR_2) &&
     (VAR_5->type != VAR_1) &&
     (VAR_5->type != VAR_3)) {
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_6->dev, VAR_7,
   VAR_4[VAR_5->type - VAR_2],
   &VAR_5->base);
 if (VAR_8)
  return VAR_8;

 if ((VAR_5->type == VAR_1) ||
     (VAR_5->type == VAR_3)) {
  VAR_8 = FUNC_0(VAR_6->dev, VAR_7, "pipew",
          &VAR_5->pipebase);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
