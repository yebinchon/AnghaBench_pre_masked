
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
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct ibmvfc_host*,struct scsi_device*,int ) ;
 int FUNC_4 (struct ibmvfc_host*) ;
 struct ibmvfc_host* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_7)
{
 struct scsi_device *VAR_8 = VAR_7->device;
 struct ibmvfc_host *VAR_9 = FUNC_5(VAR_8->host);
 int VAR_10, VAR_11;
 int VAR_12 = VAR_1;

 VAR_0;
 VAR_11 = FUNC_0(VAR_7);
 FUNC_4(VAR_9);
 if (VAR_11 != VAR_2) {
  VAR_10 = FUNC_2(VAR_8, VAR_3);
  FUNC_1(VAR_8);
 } else
  VAR_10 = FUNC_2(VAR_8, VAR_4);

 if (!VAR_10)
  VAR_12 = FUNC_3(VAR_9, VAR_8, VAR_6);

 if (VAR_11 == VAR_2 && VAR_12 != VAR_1)
  VAR_12 = VAR_2;

 VAR_5;
 return VAR_12;
}
