
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct flow_dissector_key_ports {int src; int dst; } ;
struct flow_dissector_key_ipv4_addrs {int src; int dst; } ;
struct bcm_sf2_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bcm_sf2_priv*,int,int) ;

__attribute__((used)) static void FUNC_6(struct bcm_sf2_priv *VAR_1,
       struct flow_dissector_key_ipv4_addrs *VAR_2,
       struct flow_dissector_key_ports *VAR_3,
       unsigned int VAR_4,
       bool VAR_5)
{
 u32 VAR_6, VAR_7;





 VAR_6 = 0;
 if (VAR_5)
  VAR_7 = FUNC_1(4);
 else
  VAR_7 = FUNC_0(4);
 FUNC_5(VAR_1, VAR_6, VAR_7);





 VAR_6 = FUNC_3(VAR_3->dst) >> 8;
 if (VAR_5)
  VAR_7 = FUNC_1(3);
 else
  VAR_7 = FUNC_0(3);
 FUNC_5(VAR_1, VAR_6, VAR_7);





 VAR_6 = (FUNC_3(VAR_3->dst) & 0xff) << 24 |
       (u32)FUNC_3(VAR_3->src) << 8 |
       (FUNC_4(VAR_2->dst) & 0x0000ff00) >> 8;
 if (VAR_5)
  VAR_7 = FUNC_1(2);
 else
  VAR_7 = FUNC_0(2);
 FUNC_5(VAR_1, VAR_6, VAR_7);





 VAR_6 = (u32)(FUNC_4(VAR_2->dst) & 0xff) << 24 |
       (u32)(FUNC_4(VAR_2->dst) >> 16) << 8 |
       (FUNC_4(VAR_2->src) & 0x0000ff00) >> 8;
 if (VAR_5)
  VAR_7 = FUNC_1(1);
 else
  VAR_7 = FUNC_0(1);
 FUNC_5(VAR_1, VAR_6, VAR_7);







 VAR_6 = (u32)(FUNC_4(VAR_2->src) & 0xff) << 24 |
       (u32)(FUNC_4(VAR_2->src) >> 16) << 8 |
       FUNC_2(VAR_4) | VAR_0;
 if (VAR_5)
  VAR_7 = FUNC_1(0);
 else
  VAR_7 = FUNC_0(0);
 FUNC_5(VAR_1, VAR_6, VAR_7);
}
