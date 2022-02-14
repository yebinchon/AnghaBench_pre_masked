
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlogicfas408_priv {int qbase; int int_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct qlogicfas408_priv *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->qbase;
 int VAR_5 = VAR_2->int_type;

 VAR_3 = FUNC_0(VAR_4 + 0xd);
 VAR_0;
 FUNC_1(3, VAR_4 + 3);
 FUNC_1(2, VAR_4 + 3);
 if (VAR_3 & 0x80)
  VAR_1;
}
