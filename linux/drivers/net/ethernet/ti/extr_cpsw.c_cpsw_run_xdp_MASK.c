
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct xdp_buff {int dummy; } ;
struct page {int dummy; } ;
struct net_device {int dummy; } ;
struct cpsw_priv {int xdp_prog; struct net_device* ndev; struct cpsw_common* cpsw; } ;
struct cpsw_common {int * page_pool; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_prog* FUNC_0 (int ) ;





 int FUNC_1 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_2 (int) ;
 struct xdp_frame* FUNC_3 (struct xdp_buff*) ;
 int FUNC_4 (struct cpsw_priv*,struct xdp_frame*,struct page*) ;
 int FUNC_5 (int ,struct page*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct net_device*,struct bpf_prog*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct net_device*,struct xdp_buff*,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_12(struct cpsw_priv *VAR_2, int VAR_3, struct xdp_buff *VAR_4,
   struct page *VAR_5)
{
 struct cpsw_common *VAR_6 = VAR_2->cpsw;
 struct net_device *VAR_7 = VAR_2->ndev;
 int VAR_8 = VAR_0;
 struct xdp_frame *VAR_9;
 struct bpf_prog *VAR_10;
 u32 VAR_11;

 FUNC_6();

 VAR_10 = FUNC_0(VAR_2->xdp_prog);
 if (!VAR_10) {
  VAR_8 = VAR_1;
  goto out;
 }

 VAR_11 = FUNC_1(VAR_10, VAR_4);
 switch (VAR_11) {
 case 130:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_9 = FUNC_3(VAR_4);
  if (FUNC_9(!VAR_9))
   goto drop;

  FUNC_4(VAR_2, VAR_9, VAR_5);
  break;
 case 129:
  if (FUNC_11(VAR_7, VAR_4, VAR_10))
   goto drop;






  FUNC_10();
  break;
 default:
  FUNC_2(VAR_11);

 case 132:
  FUNC_8(VAR_7, VAR_10, VAR_11);

 case 131:
  goto drop;
 }
out:
 FUNC_7();
 return VAR_8;
drop:
 FUNC_7();
 FUNC_5(VAR_6->page_pool[VAR_3], VAR_5);
 return VAR_8;
}
