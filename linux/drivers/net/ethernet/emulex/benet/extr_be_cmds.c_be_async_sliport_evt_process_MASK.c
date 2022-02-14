
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct be_mcc_compl {scalar_t__ flags; } ;
struct be_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct be_adapter*,struct be_mcc_compl*) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_3,
      struct be_mcc_compl *VAR_4)
{
 u8 VAR_5 = (VAR_4->flags >> VAR_2) &
   VAR_1;

 if (VAR_5 == VAR_0)
  FUNC_0(VAR_3, VAR_4);
}
