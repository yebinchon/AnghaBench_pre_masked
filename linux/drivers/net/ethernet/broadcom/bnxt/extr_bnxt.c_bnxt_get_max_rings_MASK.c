
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,int*,int*,int*) ;
 int FUNC_1 (struct bnxt*,int*,int*,int,int) ;

int FUNC_2(struct bnxt *VAR_1, int *VAR_2, int *VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 FUNC_0(VAR_1, &VAR_5, &VAR_6, &VAR_7);
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_6;
 if (!VAR_5 || !VAR_6 || !VAR_7)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7, VAR_4);
}
