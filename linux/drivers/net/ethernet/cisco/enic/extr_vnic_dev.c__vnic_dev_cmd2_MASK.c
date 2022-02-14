
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct vnic_dev {int * args; struct devcmd2_controller* devcmd2; } ;
struct devcmd2_result {scalar_t__ color; int error; int * results; } ;
struct devcmd2_controller {int posted; int next_result; scalar_t__ color; scalar_t__ result_size; struct devcmd2_result* result; TYPE_2__* cmd_ring; TYPE_1__* wq_ctrl; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;
struct TYPE_4__ {int cmd; int flags; int * args; } ;
struct TYPE_3__ {int posted_index; int fetch_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct vnic_dev*,char*,int,...) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct vnic_dev *VAR_12, enum vnic_devcmd_cmd VAR_13,
     int VAR_14)
{
 struct devcmd2_controller *VAR_15 = VAR_12->devcmd2;
 struct devcmd2_result *VAR_16;
 u8 VAR_17;
 unsigned int VAR_18;
 int VAR_19, VAR_20;
 u32 VAR_21, VAR_22;
 u32 VAR_23 = VAR_15->posted;

 VAR_21 = FUNC_3(&VAR_15->wq_ctrl->fetch_index);

 if (VAR_21 == 0xFFFFFFFF)
  return -VAR_4;

 VAR_22 = (VAR_23 + 1) % VAR_2;

 if (VAR_22 == VAR_21) {
  FUNC_6(VAR_12, "devcmd2 %d: wq is full. fetch index: %u, posted index: %u\n",
       FUNC_2(VAR_13), VAR_21, VAR_23);
  return -VAR_3;
 }
 VAR_15->cmd_ring[VAR_23].cmd = VAR_13;
 VAR_15->cmd_ring[VAR_23].flags = 0;

 if ((FUNC_1(VAR_13) & VAR_11))
  VAR_15->cmd_ring[VAR_23].flags |= VAR_1;
 if (FUNC_0(VAR_13) & VAR_10)
  for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
   VAR_15->cmd_ring[VAR_23].args[VAR_18] = VAR_12->args[VAR_18];





 FUNC_7();
 FUNC_4(VAR_22, &VAR_15->wq_ctrl->posted_index);
 VAR_15->posted = VAR_22;

 if (VAR_15->cmd_ring[VAR_23].flags & VAR_1)
  return 0;

 VAR_16 = VAR_15->result + VAR_15->next_result;
 VAR_17 = VAR_15->color;

 VAR_15->next_result++;
 if (VAR_15->next_result == VAR_15->result_size) {
  VAR_15->next_result = 0;
  VAR_15->color = VAR_15->color ? 0 : 1;
 }

 for (VAR_19 = 0; VAR_19 < VAR_14; VAR_19++) {
  if (VAR_16->color == VAR_17) {
   if (VAR_16->error) {
    VAR_20 = VAR_16->error;
    if (VAR_20 != VAR_5 ||
        VAR_13 != VAR_0)
     FUNC_6(VAR_12, "Error %d devcmd %d\n",
          VAR_20, FUNC_2(VAR_13));
    return -VAR_20;
   }
   if (FUNC_0(VAR_13) & VAR_9)
    for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
     VAR_12->args[VAR_18] = VAR_16->results[VAR_18];

   return 0;
  }
  FUNC_5(100);
 }

 FUNC_6(VAR_12, "devcmd %d timed out\n", FUNC_2(VAR_13));

 return -VAR_6;
}
