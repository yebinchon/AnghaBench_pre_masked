
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ice_hw {int dummy; } ;
struct ice_pf {int oicr_idx; struct ice_hw hw; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct ice_hw*,int ) ;
 int FUNC_2 (struct ice_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ice_pf *VAR_11)
{
 struct ice_hw *VAR_12 = &VAR_11->hw;
 u32 VAR_13;


 FUNC_2(VAR_12, VAR_4, 0);
 FUNC_1(VAR_12, VAR_2);

 VAR_13 = (VAR_3 |
        VAR_7 |
        VAR_5 |
        VAR_8 |
        VAR_10 |
        VAR_6 |
        VAR_9);

 FUNC_2(VAR_12, VAR_4, VAR_13);


 FUNC_2(VAR_12, FUNC_0(VAR_11->oicr_idx),
      VAR_1 | VAR_0);
}
