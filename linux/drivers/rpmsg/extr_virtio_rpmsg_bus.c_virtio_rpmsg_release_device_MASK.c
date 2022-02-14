
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_rpmsg_channel {int dummy; } ;
struct rpmsg_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct virtio_rpmsg_channel*) ;
 struct rpmsg_device* FUNC_1 (struct device*) ;
 struct virtio_rpmsg_channel* FUNC_2 (struct rpmsg_device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct rpmsg_device *VAR_1 = FUNC_1(VAR_0);
 struct virtio_rpmsg_channel *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
}
