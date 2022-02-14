
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_desc {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1(struct hclge_desc *VAR_3, bool VAR_4)
{
 VAR_3->flag = FUNC_0(VAR_1 | VAR_0);
 if (VAR_4)
  VAR_3->flag |= FUNC_0(VAR_2);
 else
  VAR_3->flag &= FUNC_0(~VAR_2);
}
