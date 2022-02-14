
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct be_adapter {scalar_t__ db; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct be_adapter *VAR_7, u16 VAR_8, bool VAR_9, u16 VAR_10)
{
 u32 VAR_11 = 0;

 VAR_11 |= VAR_8 & VAR_6;
 VAR_11 |= ((VAR_8 & VAR_4) <<
   VAR_5);

 if (FUNC_0(VAR_7, VAR_0))
  return;

 if (VAR_9)
  VAR_11 |= 1 << VAR_3;
 VAR_11 |= VAR_10 << VAR_1;
 FUNC_1(VAR_11, VAR_7->db + VAR_2);
}
