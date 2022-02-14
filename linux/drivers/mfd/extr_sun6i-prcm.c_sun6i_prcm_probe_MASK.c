
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct prcm_data {int nsubdevs; int subdevs; } ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct prcm_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,struct resource*,int,int *) ;
 struct of_device_id* FUNC_2 (int ,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 const struct of_device_id *VAR_5;
 const struct prcm_data *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_3, VAR_4->dev.of_node);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_5->data;

 VAR_7 = FUNC_3(VAR_4, VAR_2, 0);
 if (!VAR_7) {
  FUNC_0(&VAR_4->dev, "no prcm memory region provided\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_1(&VAR_4->dev, 0, VAR_6->subdevs, VAR_6->nsubdevs,
         VAR_7, -1, ((void*)0));
 if (VAR_8) {
  FUNC_0(&VAR_4->dev, "failed to add subdevices\n");
  return VAR_8;
 }

 return 0;
}
