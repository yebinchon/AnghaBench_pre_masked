
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_verity_info; } ;
struct fsverity_info {int dummy; } ;


 int * FUNC_0 (int *,int *,struct fsverity_info*) ;
 int FUNC_1 (struct fsverity_info*) ;

void FUNC_2(struct inode *VAR_0, struct fsverity_info *VAR_1)
{




 if (FUNC_0(&VAR_0->i_verity_info, ((void*)0), VAR_1) != ((void*)0))
  FUNC_1(VAR_1);
}
