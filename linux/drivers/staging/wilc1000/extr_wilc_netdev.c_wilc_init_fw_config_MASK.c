
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wilc_priv {scalar_t__ hif_drv; } ;
struct wilc_vif {int iftype; struct wilc_priv priv; } ;
struct net_device {int dummy; } ;
struct host_if_drv {int dummy; } ;


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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (struct wilc_vif*,int,int ,int*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_51, struct wilc_vif *VAR_52)
{
 struct wilc_priv *VAR_53 = &VAR_52->priv;
 struct host_if_drv *VAR_54;
 u8 VAR_55;
 u16 VAR_56;
 u32 VAR_57;

 FUNC_2(VAR_51, "Start configuring Firmware\n");
 VAR_54 = (struct host_if_drv *)VAR_53->hif_drv;
 FUNC_2(VAR_51, "Host = %p\n", VAR_54);

 VAR_57 = VAR_52->iftype;
 FUNC_1(&VAR_57);
 if (!FUNC_3(VAR_52, 1, VAR_29, (u8 *)&VAR_57, 4,
          0, 0))
  goto fail;

 VAR_55 = VAR_40;
 if (!FUNC_3(VAR_52, 0, VAR_16, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_50;
 if (!FUNC_3(VAR_52, 0, VAR_17, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_45;
 if (!FUNC_3(VAR_52, 0, VAR_0, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_46;
 if (!FUNC_3(VAR_52, 0, VAR_22, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_36;
 if (!FUNC_3(VAR_52, 0, VAR_9, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_38;
 if (!FUNC_3(VAR_52, 0, VAR_28, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_49;
 if (!FUNC_3(VAR_52, 0, VAR_31, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_56 = 0xffff;
 FUNC_0(&VAR_56);
 if (!FUNC_3(VAR_52, 0, VAR_27, (u8 *)&VAR_56, 2, 0, 0))
  goto fail;

 VAR_56 = 2346;
 FUNC_0(&VAR_56);
 if (!FUNC_3(VAR_52, 0, VAR_19, (u8 *)&VAR_56, 2, 0, 0))
  goto fail;

 VAR_55 = 0;
 if (!FUNC_3(VAR_52, 0, VAR_14, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 1;
 if (!FUNC_3(VAR_52, 0, VAR_23, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_43;
 if (!FUNC_3(VAR_52, 0, VAR_21, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_48;
 if (!FUNC_3(VAR_52, 0, VAR_1, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_39;
 if (!FUNC_3(VAR_52, 0, VAR_13, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 3;
 if (!FUNC_3(VAR_52, 0, VAR_20, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 3;
 if (!FUNC_3(VAR_52, 0, VAR_18, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_37;
 if (!FUNC_3(VAR_52, 0, VAR_12, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 0;
 if (!FUNC_3(VAR_52, 0, VAR_34, &VAR_55, 1,
          0, 0))
  goto fail;

 VAR_55 = 48;
 if (!FUNC_3(VAR_52, 0, VAR_32, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 28;
 if (!FUNC_3(VAR_52, 0, VAR_33, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_56 = 100;
 FUNC_0(&VAR_56);
 if (!FUNC_3(VAR_52, 0, VAR_15, (u8 *)&VAR_56, 2, 0, 0))
  goto fail;

 VAR_55 = VAR_47;
 if (!FUNC_3(VAR_52, 0, VAR_26, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_57 = 84600;
 FUNC_1(&VAR_57);
 if (!FUNC_3(VAR_52, 0, VAR_25, (u8 *)&VAR_57, 4, 0, 0))
  goto fail;

 VAR_57 = 500;
 FUNC_1(&VAR_57);
 if (!FUNC_3(VAR_52, 0, VAR_24, (u8 *)&VAR_57, 4, 0,
          0))
  goto fail;

 VAR_55 = 1;
 if (!FUNC_3(VAR_52, 0, VAR_30, &VAR_55, 1, 0,
          0))
  goto fail;

 VAR_55 = VAR_41;
 if (!FUNC_3(VAR_52, 0, VAR_4, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 1;
 if (!FUNC_3(VAR_52, 0, VAR_3, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_35;
 if (!FUNC_3(VAR_52, 0, VAR_8, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 1;
 if (!FUNC_3(VAR_52, 0, VAR_11, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = VAR_44;
 if (!FUNC_3(VAR_52, 0, VAR_7, &VAR_55, 1,
          0, 0))
  goto fail;

 VAR_55 = VAR_42;
 if (!FUNC_3(VAR_52, 0, VAR_5, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 0;
 if (!FUNC_3(VAR_52, 0, VAR_10, &VAR_55, 1, 0,
          0))
  goto fail;

 VAR_55 = 7;
 if (!FUNC_3(VAR_52, 0, VAR_2, &VAR_55, 1, 0, 0))
  goto fail;

 VAR_55 = 1;
 if (!FUNC_3(VAR_52, 0, VAR_6, &VAR_55, 1,
          1, 1))
  goto fail;

 return 0;

fail:
 return -1;
}
