
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct alx_hw {scalar_t__ link_speed; } ;


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
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct alx_hw*) ;
 int FUNC_1 (struct alx_hw*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct alx_hw *VAR_13, bool VAR_14, u8 VAR_15,
         u16 VAR_16, u16 VAR_17)
{
 u32 VAR_18, VAR_19;


 VAR_19 = VAR_13->link_speed != VAR_12 ?
   VAR_2 :
   VAR_1;

 if (VAR_14) {
  VAR_18 = VAR_15 << VAR_6 |
        VAR_16 << VAR_7;
  FUNC_1(VAR_13, VAR_5, VAR_18);

  VAR_18 = VAR_10 |
        VAR_19 << VAR_3 |
        VAR_17 << VAR_4 |
        VAR_11 | VAR_8;
 } else {
  VAR_18 = VAR_10 |
        VAR_19 << VAR_3 |
        VAR_16 << VAR_9 |
        VAR_17 << VAR_4 |
        VAR_11;
 }
 FUNC_1(VAR_13, VAR_0, VAR_18);

 return FUNC_0(VAR_13);
}
