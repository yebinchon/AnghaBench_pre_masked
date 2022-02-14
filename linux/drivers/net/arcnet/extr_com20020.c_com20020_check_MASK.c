
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;
struct arcnet_local {int setup; int clockm; int clockp; int setup2; int config; int timeout; int backplane; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct net_device*,char*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct arcnet_local*,int,int ) ;
 int FUNC_5 (int) ;
 struct arcnet_local* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int) ;

int FUNC_8(struct net_device *VAR_26)
{
 int VAR_27 = VAR_26->base_addr, VAR_28;
 struct arcnet_local *VAR_29 = FUNC_6(VAR_26);

 FUNC_3(FUNC_0(3) | VAR_16, VAR_27, VAR_7);
 FUNC_7(5);
 FUNC_3(FUNC_0(3), VAR_27, VAR_7);
 FUNC_5(VAR_19);

 VAR_29->setup = VAR_29->clockm ? 0 : (VAR_29->clockp << 1);
 VAR_29->setup2 = (VAR_29->clockm << 4) | 8;



 VAR_29->setup = VAR_29->setup | VAR_14;

 FUNC_4(VAR_29, VAR_27, VAR_22);
 FUNC_3(VAR_29->setup, VAR_27, VAR_8);

 if (VAR_29->clockm != 0) {
  FUNC_4(VAR_29, VAR_27, VAR_23);
  FUNC_3(VAR_29->setup2, VAR_27, VAR_8);


  FUNC_5(1);
  FUNC_3(VAR_20, VAR_27, VAR_6);
 }

 VAR_29->config = (VAR_29->timeout << 3) | (VAR_29->backplane << 2) | VAR_21;

 FUNC_3(VAR_29->config, VAR_27, VAR_7);
 FUNC_3(0x42, VAR_27, VAR_8);

 VAR_28 = FUNC_2(VAR_27, VAR_3);

 if ((VAR_28 & 0x99) != (VAR_13 | VAR_25 | VAR_18)) {
  FUNC_1(VAR_11, VAR_26, "status invalid (%Xh).\n", VAR_28);
  return -VAR_12;
 }
 FUNC_1(VAR_10, VAR_26, "status after reset: %X\n", VAR_28);

 FUNC_3(VAR_1 | VAR_17 | VAR_9,
      VAR_27, VAR_6);
 VAR_28 = FUNC_2(VAR_27, VAR_3);
 FUNC_1(VAR_10, VAR_26, "status after reset acknowledged: %X\n",
     VAR_28);


 FUNC_3(0 | VAR_15 | VAR_0,
      VAR_27, VAR_4);
 FUNC_3(0, VAR_27, VAR_5);

 VAR_28 = FUNC_2(VAR_27, VAR_2);
 if (VAR_28 != VAR_24) {
  FUNC_1(VAR_11, VAR_26, "Signature byte not found (%02Xh != D1h).\n",
      VAR_28);
  return -VAR_12;
 }
 return 0;
}
