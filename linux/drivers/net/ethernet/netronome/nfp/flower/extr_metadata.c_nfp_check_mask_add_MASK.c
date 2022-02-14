
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nfp_app {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app*,char*,int ) ;
 int FUNC_1 (struct nfp_app*,char*,int ) ;

__attribute__((used)) static bool
FUNC_2(struct nfp_app *VAR_1, char *VAR_2, u32 VAR_3,
     u8 *VAR_4, u8 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6 < 0) {
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_6 < 0)
   return 0;
  *VAR_4 |= VAR_0;
 }
 *VAR_5 = VAR_6;

 return 1;
}
