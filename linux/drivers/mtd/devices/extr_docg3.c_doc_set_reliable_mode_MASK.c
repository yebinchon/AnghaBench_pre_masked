
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct docg3 {size_t reliable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct docg3*,int ) ;
 int FUNC_4 (struct docg3*,int ) ;

__attribute__((used)) static void FUNC_5(struct docg3 *VAR_4)
{
 static char *VAR_5[] = { "normal", "fast", "reliable", "invalid" };

 FUNC_0("doc_set_reliable_mode(%s)\n", VAR_5[VAR_4->reliable]);
 switch (VAR_4->reliable) {
 case 0:
  break;
 case 1:
  FUNC_4(VAR_4, VAR_2);
  FUNC_3(VAR_4, VAR_0);
  break;
 case 2:
  FUNC_4(VAR_4, VAR_3);
  FUNC_3(VAR_4, VAR_0);
  FUNC_3(VAR_4, VAR_1);
  break;
 default:
  FUNC_2("doc_set_reliable_mode(): invalid mode\n");
  break;
 }
 FUNC_1(VAR_4, 2);
}
