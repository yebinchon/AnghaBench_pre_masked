
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; int * data; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_proto; int h_source; int h_dest; } ;
typedef int buffer ;


 int FUNC_0 (int *,unsigned int,int,int,unsigned char*,int,int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct net_device *VAR_0, struct sk_buff *VAR_1, bool VAR_2)
{
 struct ethhdr *VAR_3 = (struct ethhdr *)VAR_1->data;
 unsigned char VAR_4[128];
 unsigned int VAR_5;

 FUNC_2(VAR_0, "\n************** SKB dump ****************\n");

 FUNC_2(VAR_0, "%s packet of %d bytes\n",
     (VAR_2 ? "TX" : "RX"), VAR_1->len);

 FUNC_2(VAR_0, "Dst MAC addr: %pM\n", VAR_3->h_dest);
 FUNC_2(VAR_0, "Src MAC addr: %pM\n", VAR_3->h_source);
 FUNC_2(VAR_0, "Protocol: %#06hx\n", FUNC_3(VAR_3->h_proto));

 for (VAR_5 = 0; VAR_5 < VAR_1->len; VAR_5 += 32) {
  unsigned int VAR_6 = FUNC_1(VAR_1->len - VAR_5, 32U);

  FUNC_0(&VAR_1->data[VAR_5], VAR_6, 32, 1,
       VAR_4, sizeof(VAR_4), 0);
  FUNC_2(VAR_0, "  %#06x: %s\n", VAR_5, VAR_4);
 }

 FUNC_2(VAR_0, "\n************** SKB dump ****************\n");
}
