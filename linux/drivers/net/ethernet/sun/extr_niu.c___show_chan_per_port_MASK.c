
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dev; } ;
struct niu_parent {int num_ports; int * txchan_per_port; int * rxchan_per_port; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct niu_parent* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,...) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2,
        int VAR_3)
{
 struct platform_device *VAR_4 = FUNC_2(VAR_0);
 struct niu_parent *VAR_5 = FUNC_0(&VAR_4->dev);
 char *VAR_6 = VAR_2;
 u8 *VAR_7;
 int VAR_8;

 VAR_7 = (VAR_3 ? VAR_5->rxchan_per_port : VAR_5->txchan_per_port);

 for (VAR_8 = 0; VAR_8 < VAR_5->num_ports; VAR_8++) {
  VAR_2 += FUNC_1(VAR_2,
          (VAR_8 == 0) ? "%d" : " %d",
          VAR_7[VAR_8]);
 }
 VAR_2 += FUNC_1(VAR_2, "\n");

 return VAR_2 - VAR_6;
}
