
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_buff {int dummy; } ;
struct netsec_priv {int ndev; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct netsec_priv*,struct xdp_buff*) ;
 int FUNC_3 (int ,struct bpf_prog*,int) ;
 int FUNC_4 (int ,struct xdp_buff*,struct bpf_prog*) ;
 int FUNC_5 (struct xdp_buff*) ;

__attribute__((used)) static u32 FUNC_6(struct netsec_priv *VAR_4, struct bpf_prog *VAR_5,
     struct xdp_buff *VAR_6)
{
 u32 VAR_7 = VAR_1;
 int VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_6);

 switch (VAR_9) {
 case 130:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_4, VAR_6);
  if (VAR_7 != VAR_3)
   FUNC_5(VAR_6);
  break;
 case 129:
  VAR_8 = FUNC_4(VAR_4->ndev, VAR_6, VAR_5);
  if (!VAR_8) {
   VAR_7 = VAR_2;
  } else {
   VAR_7 = VAR_0;
   FUNC_5(VAR_6);
  }
  break;
 default:
  FUNC_1(VAR_9);

 case 132:
  FUNC_3(VAR_4->ndev, VAR_5, VAR_9);

 case 131:
  VAR_7 = VAR_0;
  FUNC_5(VAR_6);
  break;
 }

 return VAR_7;
}
