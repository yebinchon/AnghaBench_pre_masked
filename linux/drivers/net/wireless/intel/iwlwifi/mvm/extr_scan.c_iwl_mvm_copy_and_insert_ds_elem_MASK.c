
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;




 size_t FUNC_1 (int const*,size_t,int const*,int ,int ) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (int *,int const*,size_t) ;

__attribute__((used)) static u8 *FUNC_4(struct iwl_mvm *VAR_1, const u8 *VAR_2,
        size_t VAR_3, u8 *const VAR_4)
{
 static const u8 VAR_5[] = {
   129,
   128,
   130,
   131,
 };
 size_t VAR_6;
 u8 *VAR_7 = VAR_4;

 if (!FUNC_2(VAR_1)) {
  FUNC_3(VAR_7, VAR_2, VAR_3);
  return VAR_7 + VAR_3;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3,
      VAR_5,
      FUNC_0(VAR_5),
      0);

 FUNC_3(VAR_7, VAR_2, VAR_6);
 VAR_7 += VAR_6;


 *VAR_7++ = VAR_0;
 *VAR_7++ = 1;
 *VAR_7++ = 0;

 FUNC_3(VAR_7, VAR_2 + VAR_6, VAR_3 - VAR_6);
 VAR_7 += VAR_3 - VAR_6;

 return VAR_7;
}
