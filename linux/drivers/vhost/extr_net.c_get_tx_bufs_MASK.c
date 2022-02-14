
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int num; } ;
struct vhost_net_virtqueue {unsigned int vhost_hlen; struct vhost_virtqueue vq; } ;
struct vhost_net {int dummy; } ;
struct msghdr {int msg_iter; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct vhost_virtqueue*,int *,unsigned int,unsigned int) ;
 int FUNC_1 (struct vhost_net*,struct vhost_net_virtqueue*,unsigned int*,unsigned int*,struct msghdr*,int*) ;
 int FUNC_2 (struct vhost_virtqueue*,char*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct vhost_net *VAR_1,
         struct vhost_net_virtqueue *VAR_2,
         struct msghdr *VAR_3,
         unsigned int *VAR_4, unsigned int *VAR_5,
         size_t *VAR_6, bool *VAR_7)
{
 struct vhost_virtqueue *VAR_8 = &VAR_2->vq;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5, VAR_3, VAR_7);

 if (VAR_9 < 0 || VAR_9 == VAR_8->num)
  return VAR_9;

 if (*VAR_5) {
  FUNC_2(VAR_8, "Unexpected descriptor format for TX: out %d, int %d\n",
   *VAR_4, *VAR_5);
  return -VAR_0;
 }


 *VAR_6 = FUNC_0(VAR_8, &VAR_3->msg_iter, VAR_2->vhost_hlen, *VAR_4);
 if (*VAR_6 == 0) {
  FUNC_2(VAR_8, "Unexpected header len for TX: %zd expected %zd\n",
   *VAR_6, VAR_2->vhost_hlen);
  return -VAR_0;
 }

 return VAR_9;
}
