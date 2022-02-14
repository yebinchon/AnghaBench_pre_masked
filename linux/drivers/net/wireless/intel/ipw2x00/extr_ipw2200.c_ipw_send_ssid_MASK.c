
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct ipw_priv*,int ,int ,int *) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct ipw_priv *VAR_2, u8 * VAR_3, int VAR_4)
{
 if (!VAR_2 || !VAR_3) {
  FUNC_0("Invalid args\n");
  return -1;
 }

 return FUNC_1(VAR_2, VAR_0, FUNC_2(VAR_4, VAR_1),
    VAR_3);
}
