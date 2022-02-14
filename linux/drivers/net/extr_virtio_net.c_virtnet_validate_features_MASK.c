
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct virtio_device*,int ,char*) ;
 int FUNC_1 (struct virtio_device*,int ) ;

__attribute__((used)) static bool FUNC_2(struct virtio_device *VAR_6)
{
 if (!FUNC_1(VAR_6, VAR_3) &&
     (FUNC_0(VAR_6, VAR_1,
        "VIRTIO_NET_F_CTRL_VQ") ||
      FUNC_0(VAR_6, VAR_2,
        "VIRTIO_NET_F_CTRL_VQ") ||
      FUNC_0(VAR_6, VAR_4,
        "VIRTIO_NET_F_CTRL_VQ") ||
      FUNC_0(VAR_6, VAR_5, "VIRTIO_NET_F_CTRL_VQ") ||
      FUNC_0(VAR_6, VAR_0,
        "VIRTIO_NET_F_CTRL_VQ"))) {
  return 0;
 }

 return 1;
}
