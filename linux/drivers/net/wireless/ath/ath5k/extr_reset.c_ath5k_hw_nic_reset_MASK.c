
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ath5k_hw {scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*,unsigned int,int ) ;
 int FUNC_2 (struct ath5k_hw*,int ,unsigned int,unsigned int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct ath5k_hw *VAR_10, u32 VAR_11)
{
 int VAR_12;
 u32 VAR_13 = VAR_11 ? VAR_11 : ~0U;


 FUNC_0(VAR_10, VAR_9);




 FUNC_1(VAR_10, VAR_11, VAR_3);


 FUNC_3(15, 20);

 if (VAR_10->ah_version == VAR_0) {
  VAR_11 &= VAR_7 | VAR_5
   | VAR_6 | VAR_8;
  VAR_13 &= VAR_7 | VAR_5
   | VAR_6 | VAR_8;
 } else {
  VAR_11 &= VAR_7 | VAR_4;
  VAR_13 &= VAR_7 | VAR_4;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_3, VAR_13, VAR_11, 0);






 if ((VAR_11 & VAR_7) == 0)
  FUNC_1(VAR_10, VAR_2, VAR_1);

 return VAR_12;
}
