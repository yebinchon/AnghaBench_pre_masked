
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_modedef {scalar_t__ sysv; scalar_t__ defaults_for_writes; scalar_t__ do_read_ahead; scalar_t__ do_async_writes; scalar_t__ do_buffer_writes; struct scsi_tape* tape; } ;
struct scsi_tape {scalar_t__ sili; scalar_t__ immediate_filemark; scalar_t__ immediate; scalar_t__ scsi2_logical; scalar_t__ can_partitions; scalar_t__ omit_blklims; scalar_t__ can_bsr; scalar_t__ fast_mteom; scalar_t__ two_fm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 struct st_modedef* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_17, struct device_attribute *VAR_18, char *VAR_19)
{
 struct st_modedef *VAR_20 = FUNC_1(VAR_17);
 struct scsi_tape *VAR_21 = VAR_20->tape;
 int VAR_22;
 ssize_t VAR_23 = 0;

 VAR_22 = VAR_20->do_buffer_writes ? VAR_1 : 0;
 VAR_22 |= VAR_20->do_async_writes ? VAR_0 : 0;
 VAR_22 |= VAR_20->do_read_ahead ? VAR_10 : 0;
 FUNC_0( VAR_22 |= VAR_16 ? VAR_4 : 0 );
 VAR_22 |= VAR_21->two_fm ? VAR_14 : 0;
 VAR_22 |= VAR_21->fast_mteom ? VAR_6 : 0;
 VAR_22 |= VAR_20->defaults_for_writes ? VAR_5 : 0;
 VAR_22 |= VAR_21->can_bsr ? VAR_2 : 0;
 VAR_22 |= VAR_21->omit_blklims ? VAR_9 : 0;
 VAR_22 |= VAR_21->can_partitions ? VAR_3 : 0;
 VAR_22 |= VAR_21->scsi2_logical ? VAR_11 : 0;
 VAR_22 |= VAR_20->sysv ? VAR_13 : 0;
 VAR_22 |= VAR_21->immediate ? VAR_7 : 0;
 VAR_22 |= VAR_21->immediate_filemark ? VAR_8 : 0;
 VAR_22 |= VAR_21->sili ? VAR_12 : 0;

 VAR_23 = FUNC_2(VAR_19, VAR_15, "0x%08x\n", VAR_22);
 return VAR_23;
}
