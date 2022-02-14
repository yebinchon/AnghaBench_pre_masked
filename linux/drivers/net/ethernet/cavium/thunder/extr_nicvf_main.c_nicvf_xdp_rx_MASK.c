
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct xdp_buff {void* data; void* data_end; int * rxq; int data_hard_start; } ;
struct snd_queue {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rcv_queue {int xdp_rxq; } ;
struct page {int dummy; } ;
struct nicvf {TYPE_1__* pdev; int netdev; } ;
struct cqe_rx_t {scalar_t__ align_pad; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ VAR_4 ;


 int FUNC_0 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (void*,int ) ;
 int FUNC_3 (int *,int,scalar_t__,int ,int ) ;
 int FUNC_4 (struct nicvf*,int) ;
 int FUNC_5 (struct nicvf*,struct snd_queue*,int,int,int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (int ,struct bpf_prog*,int) ;
 struct page* FUNC_14 (void*) ;
 int FUNC_15 (struct xdp_buff*) ;

__attribute__((used)) static inline bool FUNC_16(struct nicvf *VAR_5, struct bpf_prog *VAR_6,
    struct cqe_rx_t *VAR_7, struct snd_queue *VAR_8,
    struct rcv_queue *VAR_9, struct sk_buff **VAR_10)
{
 struct xdp_buff VAR_11;
 struct page *VAR_12;
 u32 VAR_13;
 u16 VAR_14, VAR_15 = 0;
 u64 VAR_16, VAR_17;
 void *VAR_18;


 VAR_14 = *((u16 *)((void *)VAR_7 + (3 * sizeof(u64))));
 VAR_16 = *((u64 *)((void *)VAR_7 + (7 * sizeof(u64))));

 VAR_17 = FUNC_4(VAR_5, VAR_16);
 if (!VAR_17)
  return 0;
 VAR_17 = (u64)FUNC_8(VAR_17);
 VAR_12 = FUNC_14((void *)VAR_17);

 VAR_11.data_hard_start = FUNC_6(VAR_12);
 VAR_11.data = (void *)VAR_17;
 FUNC_15(&VAR_11);
 VAR_11.data_end = VAR_11.data + VAR_14;
 VAR_11.rxq = &VAR_9->xdp_rxq;
 VAR_18 = VAR_11.data;

 FUNC_10();
 VAR_13 = FUNC_0(VAR_6, &VAR_11);
 FUNC_11();

 VAR_14 = VAR_11.data_end - VAR_11.data;

 if (VAR_18 != VAR_11.data) {
  VAR_15 = VAR_18 - VAR_11.data;
  VAR_16 -= VAR_15;
 }

 switch (VAR_13) {
 case 129:





  if (FUNC_7(VAR_12) == 1) {
   VAR_16 &= VAR_2;
   FUNC_3(&VAR_5->pdev->dev, VAR_16,
          VAR_3 + VAR_4,
          VAR_1,
          VAR_0);
  }


  *VAR_10 = FUNC_2(VAR_11.data,
     VAR_3 - VAR_7->align_pad + VAR_15);
  if (!*VAR_10)
   FUNC_9(VAR_12);
  else
   FUNC_12(*VAR_10, VAR_14);
  return 0;
 case 128:
  FUNC_5(VAR_5, VAR_8, (u64)VAR_11.data, VAR_16, VAR_14);
  return 1;
 default:
  FUNC_1(VAR_13);

 case 131:
  FUNC_13(VAR_5->netdev, VAR_6, VAR_13);

 case 130:





  if (FUNC_7(VAR_12) == 1) {
   VAR_16 &= VAR_2;
   FUNC_3(&VAR_5->pdev->dev, VAR_16,
          VAR_3 + VAR_4,
          VAR_1,
          VAR_0);
  }
  FUNC_9(VAR_12);
  return 1;
 }
 return 0;
}
