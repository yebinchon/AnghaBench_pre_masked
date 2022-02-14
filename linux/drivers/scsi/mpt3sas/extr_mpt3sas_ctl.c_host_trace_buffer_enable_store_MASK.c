
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpt3_diag_register {size_t buffer_type; int requested_buffer_size; int unique_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {int* diag_buffer_status; scalar_t__* diag_buffer; scalar_t__ is_driver_loading; scalar_t__ pci_error_recovery; scalar_t__ remove_host; scalar_t__ shost_recovery; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct mpt3_diag_register*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,char*) ;
 int FUNC_3 (struct mpt3_diag_register*,int ,int) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,size_t,int *) ;
 struct MPT3SAS_ADAPTER* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (char const*,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_5,
 struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_1(VAR_5);
 struct MPT3SAS_ADAPTER *VAR_10 = FUNC_5(VAR_9);
 char VAR_11[10] = "";
 struct mpt3_diag_register VAR_12;
 u8 VAR_13 = 0;


 if (VAR_10->shost_recovery || VAR_10->remove_host ||
     VAR_10->pci_error_recovery || VAR_10->is_driver_loading)
  return -VAR_0;

 if (FUNC_6(VAR_7, "%9s", VAR_11) != 1)
  return -VAR_1;

 if (!FUNC_7(VAR_11, "post")) {

  if ((VAR_10->diag_buffer[VAR_2]) &&
      (VAR_10->diag_buffer_status[VAR_2] &
      VAR_3) &&
      ((VAR_10->diag_buffer_status[VAR_2] &
      VAR_4) == 0))
   goto out;
  FUNC_3(&VAR_12, 0, sizeof(struct mpt3_diag_register));
  FUNC_2(VAR_10, "posting host trace buffers\n");
  VAR_12.buffer_type = VAR_2;
  VAR_12.requested_buffer_size = (1024 * 1024);
  VAR_12.unique_id = 0x7075900;
  VAR_10->diag_buffer_status[VAR_2] = 0;
  FUNC_0(VAR_10, &VAR_12);
 } else if (!FUNC_7(VAR_11, "release")) {

  if (!VAR_10->diag_buffer[VAR_2])
   goto out;
  if ((VAR_10->diag_buffer_status[VAR_2] &
      VAR_3) == 0)
   goto out;
  if ((VAR_10->diag_buffer_status[VAR_2] &
      VAR_4))
   goto out;
  FUNC_2(VAR_10, "releasing host trace buffer\n");
  FUNC_4(VAR_10, VAR_2,
      &VAR_13);
 }

 out:
 return FUNC_8(VAR_7);
}
