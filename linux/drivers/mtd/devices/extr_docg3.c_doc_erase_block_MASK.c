
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
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct docg3*,int ) ;
 int FUNC_4 (struct docg3*,int ) ;
 int FUNC_5 (struct docg3*) ;
 int FUNC_6 (struct docg3*) ;
 int FUNC_7 (struct docg3*,int) ;
 int FUNC_8 (struct docg3*) ;
 scalar_t__ FUNC_9 (struct docg3*) ;

__attribute__((used)) static int FUNC_10(struct docg3 *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 FUNC_0("doc_erase_block(blocks=(%d,%d))\n", VAR_6, VAR_7);
 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8)
  return -VAR_4;

 FUNC_6(VAR_5);
 FUNC_4(VAR_5, VAR_3);

 VAR_9 = VAR_6 << VAR_0;
 FUNC_3(VAR_5, VAR_2);
 FUNC_7(VAR_5, VAR_9);
 VAR_9 = VAR_7 << VAR_0;
 FUNC_3(VAR_5, VAR_2);
 FUNC_7(VAR_5, VAR_9);
 FUNC_1(VAR_5, 1);

 FUNC_3(VAR_5, VAR_1);
 FUNC_1(VAR_5, 2);

 if (FUNC_9(VAR_5)) {
  FUNC_2("Erase blocks %d,%d error\n", VAR_6, VAR_7);
  return -VAR_4;
 }

 return FUNC_8(VAR_5);
}
