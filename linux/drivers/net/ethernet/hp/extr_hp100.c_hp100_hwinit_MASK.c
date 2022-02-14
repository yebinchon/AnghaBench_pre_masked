
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int name; } ;
struct hp100_private {int mode; scalar_t__ lan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
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
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 struct hp100_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_29)
{
 int VAR_30 = VAR_29->base_addr;
 struct hp100_private *VAR_31 = FUNC_9(VAR_29);
 FUNC_8(VAR_27);
 FUNC_7(0xfefe, VAR_21);
 FUNC_7(0xffff, VAR_22);

 FUNC_7(VAR_6 | VAR_14, VAR_25);
 FUNC_7(VAR_18 | VAR_17, VAR_25);

 if (VAR_31->mode == 1) {
  FUNC_0(VAR_29);
  FUNC_11();
 } else {
  FUNC_7(VAR_6 | VAR_14, VAR_25);
  FUNC_2(VAR_29, 1);
  FUNC_8(VAR_24);
  FUNC_1(~(VAR_15 | VAR_20), VAR_23);
 }


 FUNC_3(VAR_29, 0);

 FUNC_11();


 FUNC_2(VAR_29, 1);


 FUNC_7(VAR_3 |
     VAR_16 |
     VAR_4 |
     VAR_2 |
     VAR_1 | VAR_13 |
     VAR_5 |
     VAR_6 |
     VAR_10 |
     VAR_7 | VAR_14, VAR_25);

 FUNC_7(VAR_18 |
     VAR_11 | VAR_17, VAR_25);

 FUNC_6(VAR_12 |
     VAR_0 |
     VAR_19 | VAR_14, VAR_26);
 FUNC_5(VAR_29);


 FUNC_11();


 FUNC_2(VAR_29, 0);




 if ((VAR_31->lan_type == VAR_8) || (VAR_31->lan_type == VAR_9))
  FUNC_4(VAR_29, 0);

}
