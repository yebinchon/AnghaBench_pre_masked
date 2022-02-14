
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int u32 ;
struct ipw_priv {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipw_priv*,int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct ipw_priv *VAR_1, u32 VAR_2)
{
 __le32 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_1) {
  FUNC_0("Invalid args\n");
  return -1;
 }

 return FUNC_2(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
