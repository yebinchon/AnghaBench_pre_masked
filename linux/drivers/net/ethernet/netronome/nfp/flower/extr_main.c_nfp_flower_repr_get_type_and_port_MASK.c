
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nfp_app {int dummy; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum nfp_repr_type
FUNC_1(struct nfp_app *VAR_9, u32 VAR_10, u8 *VAR_11)
{
 switch (FUNC_0(VAR_1, VAR_10)) {
 case 128:
  *VAR_11 = FUNC_0(VAR_0,
      VAR_10);
  return VAR_6;

 case 129:
  *VAR_11 = FUNC_0(VAR_2, VAR_10);
  if (FUNC_0(VAR_3, VAR_10) ==
      VAR_4)
   return VAR_5;
  else
   return VAR_7;
 }

 return VAR_8;
}
