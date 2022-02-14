
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hw_queue_properties {scalar_t__ type; scalar_t__ driver_only; } ;
struct asic_fixed_properties {struct hw_queue_properties* hw_queues_props; } ;
struct hl_device {int dev; struct asic_fixed_properties asic_prop; } ;
struct hl_cs_chunk {size_t queue_index; int cb_handle; int cb_size; } ;
struct hl_cb_mgr {int dummy; } ;
struct hl_cb {scalar_t__ size; int lock; int cs_cnt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 struct hl_cb* FUNC_1 (struct hl_device*,struct hl_cb_mgr*,scalar_t__) ;
 int FUNC_2 (struct hl_cb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct hl_cb *FUNC_5(struct hl_device *VAR_4,
     struct hl_cb_mgr *VAR_5,
     struct hl_cs_chunk *VAR_6,
     bool *VAR_7)
{
 struct asic_fixed_properties *VAR_8 = &VAR_4->asic_prop;
 struct hw_queue_properties *VAR_9;
 u32 VAR_10;
 struct hl_cb *VAR_11;


 *VAR_7 = 1;

 VAR_9 = &VAR_8->hw_queues_props[VAR_6->queue_index];

 if ((VAR_6->queue_index >= VAR_0) ||
   (VAR_9->type == VAR_3)) {
  FUNC_0(VAR_4->dev, "Queue index %d is invalid\n",
   VAR_6->queue_index);
  return ((void*)0);
 }

 if (VAR_9->driver_only) {
  FUNC_0(VAR_4->dev,
   "Queue index %d is restricted for the kernel driver\n",
   VAR_6->queue_index);
  return ((void*)0);
 } else if (VAR_9->type == VAR_2) {
  *VAR_7 = 0;
  return (struct hl_cb *) (uintptr_t) VAR_6->cb_handle;
 }


 VAR_10 = (u32) (VAR_6->cb_handle >> VAR_1);

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_10);
 if (!VAR_11) {
  FUNC_0(VAR_4->dev, "CB handle 0x%x invalid\n", VAR_10);
  return ((void*)0);
 }

 if ((VAR_6->cb_size < 8) || (VAR_6->cb_size > VAR_11->size)) {
  FUNC_0(VAR_4->dev, "CB size %u invalid\n", VAR_6->cb_size);
  goto release_cb;
 }

 FUNC_3(&VAR_11->lock);
 VAR_11->cs_cnt++;
 FUNC_4(&VAR_11->lock);

 return VAR_11;

release_cb:
 FUNC_2(VAR_11);
 return ((void*)0);
}
