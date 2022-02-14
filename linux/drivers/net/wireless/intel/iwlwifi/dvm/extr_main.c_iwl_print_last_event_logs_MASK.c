
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_priv {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,scalar_t__,scalar_t__,scalar_t__,int,char**,size_t) ;

__attribute__((used)) static int FUNC_1(struct iwl_priv *VAR_0, u32 VAR_1,
        u32 VAR_2, u32 VAR_3,
        u32 VAR_4, u32 VAR_5,
        int VAR_6, char **VAR_7, size_t VAR_8)
{




 if (VAR_2) {
  if (VAR_3 < VAR_4) {
   VAR_6 = FUNC_0(VAR_0,
      VAR_1 - (VAR_4 - VAR_3),
      VAR_4 - VAR_3, VAR_5,
      VAR_6, VAR_7, VAR_8);
   VAR_6 = FUNC_0(VAR_0, 0,
        VAR_3, VAR_5,
        VAR_6, VAR_7, VAR_8);
  } else
   VAR_6 = FUNC_0(VAR_0, VAR_3 - VAR_4,
        VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 } else {
  if (VAR_3 < VAR_4) {
   VAR_6 = FUNC_0(VAR_0, 0, VAR_3,
        VAR_5, VAR_6, VAR_7, VAR_8);
  } else {
   VAR_6 = FUNC_0(VAR_0, VAR_3 - VAR_4,
        VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  }
 }
 return VAR_6;
}
