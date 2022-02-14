
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi_cmd {scalar_t__ comp; } ;
struct virtio_scsi {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct virtio_scsi *VAR_0, void *VAR_1)
{
 struct virtio_scsi_cmd *VAR_2 = VAR_1;

 if (VAR_2->comp)
  FUNC_0(VAR_2->comp);
}
