
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long rx_split_hdr_pkt_n; } ;
struct stmmac_priv {TYPE_2__ xstats; TYPE_1__* dev; int sph; } ;
struct stmmac_packet_attrs {int tcp; int dst; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stmmac_priv*,struct stmmac_packet_attrs*) ;

__attribute__((used)) static int FUNC_1(struct stmmac_priv *VAR_2)
{
 unsigned long VAR_3, VAR_4 = VAR_2->xstats.rx_split_hdr_pkt_n;
 struct stmmac_packet_attrs VAR_5 = { };
 int VAR_6;

 if (!VAR_2->sph)
  return -VAR_1;


 VAR_5.dst = VAR_2->dev->dev_addr;
 VAR_5.tcp = 0;

 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3 = VAR_2->xstats.rx_split_hdr_pkt_n;
 if (VAR_3 <= VAR_4)
  return -VAR_0;


 VAR_4 = VAR_3;

 VAR_5.dst = VAR_2->dev->dev_addr;
 VAR_5.tcp = 1;

 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3 = VAR_2->xstats.rx_split_hdr_pkt_n;
 if (VAR_3 <= VAR_4)
  return -VAR_0;

 return 0;
}
