
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iscsi_iface {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 struct iscsi_iface* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iscsi_iface*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct iscsi_iface *VAR_1 = FUNC_0(VAR_0);
 struct device *VAR_2 = VAR_1->dev.parent;

 FUNC_1(VAR_1);
 FUNC_2(VAR_2);
}
