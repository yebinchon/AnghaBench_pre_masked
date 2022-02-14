
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int type; } ;
struct virtio_vsock_pkt {int len; int buf_len; TYPE_1__* buf; TYPE_1__ hdr; } ;
struct vhost_virtqueue {int iov; } ;
struct iov_iter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (TYPE_1__*,int,struct iov_iter*) ;
 int FUNC_1 (struct iov_iter*,int ,int ,unsigned int,size_t) ;
 size_t FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct virtio_vsock_pkt*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 struct virtio_vsock_pkt* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct virtio_vsock_pkt*) ;
 int FUNC_9 (struct vhost_virtqueue*,char*,int,...) ;

__attribute__((used)) static struct virtio_vsock_pkt *
FUNC_10(struct vhost_virtqueue *VAR_4,
        unsigned int VAR_5, unsigned int VAR_6)
{
 struct virtio_vsock_pkt *VAR_7;
 struct iov_iter VAR_8;
 size_t VAR_9;
 size_t VAR_10;

 if (VAR_6 != 0) {
  FUNC_9(VAR_4, "Expected 0 input buffers, got %u\n", VAR_6);
  return ((void*)0);
 }

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_10 = FUNC_2(VAR_4->iov, VAR_5);
 FUNC_1(&VAR_8, VAR_3, VAR_4->iov, VAR_5, VAR_10);

 VAR_9 = FUNC_0(&VAR_7->hdr, sizeof(VAR_7->hdr), &VAR_8);
 if (VAR_9 != sizeof(VAR_7->hdr)) {
  FUNC_9(VAR_4, "Expected %zu bytes for pkt->hdr, got %zu bytes\n",
         sizeof(VAR_7->hdr), VAR_9);
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 if (FUNC_6(VAR_7->hdr.type) == VAR_2)
  VAR_7->len = FUNC_7(VAR_7->hdr.len);


 if (!VAR_7->len)
  return VAR_7;


 if (VAR_7->len > VAR_1) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 VAR_7->buf = FUNC_4(VAR_7->len, VAR_0);
 if (!VAR_7->buf) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 VAR_7->buf_len = VAR_7->len;

 VAR_9 = FUNC_0(VAR_7->buf, VAR_7->len, &VAR_8);
 if (VAR_9 != VAR_7->len) {
  FUNC_9(VAR_4, "Expected %u byte payload, got %zu bytes\n",
         VAR_7->len, VAR_9);
  FUNC_8(VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
