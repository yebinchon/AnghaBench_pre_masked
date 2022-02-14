
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union niu_parent_id {int dummy; } niu_parent_id ;
typedef scalar_t__ u8 ;
struct TYPE_7__ {struct niu_parent* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct niu_parent {scalar_t__ plat_type; int rxdma_clock_divider; int* flow_key; int * ldg_map; int * tcam_key; int tcam_num_entries; int lock; int list; int refcnt; int id; struct platform_device* plat_dev; scalar_t__ index; } ;
struct niu {int dummy; } ;
struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_6__ {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 struct niu_parent* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,union niu_parent_id*,int) ;
 TYPE_2__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct platform_device* FUNC_7 (char*,int ,int *,int ) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct niu_parent *FUNC_10(struct niu *VAR_18,
      union niu_parent_id *VAR_19, u8 VAR_20)
{
 struct platform_device *VAR_21;
 struct niu_parent *VAR_22;
 int VAR_23;

 VAR_21 = FUNC_7("niu-board", VAR_16,
         ((void*)0), 0);
 if (FUNC_1(VAR_21))
  return ((void*)0);

 for (VAR_23 = 0; VAR_15[VAR_23].attr.name; VAR_23++) {
  int VAR_24 = FUNC_3(&VAR_21->dev,
          &VAR_15[VAR_23]);
  if (VAR_24)
   goto fail_unregister;
 }

 VAR_22 = FUNC_4(sizeof(*VAR_22), VAR_8);
 if (!VAR_22)
  goto fail_unregister;

 VAR_22->index = VAR_16++;

 VAR_21->dev.platform_data = VAR_22;
 VAR_22->plat_dev = VAR_21;

 FUNC_6(&VAR_22->id, VAR_19, sizeof(*VAR_19));
 VAR_22->plat_type = VAR_20;
 FUNC_0(&VAR_22->list);
 FUNC_2(&VAR_22->refcnt, 0);
 FUNC_5(&VAR_22->list, &VAR_17);
 FUNC_9(&VAR_22->lock);

 VAR_22->rxdma_clock_divider = 7500;

 VAR_22->tcam_num_entries = VAR_12;
 if (VAR_22->plat_type == VAR_13)
  VAR_22->tcam_num_entries = VAR_11;

 for (VAR_23 = VAR_1; VAR_23 <= VAR_0; VAR_23++) {
  int VAR_25 = VAR_23 - VAR_1;

  VAR_22->tcam_key[VAR_25] = VAR_14;
  VAR_22->flow_key[VAR_25] = (VAR_3 |
          VAR_2 |
          VAR_7 |
          (VAR_6 <<
           VAR_4) |
          (VAR_6 <<
           VAR_5));
 }

 for (VAR_23 = 0; VAR_23 < VAR_10 + 1; VAR_23++)
  VAR_22->ldg_map[VAR_23] = VAR_9;

 return VAR_22;

fail_unregister:
 FUNC_8(VAR_21);
 return ((void*)0);
}
