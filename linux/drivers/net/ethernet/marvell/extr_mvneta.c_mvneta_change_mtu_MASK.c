
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct mvneta_port {int pkt_size; scalar_t__ bm_priv; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mvneta_port*,int) ;
 int FUNC_4 (struct mvneta_port*) ;
 int FUNC_5 (struct mvneta_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct mvneta_port*) ;
 int FUNC_7 (struct mvneta_port*) ;
 int FUNC_8 (struct mvneta_port*) ;
 int FUNC_9 (struct mvneta_port*) ;
 int FUNC_10 (struct net_device*,char*) ;
 int FUNC_11 (struct net_device*,char*,int,int) ;
 struct mvneta_port* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ,struct mvneta_port*,int) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_2, int VAR_3)
{
 struct mvneta_port *VAR_4 = FUNC_12(VAR_2);
 int VAR_5;

 if (!FUNC_1(FUNC_2(VAR_3), 8)) {
  FUNC_11(VAR_2, "Illegal MTU value %d, rounding to %d\n",
       VAR_3, FUNC_0(FUNC_2(VAR_3), 8));
  VAR_3 = FUNC_0(FUNC_2(VAR_3), 8);
 }

 VAR_2->mtu = VAR_3;

 if (!FUNC_14(VAR_2)) {
  if (VAR_4->bm_priv)
   FUNC_3(VAR_4, VAR_3);

  FUNC_13(VAR_2);
  return 0;
 }




 FUNC_9(VAR_4);
 FUNC_15(VAR_0, VAR_4, 1);

 FUNC_5(VAR_4);
 FUNC_4(VAR_4);

 if (VAR_4->bm_priv)
  FUNC_3(VAR_4, VAR_3);

 VAR_4->pkt_size = FUNC_2(VAR_2->mtu);

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5) {
  FUNC_10(VAR_2, "unable to setup rxqs after MTU change\n");
  return VAR_5;
 }

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5) {
  FUNC_10(VAR_2, "unable to setup txqs after MTU change\n");
  return VAR_5;
 }

 FUNC_15(VAR_1, VAR_4, 1);
 FUNC_8(VAR_4);

 FUNC_13(VAR_2);

 return 0;
}
