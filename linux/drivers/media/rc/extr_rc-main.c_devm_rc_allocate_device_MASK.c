
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct rc_dev {int managed_alloc; TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef enum rc_driver_type { ____Placeholder_rc_driver_type } rc_driver_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct rc_dev**) ;
 struct rc_dev** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct rc_dev**) ;
 struct rc_dev* FUNC_3 (int) ;

struct rc_dev *FUNC_4(struct device *VAR_2,
           enum rc_driver_type VAR_3)
{
 struct rc_dev **VAR_4, *VAR_5;

 VAR_4 = FUNC_1(VAR_1, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_3(VAR_3);
 if (!VAR_5) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_5->dev.parent = VAR_2;
 VAR_5->managed_alloc = 1;
 *VAR_4 = VAR_5;
 FUNC_0(VAR_2, VAR_4);

 return VAR_5;
}
