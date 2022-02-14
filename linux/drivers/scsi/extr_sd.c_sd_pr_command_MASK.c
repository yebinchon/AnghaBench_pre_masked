
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct scsi_sense_hdr {int dummy; } ;
struct scsi_device {int dummy; } ;
struct block_device {int bd_disk; } ;
typedef int data ;
struct TYPE_2__ {struct scsi_device* device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct scsi_device*,int *,int ,int **,int,struct scsi_sense_hdr*,int ,int ,int *) ;
 int FUNC_5 (struct scsi_device*,int *,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_6 (struct scsi_sense_hdr*) ;
 int FUNC_7 (int ,struct scsi_device*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct block_device *VAR_6, u8 VAR_7,
  u64 VAR_8, u64 VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct scsi_device *VAR_12 = FUNC_3(VAR_6->bd_disk)->device;
 struct scsi_sense_hdr VAR_13;
 int VAR_14;
 u8 VAR_15[16] = { 0, };
 u8 VAR_16[24] = { 0, };

 VAR_15[0] = VAR_3;
 VAR_15[1] = VAR_7;
 VAR_15[2] = VAR_10;
 FUNC_1(sizeof(VAR_16), &VAR_15[5]);

 FUNC_2(VAR_8, &VAR_16[0]);
 FUNC_2(VAR_9, &VAR_16[8]);
 VAR_16[20] = VAR_11;

 VAR_14 = FUNC_4(VAR_12, VAR_15, VAR_0, &VAR_16, sizeof(VAR_16),
   &VAR_13, VAR_5, VAR_4, ((void*)0));

 if (FUNC_0(VAR_14) == VAR_1 &&
     FUNC_6(&VAR_13)) {
  FUNC_7(VAR_2, VAR_12, "PR command failed: %d\n", VAR_14);
  FUNC_5(VAR_12, ((void*)0), &VAR_13);
 }

 return VAR_14;
}
