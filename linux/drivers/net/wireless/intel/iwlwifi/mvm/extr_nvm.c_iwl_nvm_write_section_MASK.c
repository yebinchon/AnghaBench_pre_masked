
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iwl_mvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,int,int,int,int const*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_1, u16 VAR_2,
     const u8 *VAR_3, u16 VAR_4)
{
 int VAR_5 = 0;



 while (VAR_5 < VAR_4) {
  int VAR_6, VAR_7;

  VAR_6 = FUNC_1(VAR_0,
     VAR_4 - VAR_5);

  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_5,
       VAR_6, VAR_3 + VAR_5);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_5 += VAR_6;
 }

 return 0;
}
