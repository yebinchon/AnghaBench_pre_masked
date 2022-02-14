
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_raid_path_request {int request_id; int error_index; } ;
struct pqi_raid_error_info {int dummy; } ;
struct pqi_iu_header {scalar_t__ iu_type; int iu_length; } ;
struct pqi_io_request {struct pqi_iu_header* error_info; int * context; int io_complete_callback; struct pqi_raid_error_info* iu; int index; } ;
struct pqi_ctrl_info {int sync_request_sem; TYPE_1__* pci_dev; int * queue_groups; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 size_t FUNC_5 (int *) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (struct pqi_raid_error_info*,struct pqi_iu_header*,int) ;
 int FUNC_8 (struct pqi_raid_error_info*,int ,int) ;
 int FUNC_9 (unsigned long) ;
 struct pqi_io_request* FUNC_10 (struct pqi_ctrl_info*) ;
 int FUNC_11 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_12 (struct pqi_ctrl_info*) ;
 int FUNC_13 (struct pqi_ctrl_info*) ;
 int FUNC_14 (struct pqi_io_request*) ;
 int FUNC_15 (struct pqi_iu_header*) ;
 int VAR_10 ;
 int FUNC_16 (struct pqi_ctrl_info*,int *,int ,struct pqi_io_request*) ;
 int FUNC_17 (struct pqi_ctrl_info*,int *) ;
 unsigned long FUNC_18 (struct pqi_ctrl_info*,unsigned long) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *) ;
 int VAR_11 ;
 int FUNC_21 (int *,int ) ;

__attribute__((used)) static int FUNC_22(struct pqi_ctrl_info *VAR_12,
 struct pqi_iu_header *VAR_13, unsigned int VAR_14,
 struct pqi_raid_error_info *VAR_15, unsigned long VAR_16)
{
 int VAR_17 = 0;
 struct pqi_io_request *VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20;
 size_t VAR_21;
 FUNC_0(VAR_11);






 if (VAR_14 & VAR_7) {
  if (FUNC_3(&VAR_12->sync_request_sem))
   return -VAR_1;
 } else {
  if (VAR_16 == VAR_3) {
   FUNC_2(&VAR_12->sync_request_sem);
  } else {
   VAR_19 = VAR_9;
   if (FUNC_4(&VAR_12->sync_request_sem,
    FUNC_9(VAR_16)))
    return -VAR_2;
   VAR_20 =
    FUNC_6(VAR_9 - VAR_19);
   if (VAR_20 >= VAR_16) {
    VAR_17 = -VAR_2;
    goto out;
   }
   VAR_16 -= VAR_20;
  }
 }

 FUNC_11(VAR_12);
 VAR_16 = FUNC_18(VAR_12, VAR_16);
 if (VAR_16 == 0) {
  FUNC_13(VAR_12);
  VAR_17 = -VAR_2;
  goto out;
 }

 if (FUNC_12(VAR_12)) {
  FUNC_13(VAR_12);
  VAR_17 = -VAR_0;
  goto out;
 }

 VAR_18 = FUNC_10(VAR_12);

 FUNC_19(VAR_18->index,
  &(((struct pqi_raid_path_request *)VAR_13)->request_id));

 if (VAR_13->iu_type == VAR_6)
  ((struct pqi_raid_path_request *)VAR_13)->error_index =
   ((struct pqi_raid_path_request *)VAR_13)->request_id;

 VAR_21 = FUNC_5(&VAR_13->iu_length) +
  VAR_5;
 FUNC_7(VAR_18->iu, VAR_13, VAR_21);

 VAR_18->io_complete_callback = VAR_10;
 VAR_18->context = &VAR_11;

 FUNC_16(VAR_12,
  &VAR_12->queue_groups[VAR_4], VAR_8,
  VAR_18);

 FUNC_13(VAR_12);

 if (VAR_16 == VAR_3) {
  FUNC_17(VAR_12, &VAR_11);
 } else {
  if (!FUNC_21(&VAR_11,
   FUNC_9(VAR_16))) {
   FUNC_1(&VAR_12->pci_dev->dev,
    "command timed out\n");
   VAR_17 = -VAR_2;
  }
 }

 if (VAR_15) {
  if (VAR_18->error_info)
   FUNC_7(VAR_15, VAR_18->error_info,
    sizeof(*VAR_15));
  else
   FUNC_8(VAR_15, 0, sizeof(*VAR_15));
 } else if (VAR_17 == 0 && VAR_18->error_info) {
  VAR_17 = FUNC_15(
   VAR_18->error_info);
 }

 FUNC_14(VAR_18);

out:
 FUNC_20(&VAR_12->sync_request_sem);

 return VAR_17;
}
