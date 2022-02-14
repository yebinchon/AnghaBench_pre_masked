
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl1c_hw {int ctrl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atl1c_hw*,int ) ;

__attribute__((used)) static void FUNC_1(struct atl1c_hw *VAR_3)
{
 u16 VAR_4 = VAR_3->ctrl_flags;

 VAR_3->ctrl_flags &= ~(VAR_0 | VAR_1);
 FUNC_0(VAR_3, VAR_2);
 VAR_3->ctrl_flags = VAR_4;
}
