
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct xdp_buff {int data_hard_start; } ;
struct sk_buff {int dummy; } ;
struct ixgbe_ring {int netdev; int xdp_prog; } ;
struct ixgbe_adapter {int netdev; } ;
struct bpf_prog {int dummy; } ;


 struct sk_buff* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_prog* FUNC_1 (int ) ;





 int FUNC_2 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_3 (int) ;
 struct xdp_frame* FUNC_4 (struct xdp_buff*) ;
 int FUNC_5 (struct ixgbe_adapter*,struct xdp_frame*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct bpf_prog*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,struct xdp_buff*,struct bpf_prog*) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct ixgbe_adapter *VAR_3,
         struct ixgbe_ring *VAR_4,
         struct xdp_buff *VAR_5)
{
 int VAR_6, VAR_7 = VAR_1;
 struct bpf_prog *VAR_8;
 struct xdp_frame *VAR_9;
 u32 VAR_10;

 FUNC_7();
 VAR_8 = FUNC_1(VAR_4->xdp_prog);

 if (!VAR_8)
  goto xdp_out;

 FUNC_6(VAR_5->data_hard_start);

 VAR_10 = FUNC_2(VAR_8, VAR_5);
 switch (VAR_10) {
 case 130:
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_5);
  if (FUNC_10(!VAR_9)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_5(VAR_3, VAR_9);
  break;
 case 129:
  VAR_6 = FUNC_11(VAR_3->netdev, VAR_5, VAR_8);
  if (!VAR_6)
   VAR_7 = VAR_2;
  else
   VAR_7 = VAR_0;
  break;
 default:
  FUNC_3(VAR_10);

 case 132:
  FUNC_9(VAR_4->netdev, VAR_8, VAR_10);

 case 131:
  VAR_7 = VAR_0;
  break;
 }
xdp_out:
 FUNC_8();
 return FUNC_0(-VAR_7);
}
