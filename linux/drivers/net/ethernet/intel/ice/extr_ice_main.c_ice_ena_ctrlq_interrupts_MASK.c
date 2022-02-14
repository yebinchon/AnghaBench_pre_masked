
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ice_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ice_hw*) ;
 int FUNC_1 (struct ice_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ice_hw *VAR_9, u16 VAR_10)
{
 u32 VAR_11;

 VAR_11 = ((VAR_10 & VAR_8) |
        VAR_7);
 FUNC_1(VAR_9, VAR_6, VAR_11);


 VAR_11 = ((VAR_10 & VAR_2) |
        VAR_1);
 FUNC_1(VAR_9, VAR_0, VAR_11);


 VAR_11 = ((VAR_10 & VAR_5) |
        VAR_4);
 FUNC_1(VAR_9, VAR_3, VAR_11);

 FUNC_0(VAR_9);
}
