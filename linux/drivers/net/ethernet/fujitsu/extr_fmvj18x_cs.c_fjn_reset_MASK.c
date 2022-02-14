
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; int* dev_addr; } ;
struct local_info {scalar_t__ cardtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct local_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_34 ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_35)
{
    struct local_info *VAR_36 = FUNC_2(VAR_35);
    unsigned int VAR_37 = VAR_35->base_addr;
    int VAR_38;

    FUNC_1(VAR_35, "fjn_reset() called\n");


    if( VAR_34 == 0 )
 FUNC_3(VAR_10, VAR_37 + VAR_12);
    else
 FUNC_3(VAR_11, VAR_37 + VAR_12);


    if (VAR_36->cardtype == VAR_23)
 FUNC_3(VAR_1, VAR_37 + VAR_13);
    else
 FUNC_3(VAR_2, VAR_37 + VAR_13);


    FUNC_3(VAR_18, VAR_37 + VAR_32);

    FUNC_3(VAR_19, VAR_37 + VAR_26);


    for (VAR_38 = 0; VAR_38 < 6; VAR_38++)
        FUNC_3(VAR_35->dev_addr[VAR_38], VAR_37 + VAR_24 + VAR_38);


    FUNC_4(VAR_35);


    if (VAR_36->cardtype == VAR_23)
 FUNC_3(VAR_3, VAR_37 + VAR_13);
    else
 FUNC_3(VAR_4, VAR_37 + VAR_13);


    if( VAR_36->cardtype == VAR_29 || VAR_36->cardtype == VAR_14)
        FUNC_3(VAR_30, VAR_37 + VAR_7);
    else
        FUNC_3(VAR_0, VAR_37 + VAR_7);


    FUNC_3(0x00, VAR_37 + VAR_5);
    FUNC_3(0x00, VAR_37 + VAR_6);


    FUNC_3(0x01, VAR_37 + VAR_27);


    if( VAR_34 == 0 )
 FUNC_3(VAR_8, VAR_37 + VAR_12);
    else
 FUNC_3(VAR_9, VAR_37 + VAR_12);


    FUNC_0(VAR_37 + VAR_15);
    FUNC_0(VAR_37 + VAR_15);


    FUNC_3(0xff, VAR_37 + VAR_33);
    FUNC_3(0xff, VAR_37 + VAR_28);

    if (VAR_36->cardtype == VAR_23)
 FUNC_3(VAR_20, VAR_37 + VAR_22);


    FUNC_3(VAR_17, VAR_37 + VAR_31);
    FUNC_3(VAR_16, VAR_37 + VAR_25);


    if (VAR_36->cardtype == VAR_23)
 FUNC_3(VAR_21, VAR_37 + VAR_22);
}
