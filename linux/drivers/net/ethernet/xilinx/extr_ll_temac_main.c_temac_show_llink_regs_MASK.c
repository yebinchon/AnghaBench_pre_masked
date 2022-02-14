
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int (* dma_in ) (struct temac_local*,int) ;} ;
struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct net_device* FUNC_0 (struct device*) ;
 struct temac_local* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (char*,char*,...) ;
 int FUNC_3 (struct temac_local*,int) ;
 int FUNC_4 (struct temac_local*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct net_device *VAR_3 = FUNC_0(VAR_0);
 struct temac_local *VAR_4 = FUNC_1(VAR_3);
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < 0x11; VAR_5++)
  VAR_6 += FUNC_2(VAR_2 + VAR_6, "%.8x%s", VAR_4->dma_in(VAR_4, VAR_5),
          (VAR_5 % 8) == 7 ? "\n" : " ");
 VAR_6 += FUNC_2(VAR_2 + VAR_6, "\n");

 return VAR_6;
}
