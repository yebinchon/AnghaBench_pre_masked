
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
 scalar_t__ FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct be_adapter *VAR_4, u16 VAR_5, u16 VAR_6)
{
 u32 VAR_7 = 0;

 if (FUNC_0(VAR_4, VAR_0))
  return;

 VAR_7 |= VAR_5 & VAR_3;
 VAR_7 |= VAR_6 << VAR_1;

 FUNC_2();
 FUNC_1(VAR_7, VAR_4->db + VAR_2);
}
