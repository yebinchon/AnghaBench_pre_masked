
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int dummy; } ;
struct vhost_scsi_ctx {scalar_t__ in_size; scalar_t__ rsp_size; scalar_t__ out_size; scalar_t__ req_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vhost_virtqueue*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct vhost_virtqueue *VAR_2, struct vhost_scsi_ctx *VAR_3)
{
 if (FUNC_0(VAR_3->in_size < VAR_3->rsp_size)) {
  FUNC_1(VAR_2,
         "Response buf too small, need min %zu bytes got %zu",
         VAR_3->rsp_size, VAR_3->in_size);
  return -VAR_0;
 } else if (FUNC_0(VAR_3->out_size < VAR_3->req_size)) {
  FUNC_1(VAR_2,
         "Request buf too small, need min %zu bytes got %zu",
         VAR_3->req_size, VAR_3->out_size);
  return -VAR_1;
 }

 return 0;
}
