
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {scalar_t__ metasize; int len; struct virtio_net_hdr_mrg_rxbuf* data; int headroom; } ;
struct virtnet_info {int hdr_len; } ;
struct virtio_net_hdr_mrg_rxbuf {int dummy; } ;
struct send_queue {int sg; int vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct virtio_net_hdr_mrg_rxbuf*,int ,int ) ;
 int FUNC_1 (int ,struct virtio_net_hdr_mrg_rxbuf*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int ,int ) ;
 int FUNC_4 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_5(struct virtnet_info *VAR_4,
       struct send_queue *VAR_5,
       struct xdp_frame *VAR_6)
{
 struct virtio_net_hdr_mrg_rxbuf *VAR_7;
 int VAR_8;


 if (FUNC_2(VAR_6->metasize > 0))
  return -VAR_1;

 if (FUNC_2(VAR_6->headroom < VAR_4->hdr_len))
  return -VAR_2;


 VAR_6->data -= VAR_4->hdr_len;

 VAR_7 = VAR_6->data;
 FUNC_0(VAR_7, 0, VAR_4->hdr_len);
 VAR_6->len += VAR_4->hdr_len;

 FUNC_1(VAR_5->sg, VAR_6->data, VAR_6->len);

 VAR_8 = FUNC_3(VAR_5->vq, VAR_5->sg, 1, FUNC_4(VAR_6),
       VAR_3);
 if (FUNC_2(VAR_8))
  return -VAR_0;

 return 0;
}
