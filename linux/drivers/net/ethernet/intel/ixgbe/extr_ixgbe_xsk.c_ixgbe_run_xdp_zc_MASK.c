
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct xdp_umem {int dummy; } ;
struct xdp_frame {int dummy; } ;
struct xdp_buff {int handle; scalar_t__ data_hard_start; scalar_t__ data; } ;
struct ixgbe_ring {int netdev; int xdp_prog; struct xdp_umem* xsk_umem; } ;
struct ixgbe_adapter {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_prog* FUNC_0 (int ) ;





 int FUNC_1 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_2 (int) ;
 struct xdp_frame* FUNC_3 (struct xdp_buff*) ;
 int FUNC_4 (struct ixgbe_adapter*,struct xdp_frame*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct bpf_prog*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,struct xdp_buff*,struct bpf_prog*) ;
 int FUNC_10 (struct xdp_umem*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct ixgbe_adapter *VAR_3,
       struct ixgbe_ring *VAR_4,
       struct xdp_buff *VAR_5)
{
 struct xdp_umem *VAR_6 = VAR_4->xsk_umem;
 int VAR_7, VAR_8 = VAR_1;
 struct bpf_prog *VAR_9;
 struct xdp_frame *VAR_10;
 u64 VAR_11;
 u32 VAR_12;

 FUNC_5();
 VAR_9 = FUNC_0(VAR_4->xdp_prog);
 VAR_12 = FUNC_1(VAR_9, VAR_5);
 VAR_11 = VAR_5->data - VAR_5->data_hard_start;

 VAR_5->handle = FUNC_10(VAR_6, VAR_5->handle, VAR_11);

 switch (VAR_12) {
 case 130:
  break;
 case 128:
  VAR_10 = FUNC_3(VAR_5);
  if (FUNC_8(!VAR_10)) {
   VAR_8 = VAR_0;
   break;
  }
  VAR_8 = FUNC_4(VAR_3, VAR_10);
  break;
 case 129:
  VAR_7 = FUNC_9(VAR_4->netdev, VAR_5, VAR_9);
  VAR_8 = !VAR_7 ? VAR_2 : VAR_0;
  break;
 default:
  FUNC_2(VAR_12);

 case 132:
  FUNC_7(VAR_4->netdev, VAR_9, VAR_12);

 case 131:
  VAR_8 = VAR_0;
  break;
 }
 FUNC_6();
 return VAR_8;
}
