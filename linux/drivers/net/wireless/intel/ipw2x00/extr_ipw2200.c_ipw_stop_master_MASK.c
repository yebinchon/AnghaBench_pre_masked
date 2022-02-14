
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ipw_priv*,int ,int ,int) ;
 int FUNC_4 (struct ipw_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ipw_priv *VAR_3)
{
 int VAR_4;

 FUNC_1(">>\n");

 FUNC_4(VAR_3, VAR_0, VAR_2);


 VAR_4 = FUNC_3(VAR_3, VAR_0,
     VAR_1, 100);
 if (VAR_4 < 0) {
  FUNC_2("wait for stop master failed after 100ms\n");
  return -1;
 }

 FUNC_0("stop master %dms\n", VAR_4);

 return VAR_4;
}
