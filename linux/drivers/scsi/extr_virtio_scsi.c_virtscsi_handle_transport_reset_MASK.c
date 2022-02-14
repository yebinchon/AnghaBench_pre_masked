
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi_event {unsigned int* lun; int reason; } ;
struct virtio_scsi {int vdev; } ;
struct scsi_device {int dummy; } ;
struct Scsi_Host {int host_no; } ;




 int FUNC_0 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct Scsi_Host*,int ,unsigned int,unsigned int) ;
 struct scsi_device* FUNC_3 (struct Scsi_Host*,int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (struct scsi_device*) ;
 int FUNC_6 (int ,int ) ;
 struct Scsi_Host* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct virtio_scsi *VAR_0,
         struct virtio_scsi_event *VAR_1)
{
 struct scsi_device *VAR_2;
 struct Scsi_Host *VAR_3 = FUNC_7(VAR_0->vdev);
 unsigned int VAR_4 = VAR_1->lun[1];
 unsigned int VAR_5 = (VAR_1->lun[2] << 8) | VAR_1->lun[3];

 switch (FUNC_6(VAR_0->vdev, VAR_1->reason)) {
 case 128:
  FUNC_2(VAR_3, 0, VAR_4, VAR_5);
  break;
 case 129:
  VAR_2 = FUNC_3(VAR_3, 0, VAR_4, VAR_5);
  if (VAR_2) {
   FUNC_5(VAR_2);
   FUNC_4(VAR_2);
  } else {
   FUNC_0("SCSI device %d 0 %d %d not found\n",
    VAR_3->host_no, VAR_4, VAR_5);
  }
  break;
 default:
  FUNC_1("Unsupport virtio scsi event reason %x\n", VAR_1->reason);
 }
}
