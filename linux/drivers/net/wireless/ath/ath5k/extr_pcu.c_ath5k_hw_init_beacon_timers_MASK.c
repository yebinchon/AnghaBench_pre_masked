
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {int opmode; scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
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


 int FUNC_2 (struct ath5k_hw*,int,int ) ;
 int FUNC_3 (struct ath5k_hw*) ;

void
FUNC_4(struct ath5k_hw *VAR_21, u32 VAR_22, u32 VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26;




 switch (VAR_21->opmode) {
 case 129:
 case 128:




  if (VAR_21->ah_version == VAR_0) {
   VAR_24 = 0xffffffff;
   VAR_25 = 0xffffffff;
  } else {
   VAR_24 = 0x0000ffff;
   VAR_25 = 0x0007ffff;
  }

  FUNC_0(VAR_21, VAR_8, VAR_9);
  break;
 case 130:
  FUNC_1(VAR_21, VAR_17, VAR_18);

 default:



  VAR_24 = (VAR_22 - VAR_15) << 3;
  VAR_25 = (VAR_22 - VAR_16) << 3;
  break;
 }




 VAR_26 = VAR_22 + 1;





 if (VAR_21->opmode == VAR_19 ||
     VAR_21->opmode == VAR_20)
  FUNC_2(VAR_21, 0, VAR_11);

 FUNC_2(VAR_21, VAR_22, VAR_11);
 FUNC_2(VAR_21, VAR_24, VAR_12);
 FUNC_2(VAR_21, VAR_25, VAR_13);
 FUNC_2(VAR_21, VAR_26, VAR_14);


 if (VAR_23 & VAR_4)
  FUNC_3(VAR_21);

 FUNC_2(VAR_21, VAR_23 & (VAR_3 |
     VAR_2),
      VAR_1);






 if (VAR_21->ah_version == VAR_0)
  FUNC_2(VAR_21, VAR_6, VAR_5);
 else
  FUNC_2(VAR_21, VAR_6, VAR_7);




 FUNC_0(VAR_21, VAR_8, VAR_10);

}
