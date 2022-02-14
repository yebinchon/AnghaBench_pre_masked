
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct docg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (struct docg3*,int ) ;
 int FUNC_3 (struct docg3*,int ) ;
 int FUNC_4 (struct docg3*) ;
 int FUNC_5 (struct docg3*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct docg3 *VAR_3)
{
 int VAR_4;

 FUNC_5(VAR_3, 0x10, VAR_1);
 FUNC_3(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_0);
 FUNC_1(VAR_3, 2);
 VAR_4 = FUNC_4(VAR_3);

 FUNC_0("doc_reset_seq() -> isReady=%s\n", VAR_4 ? "false" : "true");
 return VAR_4;
}
