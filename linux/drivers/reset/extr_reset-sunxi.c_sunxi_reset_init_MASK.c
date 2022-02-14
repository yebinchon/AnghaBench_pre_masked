
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_2__ {int nr_resets; struct device_node* of_node; int * ops; int owner; } ;
struct reset_simple_data {int active_low; TYPE_1__ rcdev; int lock; int membase; } ;
struct device_node {int name; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct reset_simple_data*) ;
 struct reset_simple_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct device_node*,int ,struct resource*) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct device_node *VAR_5)
{
 struct reset_simple_data *VAR_6;
 struct resource VAR_7;
 resource_size_t VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_5, 0, &VAR_7);
 if (VAR_9)
  goto err_alloc;

 VAR_8 = FUNC_6(&VAR_7);
 if (!FUNC_4(VAR_7.start, VAR_8, VAR_5->name)) {
  VAR_9 = -VAR_0;
  goto err_alloc;
 }

 VAR_6->membase = FUNC_0(VAR_7.start, VAR_8);
 if (!VAR_6->membase) {
  VAR_9 = -VAR_1;
  goto err_alloc;
 }

 FUNC_7(&VAR_6->lock);

 VAR_6->rcdev.owner = VAR_3;
 VAR_6->rcdev.nr_resets = VAR_8 * 8;
 VAR_6->rcdev.ops = &VAR_4;
 VAR_6->rcdev.of_node = VAR_5;
 VAR_6->active_low = 1;

 return FUNC_5(&VAR_6->rcdev);

err_alloc:
 FUNC_1(VAR_6);
 return VAR_9;
}
