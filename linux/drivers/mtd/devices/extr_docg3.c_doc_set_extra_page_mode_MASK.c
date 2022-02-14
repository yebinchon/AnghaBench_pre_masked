
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct docg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (struct docg3*,int ) ;
 int FUNC_3 (struct docg3*,int ) ;
 int FUNC_4 (struct docg3*,int ) ;

__attribute__((used)) static int FUNC_5(struct docg3 *VAR_6)
{
 int VAR_7;

 FUNC_0("doc_set_extra_page_mode()\n");
 FUNC_3(VAR_6, VAR_4);
 FUNC_2(VAR_6, VAR_0);
 FUNC_1(VAR_6, 2);

 VAR_7 = FUNC_4(VAR_6, VAR_3);
 if (VAR_7 & (VAR_1 | VAR_2))
  return -VAR_5;
 else
  return 0;
}
