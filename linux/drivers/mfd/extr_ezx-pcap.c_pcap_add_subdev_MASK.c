
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int platform_data; int * parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pcap_subdev {int platform_data; int id; int name; } ;
struct pcap_chip {TYPE_1__* spi; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct pcap_chip *VAR_1,
      struct pcap_subdev *VAR_2)
{
 struct platform_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2->name, VAR_2->id);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev.parent = &VAR_1->spi->dev;
 VAR_3->dev.platform_data = VAR_2->platform_data;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_3);

 return VAR_4;
}
