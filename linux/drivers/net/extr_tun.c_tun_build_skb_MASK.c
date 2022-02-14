
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct xdp_buff {char* data_hard_start; char* data; char* data_end; int * rxq; } ;
struct virtio_net_hdr {scalar_t__ gso_type; } ;
struct tun_struct {int xdp_prog; } ;
struct tun_file {int xdp_rxq; } ;
struct skb_shared_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct page_frag {int offset; int page; } ;
struct iov_iter {int dummy; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {struct page_frag task_frag; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct sk_buff* FUNC_3 (struct tun_file*,struct page_frag*,char*,int,int,int) ;
 scalar_t__ FUNC_4 (struct bpf_prog*,struct xdp_buff*) ;
 size_t FUNC_5 (int ,int,int,struct iov_iter*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct bpf_prog* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int,struct page_frag*,int ) ;
 int FUNC_15 (struct tun_struct*,struct bpf_prog*,struct xdp_buff*,scalar_t__) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (struct xdp_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_19(struct tun_struct *VAR_10,
         struct tun_file *VAR_11,
         struct iov_iter *VAR_12,
         struct virtio_net_hdr *VAR_13,
         int VAR_14, int *VAR_15)
{
 struct page_frag *VAR_16 = &VAR_9->task_frag;
 struct bpf_prog *VAR_17;
 int VAR_18 = FUNC_2(sizeof(struct skb_shared_info));
 char *VAR_19;
 size_t VAR_20;
 int VAR_21 = VAR_4;
 int VAR_22 = 0;

 FUNC_12();
 VAR_17 = FUNC_11(VAR_10->xdp_prog);
 if (VAR_17)
  VAR_21 += VAR_5;
 VAR_18 += FUNC_2(VAR_14 + VAR_21);
 FUNC_13();

 VAR_16->offset = FUNC_0((u64)VAR_16->offset, VAR_3);
 if (FUNC_16(!FUNC_14(VAR_18, VAR_16, VAR_2)))
  return FUNC_1(-VAR_1);

 VAR_19 = (char *)FUNC_9(VAR_16->page) + VAR_16->offset;
 VAR_20 = FUNC_5(VAR_16->page,
         VAR_16->offset + VAR_21,
         VAR_14, VAR_12);
 if (VAR_20 != VAR_14)
  return FUNC_1(-VAR_0);





 if (VAR_13->gso_type || !VAR_17) {
  *VAR_15 = 1;
  return FUNC_3(VAR_11, VAR_16, VAR_19, VAR_18, VAR_14,
           VAR_21);
 }

 *VAR_15 = 0;

 FUNC_7();
 FUNC_12();
 VAR_17 = FUNC_11(VAR_10->xdp_prog);
 if (VAR_17) {
  struct xdp_buff VAR_23;
  u32 VAR_24;

  VAR_23.data_hard_start = VAR_19;
  VAR_23.data = VAR_19 + VAR_21;
  FUNC_18(&VAR_23);
  VAR_23.data_end = VAR_23.data + VAR_14;
  VAR_23.rxq = &VAR_11->xdp_rxq;

  VAR_24 = FUNC_4(VAR_17, &VAR_23);
  if (VAR_24 == VAR_7 || VAR_24 == VAR_8) {
   FUNC_6(VAR_16->page);
   VAR_16->offset += VAR_18;
  }
  VAR_22 = FUNC_15(VAR_10, VAR_17, &VAR_23, VAR_24);
  if (VAR_22 < 0)
   goto err_xdp;
  if (VAR_22 == VAR_7)
   FUNC_17();
  if (VAR_22 != VAR_6)
   goto out;

  VAR_21 = VAR_23.data - VAR_23.data_hard_start;
  VAR_14 = VAR_23.data_end - VAR_23.data;
 }
 FUNC_13();
 FUNC_8();

 return FUNC_3(VAR_11, VAR_16, VAR_19, VAR_18, VAR_14, VAR_21);

err_xdp:
 FUNC_10(VAR_16->page);
out:
 FUNC_13();
 FUNC_8();
 return ((void*)0);
}
