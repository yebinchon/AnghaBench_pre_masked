
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rt2x00lib_erp {int ht_opmode; int cts_protection; } ;
struct rt2x00_dev {int dummy; } ;


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
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_14,
        struct rt2x00lib_erp *VAR_15)
{
 bool VAR_16 = !!(VAR_15->ht_opmode &
    VAR_6);
 u8 VAR_17 = VAR_15->ht_opmode & VAR_7;
 u8 VAR_18, VAR_19, VAR_20, VAR_21;
 u16 VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26;


 VAR_22 = VAR_24 = 0x4004;


 VAR_23 = VAR_25 = 0x4084;

 switch (VAR_17) {
 case 130:





  VAR_18 = VAR_19 = VAR_20 = VAR_21 = 0;

  break;
 case 131:





  VAR_18 = VAR_20 = 0;
  VAR_19 = VAR_21 = 1;

  break;
 case 128:
 case 129:




  VAR_18 = VAR_19 = VAR_20 = VAR_21 = 1;





  if (VAR_15->cts_protection) {

   VAR_22 = VAR_23 = 0x0003;
   VAR_24 = VAR_25 = 0x0003;
  }
  break;
 }


 if (VAR_16)
  VAR_20 = VAR_21 = 1;


 VAR_26 = FUNC_0(VAR_14, VAR_8);
 FUNC_2(&VAR_26, VAR_10, VAR_22);
 FUNC_2(&VAR_26, VAR_9, VAR_18);
 FUNC_1(VAR_14, VAR_8, VAR_26);

 VAR_26 = FUNC_0(VAR_14, VAR_11);
 FUNC_2(&VAR_26, VAR_13, VAR_23);
 FUNC_2(&VAR_26, VAR_12, VAR_19);
 FUNC_1(VAR_14, VAR_11, VAR_26);

 VAR_26 = FUNC_0(VAR_14, VAR_0);
 FUNC_2(&VAR_26, VAR_2, VAR_24);
 FUNC_2(&VAR_26, VAR_1, VAR_20);
 FUNC_1(VAR_14, VAR_0, VAR_26);

 VAR_26 = FUNC_0(VAR_14, VAR_3);
 FUNC_2(&VAR_26, VAR_5, VAR_25);
 FUNC_2(&VAR_26, VAR_4, VAR_21);
 FUNC_1(VAR_14, VAR_3, VAR_26);
}
