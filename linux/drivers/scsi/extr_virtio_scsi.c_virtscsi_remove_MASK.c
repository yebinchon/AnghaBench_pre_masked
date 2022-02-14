
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi {int dummy; } ;
struct virtio_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 struct virtio_scsi* FUNC_2 (struct Scsi_Host*) ;
 scalar_t__ FUNC_3 (struct virtio_device*,int ) ;
 struct Scsi_Host* FUNC_4 (struct virtio_device*) ;
 int FUNC_5 (struct virtio_scsi*) ;
 int FUNC_6 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_7(struct virtio_device *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_4(VAR_1);
 struct virtio_scsi *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_3(VAR_1, VAR_0))
  FUNC_5(VAR_3);

 FUNC_1(VAR_2);
 FUNC_6(VAR_1);
 FUNC_0(VAR_2);
}
