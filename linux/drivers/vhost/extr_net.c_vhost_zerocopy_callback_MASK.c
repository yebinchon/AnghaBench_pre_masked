
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int poll; TYPE_1__* heads; } ;
struct vhost_net_ubuf_ref {struct vhost_virtqueue* vq; } ;
struct ubuf_info {size_t desc; struct vhost_net_ubuf_ref* ctx; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct vhost_net_ubuf_ref*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ubuf_info *VAR_2, bool VAR_3)
{
 struct vhost_net_ubuf_ref *VAR_4 = VAR_2->ctx;
 struct vhost_virtqueue *VAR_5 = VAR_4->vq;
 int VAR_6;

 FUNC_0();


 VAR_5->heads[VAR_2->desc].len = VAR_3 ?
  VAR_0 : VAR_1;
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 <= 1 || !(VAR_6 % 16))
  FUNC_3(&VAR_5->poll);

 FUNC_1();
}
