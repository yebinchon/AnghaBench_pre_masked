
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dln2_dev {TYPE_1__* interface; } ;
typedef int hw_type ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dln2_dev*,int ,int ,int *,int ,int *,int*) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dln2_dev *VAR_5)
{
 int VAR_6;
 __le32 VAR_7;
 int VAR_8 = sizeof(VAR_7);

 VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_0,
        ((void*)0), 0, &VAR_7, &VAR_8);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_8 < sizeof(VAR_7))
  return -VAR_4;

 if (FUNC_2(VAR_7) != VAR_2) {
  FUNC_1(&VAR_5->interface->dev, "Device ID 0x%x not supported\n",
   FUNC_2(VAR_7));
  return -VAR_3;
 }

 return 0;
}
