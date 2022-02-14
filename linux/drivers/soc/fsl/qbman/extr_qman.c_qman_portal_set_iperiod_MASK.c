
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qman_portal {int p; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__) ;

int FUNC_1(struct qman_portal *VAR_3, u32 VAR_4)
{
 if (!VAR_3 || VAR_4 > VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_3->p, VAR_2, VAR_4);

 return 0;
}
