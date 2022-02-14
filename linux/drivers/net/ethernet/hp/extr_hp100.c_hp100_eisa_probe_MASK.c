
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int name; } ;
struct hp100_private {int dummy; } ;
struct eisa_device {scalar_t__ base_addr; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct device*,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,scalar_t__,int ,int *) ;
 int FUNC_5 (char*,int ,int ) ;
 struct eisa_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_1(sizeof(struct hp100_private));
 struct eisa_device *VAR_4 = FUNC_6(VAR_2);
 int VAR_5;

 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3, &VAR_4->dev);

 VAR_5 = FUNC_4(VAR_3, VAR_4->base_addr + 0xC38, VAR_1, ((void*)0));
 if (VAR_5)
  goto out1;





 FUNC_2(VAR_2, VAR_3);
 return 0;
 out1:
 FUNC_3(VAR_3);
 return VAR_5;
}
