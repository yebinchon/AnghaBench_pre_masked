
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_2__ {int nr_resets; struct device_node* of_node; int * ops; int owner; } ;
struct reset_simple_data {int membase; int status_active_low; TYPE_1__ rcdev; int lock; } ;
struct device_node {int name; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct reset_simple_data*) ;
 struct reset_simple_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct device_node*,int ,struct resource*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct device_node *VAR_6)
{
 struct reset_simple_data *VAR_7;
 struct resource VAR_8;
 resource_size_t VAR_9;
 int VAR_10;
 u32 VAR_11 = 0x10;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_6, 0, &VAR_8);
 if (VAR_10)
  goto err_alloc;

 VAR_9 = FUNC_8(&VAR_8);
 if (!FUNC_6(VAR_8.start, VAR_9, VAR_6->name)) {
  VAR_10 = -VAR_0;
  goto err_alloc;
 }

 VAR_7->membase = FUNC_0(VAR_8.start, VAR_9);
 if (!VAR_7->membase) {
  VAR_10 = -VAR_1;
  goto err_alloc;
 }

 if (FUNC_4(VAR_6, "altr,modrst-offset", &VAR_11))
  FUNC_5("missing altr,modrst-offset property, assuming 0x10\n");
 VAR_7->membase += VAR_11;

 FUNC_9(&VAR_7->lock);

 VAR_7->rcdev.owner = VAR_4;
 VAR_7->rcdev.nr_resets = VAR_3 * 32;
 VAR_7->rcdev.ops = &VAR_5;
 VAR_7->rcdev.of_node = VAR_6;
 VAR_7->status_active_low = 1;

 return FUNC_7(&VAR_7->rcdev);

err_alloc:
 FUNC_1(VAR_7);
 return VAR_10;
}
