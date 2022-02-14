
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {size_t len; struct virtio_net_hdr* data; } ;
struct virtio_net_hdr {int member_0; } ;
struct tun_struct {int flags; int pcpu_stats; int vnet_hdr_sz; } ;
struct tun_pcpu_stats {size_t tx_bytes; int syncp; int tx_packets; } ;
struct tun_file {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef size_t ssize_t ;
typedef int gso ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct virtio_net_hdr*,size_t,struct iov_iter*) ;
 struct tun_pcpu_stats* FUNC_2 (int ) ;
 int FUNC_3 (struct iov_iter*,int) ;
 int FUNC_4 (struct iov_iter*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static ssize_t FUNC_9(struct tun_struct *VAR_3,
    struct tun_file *VAR_4,
    struct xdp_frame *VAR_5,
    struct iov_iter *VAR_6)
{
 int VAR_7 = 0;
 size_t VAR_8 = VAR_5->len;
 struct tun_pcpu_stats *VAR_9;
 size_t VAR_10;

 if (VAR_3->flags & VAR_2) {
  struct virtio_net_hdr VAR_11 = { 0 };

  VAR_7 = FUNC_0(VAR_3->vnet_hdr_sz);
  if (FUNC_8(FUNC_4(VAR_6) < VAR_7))
   return -VAR_1;
  if (FUNC_8(FUNC_1(&VAR_11, sizeof(VAR_11), VAR_6) !=
        sizeof(VAR_11)))
   return -VAR_0;
  FUNC_3(VAR_6, VAR_7 - sizeof(VAR_11));
 }

 VAR_10 = FUNC_1(VAR_5->data, VAR_8, VAR_6) + VAR_7;

 VAR_9 = FUNC_2(VAR_3->pcpu_stats);
 FUNC_6(&VAR_9->syncp);
 VAR_9->tx_packets++;
 VAR_9->tx_bytes += VAR_10;
 FUNC_7(&VAR_9->syncp);
 FUNC_5(VAR_3->pcpu_stats);

 return VAR_10;
}
