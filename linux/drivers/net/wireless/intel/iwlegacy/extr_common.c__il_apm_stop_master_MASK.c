
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct il_priv*,int ,int ,int ,int) ;
 int FUNC_3 (struct il_priv*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_3)
{
 int VAR_4 = 0;


 FUNC_3(VAR_3, VAR_0, VAR_2);

 VAR_4 =
     FUNC_2(VAR_3, VAR_0, VAR_1,
    VAR_1, 100);
 if (VAR_4 < 0)
  FUNC_1("Master Disable Timed Out, 100 usec\n");

 FUNC_0("stop master\n");

 return VAR_4;
}
