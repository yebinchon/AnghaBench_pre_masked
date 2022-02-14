
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct bcma_hcd_device {struct bcma_device* core; } ;
struct TYPE_2__ {int rev; } ;
struct bcma_device {int bus; TYPE_1__ id; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct bcma_device*,int ,int) ;
 struct bcma_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bcma_device*,int ,int ) ;
 int FUNC_3 (struct bcma_device*,int,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ,int *,struct device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct bcma_hcd_device *VAR_15)
{
 struct bcma_device *VAR_16 = VAR_15->core;
 struct device *VAR_17 = &VAR_16->dev;
 struct bcma_device *VAR_18;

 FUNC_7(10000, 20000);
 if (VAR_16->id.rev < 5)
  return 0;

 VAR_18 = FUNC_1(VAR_16->bus, VAR_7);
 if (!VAR_18) {
  FUNC_4(VAR_17, "Could not find PMU core\n");
  return -VAR_13;
 }


 FUNC_0(VAR_16, VAR_8, VAR_9 | VAR_10);
 FUNC_7(100, 200);
 FUNC_0(VAR_16, VAR_11, VAR_12);
 FUNC_7(100, 200);
 FUNC_0(VAR_16, VAR_11, 0);
 FUNC_7(100, 200);
 FUNC_0(VAR_16, VAR_8, VAR_9);
 FUNC_7(100, 200);


 FUNC_3(VAR_16, VAR_4, VAR_5 |
       VAR_6 |
       VAR_14);
 FUNC_7(100, 200);

 FUNC_3(VAR_16, 0x510, 0xc7f85000);
 FUNC_3(VAR_16, 0x510, 0xc7f85003);
 FUNC_7(300, 600);


 FUNC_3(VAR_18, VAR_2, 0x6);
 FUNC_3(VAR_18, VAR_3, 0x005360c1);
 FUNC_7(100, 200);
 FUNC_3(VAR_18, VAR_2, 0x7);
 FUNC_3(VAR_18, VAR_3, 0x0);
 FUNC_7(100, 200);
 FUNC_2(VAR_18, VAR_0, VAR_1);
 FUNC_7(100, 200);

 FUNC_3(VAR_16, 0x510, 0x7f8d007);
 FUNC_6(1000);


 FUNC_3(VAR_16, 0x200, 0x4ff);
 FUNC_7(25, 50);
 FUNC_3(VAR_16, 0x200, 0x6ff);
 FUNC_7(25, 50);
 FUNC_3(VAR_16, 0x200, 0x7ff);
 FUNC_7(25, 50);

 FUNC_5(VAR_17->of_node, ((void*)0), VAR_17);

 return 0;
}
