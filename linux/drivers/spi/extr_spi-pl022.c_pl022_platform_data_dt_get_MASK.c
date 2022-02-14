
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl022_ssp_controller {int bus_id; int enable_dma; int rt; int autosuspend_delay; int num_chipselect; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct pl022_ssp_controller* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct pl022_ssp_controller *
FUNC_4(struct device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->of_node;
 struct pl022_ssp_controller *VAR_3;
 u32 VAR_4 = 0;

 if (!VAR_2) {
  FUNC_0(VAR_1, "no dt node defined\n");
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_1, sizeof(struct pl022_ssp_controller), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->bus_id = -1;
 VAR_3->enable_dma = 1;
 FUNC_3(VAR_2, "num-cs", &VAR_4);
 VAR_3->num_chipselect = VAR_4;
 FUNC_3(VAR_2, "pl022,autosuspend-delay",
        &VAR_3->autosuspend_delay);
 VAR_3->rt = FUNC_2(VAR_2, "pl022,rt");

 return VAR_3;
}
