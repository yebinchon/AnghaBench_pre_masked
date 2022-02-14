
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wilco_ec_device {int dummy; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int dir; struct wilco_ec_device* ec; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int ,struct wilco_ec_device*,int *) ;
 struct wilco_ec_device* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct wilco_ec_device *VAR_5 = FUNC_2(VAR_4->dev.parent);

 VAR_1 = FUNC_3(&VAR_4->dev, sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return 0;
 VAR_1->ec = VAR_5;
 VAR_1->dir = FUNC_0("wilco_ec", ((void*)0));
 if (!VAR_1->dir)
  return 0;
 FUNC_1("raw", 0644, VAR_1->dir, ((void*)0), &VAR_3);
 FUNC_1("h1_gpio", 0444, VAR_1->dir, VAR_5,
       &VAR_2);

 return 0;
}
