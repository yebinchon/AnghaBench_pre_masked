
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_buff {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ixgbevf_ring {size_t queue_index; int netdev; int xdp_prog; } ;
struct ixgbevf_adapter {struct ixgbevf_ring** xdp_ring; } ;
struct bpf_prog {int dummy; } ;


 struct sk_buff* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bpf_prog* FUNC_1 (int ) ;




 int FUNC_2 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbevf_ring*,struct xdp_buff*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct bpf_prog*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct ixgbevf_adapter *VAR_2,
           struct ixgbevf_ring *VAR_3,
           struct xdp_buff *VAR_4)
{
 int VAR_5 = VAR_1;
 struct ixgbevf_ring *VAR_6;
 struct bpf_prog *VAR_7;
 u32 VAR_8;

 FUNC_5();
 VAR_7 = FUNC_1(VAR_3->xdp_prog);

 if (!VAR_7)
  goto xdp_out;

 VAR_8 = FUNC_2(VAR_7, VAR_4);
 switch (VAR_8) {
 case 129:
  break;
 case 128:
  VAR_6 = VAR_2->xdp_ring[VAR_3->queue_index];
  VAR_5 = FUNC_4(VAR_6, VAR_4);
  break;
 default:
  FUNC_3(VAR_8);

 case 131:
  FUNC_7(VAR_3->netdev, VAR_7, VAR_8);

 case 130:
  VAR_5 = VAR_0;
  break;
 }
xdp_out:
 FUNC_6();
 return FUNC_0(-VAR_5);
}
