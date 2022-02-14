
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct scsi_device {int sdev_gendev; } ;
struct esas2r_adapter {TYPE_1__* host; } ;
struct TYPE_3__ {int shost_gendev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,char*,int,...) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 struct scsi_device* FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_4(struct esas2r_adapter *VAR_3, u16 VAR_4)
{
 int VAR_5;
 struct scsi_device *VAR_6;

 VAR_6 = FUNC_2(VAR_3->host, 0, VAR_4, 0);

 if (VAR_6) {
  FUNC_0(
   VAR_2,
   &(VAR_6->
     sdev_gendev),
   "scsi device already exists at id %d", VAR_4);

  FUNC_3(VAR_6);
 } else {
  FUNC_0(
   VAR_1,
   &(VAR_3->host->
     shost_gendev),
   "scsi_add_device() called for 0:%d:0",
   VAR_4);

  VAR_5 = FUNC_1(VAR_3->host, 0, VAR_4, 0);
  if (VAR_5) {
   FUNC_0(
    VAR_0,
    &(VAR_3->host->
      shost_gendev),
    "scsi_add_device failed with %d for id %d",
    VAR_5, VAR_4);
  }
 }
}
