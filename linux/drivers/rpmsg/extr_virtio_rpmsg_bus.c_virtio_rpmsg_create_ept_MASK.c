
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_rpmsg_channel {int vrp; } ;
struct rpmsg_endpoint {int dummy; } ;
struct rpmsg_device {int dummy; } ;
struct rpmsg_channel_info {int src; } ;
typedef int rpmsg_rx_cb_t ;


 struct rpmsg_endpoint* FUNC_0 (int ,struct rpmsg_device*,int ,void*,int ) ;
 struct virtio_rpmsg_channel* FUNC_1 (struct rpmsg_device*) ;

__attribute__((used)) static struct rpmsg_endpoint *FUNC_2(struct rpmsg_device *VAR_0,
            rpmsg_rx_cb_t VAR_1,
            void *VAR_2,
            struct rpmsg_channel_info VAR_3)
{
 struct virtio_rpmsg_channel *VAR_4 = FUNC_1(VAR_0);

 return FUNC_0(VAR_4->vrp, VAR_0, VAR_1, VAR_2, VAR_3.src);
}
