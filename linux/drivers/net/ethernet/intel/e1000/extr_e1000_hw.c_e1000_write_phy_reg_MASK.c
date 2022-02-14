
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

s32 FUNC_3(struct e1000_hw *VAR_5, u32 VAR_6, u16 VAR_7)
{
 u32 VAR_8;
 unsigned long VAR_9;

 FUNC_1(&VAR_4, VAR_9);

 if ((VAR_5->phy_type == VAR_3) &&
     (VAR_6 > VAR_1)) {
  VAR_8 = FUNC_0(VAR_5, VAR_0,
       (u16)VAR_6);
  if (VAR_8) {
   FUNC_2(&VAR_4, VAR_9);
   return VAR_8;
  }
 }

 VAR_8 = FUNC_0(VAR_5, VAR_2 & VAR_6,
      VAR_7);
 FUNC_2(&VAR_4, VAR_9);

 return VAR_8;
}
