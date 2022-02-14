
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_rpmsg_channel {int vrp; } ;
struct rpmsg_endpoint {int rpdev; } ;


 int FUNC_0 (int ,struct rpmsg_endpoint*) ;
 struct virtio_rpmsg_channel* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rpmsg_endpoint *VAR_0)
{
 struct virtio_rpmsg_channel *VAR_1 = FUNC_1(VAR_0->rpdev);

 FUNC_0(VAR_1->vrp, VAR_0);
}
