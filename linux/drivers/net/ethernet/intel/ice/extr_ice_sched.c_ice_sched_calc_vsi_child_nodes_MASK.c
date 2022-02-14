
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct ice_hw {int * max_children; } ;


 int FUNC_0 (int,int ) ;
 size_t FUNC_1 (struct ice_hw*) ;
 size_t FUNC_2 (struct ice_hw*) ;

__attribute__((used)) static void
FUNC_3(struct ice_hw *VAR_0, u16 VAR_1, u16 *VAR_2)
{
 u16 VAR_3 = VAR_1;
 u8 VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 VAR_6 = FUNC_2(VAR_0);


 for (VAR_4 = VAR_5; VAR_4 > VAR_6; VAR_4--) {

  VAR_3 = FUNC_0(VAR_3, VAR_0->max_children[VAR_4]);


  VAR_2[VAR_4] = VAR_3 ? VAR_3 : 1;
 }
}
