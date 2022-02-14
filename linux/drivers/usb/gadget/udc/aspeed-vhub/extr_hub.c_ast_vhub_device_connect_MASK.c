
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ast_vhub {scalar_t__ wakeup_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_vhub*,unsigned int,int,int,int) ;
 int FUNC_1 (struct ast_vhub*) ;

void FUNC_2(struct ast_vhub *VAR_2,
        unsigned int VAR_3, bool VAR_4)
{
 if (VAR_4)
  FUNC_0(VAR_2, VAR_3, 0,
       VAR_0, 1);
 else
  FUNC_0(VAR_2, VAR_3,
       VAR_0 |
       VAR_1,
       0, 1);





 if (VAR_2->wakeup_en)
  FUNC_1(VAR_2);
}
