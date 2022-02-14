
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dln2_dev {TYPE_1__* interface; } ;
struct device {int dummy; } ;
typedef int serial_no ;
typedef int __le32 ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dln2_dev*,int ,int ,int *,int ,int *,int*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dln2_dev *VAR_3)
{
 int VAR_4;
 __le32 VAR_5;
 int VAR_6 = sizeof(VAR_5);
 struct device *VAR_7 = &VAR_3->interface->dev;

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_0, ((void*)0), 0,
        &VAR_5, &VAR_6);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_6 < sizeof(VAR_5))
  return -VAR_2;

 FUNC_1(VAR_7, "Diolan DLN2 serial %u\n", FUNC_2(VAR_5));

 return 0;
}
