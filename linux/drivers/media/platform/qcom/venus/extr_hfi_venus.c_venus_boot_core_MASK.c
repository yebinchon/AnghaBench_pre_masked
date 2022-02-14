
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_hfi_device {TYPE_1__* core; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct venus_hfi_device*,int ) ;
 int FUNC_4 (struct venus_hfi_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct venus_hfi_device *VAR_9)
{
 struct device *VAR_10 = VAR_9->core->dev;
 static const unsigned int VAR_11 = 100;
 u32 VAR_12 = 0;
 unsigned int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_4(VAR_9, VAR_5, FUNC_0(VAR_6));
 FUNC_4(VAR_9, VAR_7, VAR_8);
 FUNC_4(VAR_9, VAR_2, 1);

 while (!VAR_12 && VAR_13 < VAR_11) {
  VAR_12 = FUNC_3(VAR_9, VAR_0);
  if ((VAR_12 & VAR_1) == 4) {
   FUNC_1(VAR_10, "invalid setting for UC_REGION\n");
   VAR_14 = -VAR_3;
   break;
  }

  FUNC_2(500, 1000);
  VAR_13++;
 }

 if (VAR_13 >= VAR_11)
  VAR_14 = -VAR_4;

 return VAR_14;
}
