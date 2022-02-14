
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ipw_priv*,int ,int ,int) ;
 int FUNC_2 (struct ipw_priv*,int ,int ) ;
 int FUNC_3 (struct ipw_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ipw_priv *VAR_4)
{
 int VAR_5 = 0;


 FUNC_3(VAR_4, VAR_1, VAR_3);

 VAR_5 = FUNC_1(VAR_4, VAR_1,
     VAR_2, 500);
 if (VAR_5 < 0) {
  FUNC_0("wait for reg master disabled failed after 500ms\n");
  return VAR_5;
 }

 FUNC_2(VAR_4, VAR_1, VAR_0);

 return VAR_5;
}
