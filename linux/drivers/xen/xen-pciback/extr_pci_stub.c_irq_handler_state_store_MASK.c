
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_dev_data {int isr_on; int ack_intr; int irq_name; } ;
struct pcistub_device {TYPE_1__* dev; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int,int) ;
 struct xen_pcibk_dev_data* FUNC_1 (TYPE_1__*) ;
 struct pcistub_device* FUNC_2 (int,int,int,int) ;
 int FUNC_3 (struct pcistub_device*) ;
 int FUNC_4 (char const*,int*,int*,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device_driver *VAR_1,
           const char *VAR_2, size_t VAR_3)
{
 struct pcistub_device *VAR_4;
 struct xen_pcibk_dev_data *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_2, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_4 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
 if (!VAR_4) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_1(VAR_4->dev);
 if (!VAR_5) {
  VAR_10 = -VAR_0;
  goto out;
 }

 FUNC_0(&VAR_4->dev->dev, "%s fake irq handler: %d->%d\n",
  VAR_5->irq_name, VAR_5->isr_on,
  !VAR_5->isr_on);

 VAR_5->isr_on = !(VAR_5->isr_on);
 if (VAR_5->isr_on)
  VAR_5->ack_intr = 1;
out:
 if (VAR_4)
  FUNC_3(VAR_4);
 if (!VAR_10)
  VAR_10 = VAR_3;
 return VAR_10;
}
