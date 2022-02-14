
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct alx_hw {scalar_t__ link_speed; } ;


 int FUNC_0 (int,int ) ;
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
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct alx_hw*,int ) ;
 int FUNC_2 (struct alx_hw*) ;
 int FUNC_3 (struct alx_hw*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct alx_hw *VAR_14, bool VAR_15, u8 VAR_16,
        u16 VAR_17, u16 *VAR_18)
{
 u32 VAR_19, VAR_20;
 int VAR_21;

 *VAR_18 = 0;


 VAR_20 = VAR_14->link_speed != VAR_13 ?
   VAR_2 :
   VAR_1;

 if (VAR_15) {
  VAR_19 = VAR_16 << VAR_6 |
        VAR_17 << VAR_7;
  FUNC_3(VAR_14, VAR_5, VAR_19);

  VAR_19 = VAR_11 | VAR_12 |
        VAR_8 | VAR_9 |
        VAR_20 << VAR_3;
 } else {
  VAR_19 = VAR_11 |
        VAR_20 << VAR_3 |
        VAR_17 << VAR_10 |
        VAR_12 | VAR_9;
 }
 FUNC_3(VAR_14, VAR_0, VAR_19);

 VAR_21 = FUNC_2(VAR_14);
 if (VAR_21)
  return VAR_21;
 VAR_19 = FUNC_1(VAR_14, VAR_0);
 *VAR_18 = FUNC_0(VAR_19, VAR_4);
 return 0;
}
