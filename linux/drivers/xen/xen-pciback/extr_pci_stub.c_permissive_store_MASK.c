
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_dev_data {int permissive; } ;
struct pcistub_device {TYPE_1__* dev; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct xen_pcibk_dev_data* FUNC_1 (TYPE_1__*) ;
 struct pcistub_device* FUNC_2 (int,int,int,int) ;
 int FUNC_3 (struct pcistub_device*) ;
 int FUNC_4 (char const*,int*,int*,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device_driver *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;
 struct pcistub_device *VAR_10;
 struct xen_pcibk_dev_data *VAR_11;

 VAR_9 = FUNC_4(VAR_3, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9)
  goto out;

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 if (!VAR_10) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_1(VAR_10->dev);

 if (!VAR_11) {
  VAR_9 = -VAR_1;
  goto release;
 }
 if (!VAR_11->permissive) {
  VAR_11->permissive = 1;

  FUNC_0(&VAR_10->dev->dev, "enabling permissive mode "
    "configuration space accesses!\n");
  FUNC_0(&VAR_10->dev->dev,
    "permissive mode is potentially unsafe!\n");
 }
release:
 FUNC_3(VAR_10);
out:
 if (!VAR_9)
  VAR_9 = VAR_4;
 return VAR_9;
}
