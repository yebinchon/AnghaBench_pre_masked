
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct cxl {int dev; } ;
struct TYPE_4__ {scalar_t__ (* support_attributes ) (int ,int ) ;} ;


 int FUNC_0 (struct device_attribute*) ;
 int VAR_0 ;
 struct device_attribute* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int *,struct device_attribute*) ;
 int FUNC_2 (int *,struct device_attribute*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int FUNC_5(struct cxl *VAR_3)
{
 struct device_attribute *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_4 = &VAR_1[VAR_5];
  if (VAR_2->support_attributes(VAR_4->attr.name,
      VAR_0)) {
   if ((VAR_6 = FUNC_1(&VAR_3->dev, VAR_4)))
    goto err;
  }
 }
 return 0;
err:
 for (VAR_5--; VAR_5 >= 0; VAR_5--) {
  VAR_4 = &VAR_1[VAR_5];
  if (VAR_2->support_attributes(VAR_4->attr.name,
      VAR_0))
   FUNC_2(&VAR_3->dev, VAR_4);
 }
 return VAR_6;
}
