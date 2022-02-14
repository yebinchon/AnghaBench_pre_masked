
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ dev_addr; } ;
struct bmac_data {unsigned short* hash_table_mask; int is_bmac_plus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short volatile VAR_5 ;
 unsigned short volatile VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
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
 unsigned short VAR_25 ;
 unsigned short VAR_26 ;
 unsigned short VAR_27 ;
 unsigned short VAR_28 ;
 unsigned short VAR_29 ;
 int VAR_30 ;
 unsigned short volatile VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 unsigned short VAR_35 ;
 unsigned short volatile VAR_36 ;
 unsigned short volatile VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 unsigned short FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,unsigned short volatile) ;
 struct bmac_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_40)
{
 struct bmac_data *VAR_41 = FUNC_2(VAR_40);
 volatile unsigned short VAR_42;
 unsigned short *VAR_43;
 int VAR_44;



 FUNC_1(VAR_40, VAR_24, VAR_29);
 FUNC_1(VAR_40, VAR_33, VAR_37);

 VAR_44 = 100;
 do {
  --VAR_44;
  FUNC_3(10000);
  VAR_42 = FUNC_0(VAR_40, VAR_33);
 } while ((VAR_42 & VAR_37) && VAR_44 > 0);

 if (!VAR_41->is_bmac_plus) {
  VAR_42 = FUNC_0(VAR_40, VAR_38);
  VAR_42 |= VAR_6 | VAR_31 | VAR_5;
  FUNC_1(VAR_40, VAR_38, VAR_42);
  FUNC_3(10000);
 }

 FUNC_1(VAR_40, VAR_20, (unsigned short)0x1968);

 VAR_42 = FUNC_0(VAR_40, VAR_39);
 VAR_42 |= VAR_36;
 FUNC_1(VAR_40, VAR_39, VAR_42);

 FUNC_0(VAR_40, VAR_19);


 FUNC_1(VAR_40, VAR_17, 0);
 FUNC_1(VAR_40, VAR_18, 0);
 FUNC_1(VAR_40, VAR_7, 0);
 FUNC_1(VAR_40, VAR_13, 0);


 FUNC_1(VAR_40, VAR_10, 0);
 FUNC_1(VAR_40, VAR_12, 0);
 FUNC_1(VAR_40, VAR_0, 0);
 FUNC_1(VAR_40, VAR_9, 0);
 FUNC_1(VAR_40, VAR_22, 0);


 FUNC_1(VAR_40, VAR_34, 4);

 FUNC_1(VAR_40, VAR_32, 0);
 FUNC_1(VAR_40, VAR_32, VAR_35 );


 FUNC_1(VAR_40, VAR_23, 0);
 FUNC_1(VAR_40, VAR_23, VAR_26 );


 FUNC_0(VAR_40, VAR_30);


 for (VAR_44=0; VAR_44<4; VAR_44++) VAR_41->hash_table_mask[VAR_44] = 0;
 FUNC_1(VAR_40, VAR_4, VAR_41->hash_table_mask[0]);
 FUNC_1(VAR_40, VAR_3, VAR_41->hash_table_mask[1]);
 FUNC_1(VAR_40, VAR_2, VAR_41->hash_table_mask[2]);
 FUNC_1(VAR_40, VAR_1, VAR_41->hash_table_mask[3]);

 VAR_43 = (unsigned short *)VAR_40->dev_addr;
 FUNC_1(VAR_40, VAR_14, *VAR_43++);
 FUNC_1(VAR_40, VAR_15, *VAR_43++);
 FUNC_1(VAR_40, VAR_16, *VAR_43);

 FUNC_1(VAR_40, VAR_21, VAR_25 | VAR_27 | VAR_28);

 FUNC_1(VAR_40, VAR_11, VAR_8);
}
