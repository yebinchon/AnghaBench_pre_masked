
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct ibmvfc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct scsi_device*,int ,char*) ;
 int FUNC_3 (struct ibmvfc_host*,struct scsi_device*,int ) ;
 int FUNC_4 (struct ibmvfc_host*) ;
 struct ibmvfc_host* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_8)
{
 struct scsi_device *VAR_9 = VAR_8->device;
 struct ibmvfc_host *VAR_10 = FUNC_5(VAR_9->host);
 int VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14 = VAR_1;

 VAR_0;
 VAR_12 = FUNC_0(VAR_8);
 FUNC_4(VAR_10);
 if (VAR_12 != VAR_2) {
  VAR_11 = FUNC_1(VAR_9, VAR_4);
  VAR_13 = FUNC_2(VAR_9, VAR_3, "LUN");
 } else
  VAR_11 = FUNC_1(VAR_9, VAR_5);

 if (!VAR_11 && !VAR_13)
  VAR_14 = FUNC_3(VAR_10, VAR_9, VAR_7);

 if (VAR_12 == VAR_2 && VAR_14 != VAR_1)
  VAR_14 = VAR_2;

 VAR_6;
 return VAR_14;
}
