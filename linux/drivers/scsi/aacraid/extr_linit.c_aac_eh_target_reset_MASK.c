
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct scsi_device {struct Scsi_Host* host; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct fib {int dummy; } ;
struct aac_hba_map_info {scalar_t__ devtype; int reset_state; } ;
struct aac_dev {struct aac_hba_map_info** hba_map; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int fib_callback ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aac_hba_map_info*,struct fib*) ;
 struct fib* FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (int ,struct fib*,int ,void*) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 size_t FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_7)
{
 struct scsi_device * VAR_8 = VAR_7->device;
 struct Scsi_Host * VAR_9 = VAR_8->host;
 struct aac_dev * VAR_10 = (struct aac_dev *)VAR_9->hostdata;
 struct aac_hba_map_info *VAR_11;
 int VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15 = VAR_4;
 struct fib *VAR_16;
 int VAR_17;
 u8 VAR_18;

 VAR_13 = FUNC_3(FUNC_6(VAR_7));
 VAR_14 = FUNC_7(VAR_7);

 if (VAR_13 >= VAR_2 || VAR_14 >= VAR_3)
  return VAR_4;

 VAR_11 = &VAR_10->hba_map[VAR_13][VAR_14];

 if (VAR_11->devtype != VAR_0 &&
     VAR_11->reset_state > 0)
  return VAR_4;

 FUNC_5("%s: Host adapter reset request. SCSI hang ?\n",
        VAR_1);

 VAR_16 = FUNC_1(VAR_10);
 if (!VAR_16)
  return VAR_15;



 VAR_18 = FUNC_0(VAR_11, VAR_16);

 VAR_11->reset_state = 2;

 VAR_17 = FUNC_2(VAR_18, VAR_16,
         (fib_callback) VAR_6,
         (void *) VAR_11);


 for (VAR_12 = 0; VAR_12 < 15; ++VAR_12) {
  if (VAR_11->reset_state <= 0) {
   VAR_15 = VAR_11->reset_state == 0 ? VAR_5 : VAR_4;
   break;
  }
  FUNC_4(1000);
 }

 return VAR_15;
}
