
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {scalar_t__ num; int * iov; } ;
struct vhost_scsi_ctx {scalar_t__ head; size_t out; size_t in; void* out_size; int out_iter; void* in_size; } ;
struct vhost_scsi {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *,size_t,void*) ;
 void* FUNC_2 (int *,size_t) ;
 int FUNC_3 (char*,scalar_t__,size_t,size_t) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,struct vhost_virtqueue*) ;
 int FUNC_6 (int *,struct vhost_virtqueue*) ;
 scalar_t__ FUNC_7 (struct vhost_virtqueue*,int *,int ,size_t*,size_t*,int *,int *) ;

__attribute__((used)) static int
FUNC_8(struct vhost_scsi *VAR_3, struct vhost_virtqueue *VAR_4,
      struct vhost_scsi_ctx *VAR_5)
{
 int VAR_6 = -VAR_1;

 VAR_5->head = FUNC_7(VAR_4, VAR_4->iov,
         FUNC_0(VAR_4->iov), &VAR_5->out, &VAR_5->in,
         ((void*)0), ((void*)0));

 FUNC_3("vhost_get_vq_desc: head: %d, out: %u in: %u\n",
   VAR_5->head, VAR_5->out, VAR_5->in);


 if (FUNC_4(VAR_5->head < 0))
  goto done;


 if (VAR_5->head == VAR_4->num) {
  if (FUNC_4(FUNC_6(&VAR_3->dev, VAR_4))) {
   FUNC_5(&VAR_3->dev, VAR_4);
   VAR_6 = -VAR_0;
  }
  goto done;
 }





 VAR_5->out_size = FUNC_2(VAR_4->iov, VAR_5->out);
 VAR_5->in_size = FUNC_2(&VAR_4->iov[VAR_5->out], VAR_5->in);
 FUNC_1(&VAR_5->out_iter, VAR_2, VAR_4->iov, VAR_5->out, VAR_5->out_size);
 VAR_6 = 0;

done:
 return VAR_6;
}
