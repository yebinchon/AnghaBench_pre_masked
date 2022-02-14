
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdp_buff {int dummy; } ;
struct tun_struct {TYPE_1__* pcpu_stats; int dev; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {int rx_dropped; } ;







 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct bpf_prog*,int) ;
 int FUNC_3 (int ,struct xdp_buff*) ;
 int FUNC_4 (int ,struct xdp_buff*,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_5(struct tun_struct *VAR_0, struct bpf_prog *VAR_1,
         struct xdp_buff *VAR_2, u32 VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 129:
  VAR_4 = FUNC_4(VAR_0->dev, VAR_2, VAR_1);
  if (VAR_4)
   return VAR_4;
  break;
 case 128:
  VAR_4 = FUNC_3(VAR_0->dev, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  break;
 case 130:
  break;
 default:
  FUNC_0(VAR_3);

 case 132:
  FUNC_2(VAR_0->dev, VAR_1, VAR_3);

 case 131:
  FUNC_1(VAR_0->pcpu_stats->rx_dropped);
  break;
 }

 return VAR_3;
}
