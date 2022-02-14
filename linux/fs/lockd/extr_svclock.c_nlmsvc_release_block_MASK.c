
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlm_block {TYPE_1__* b_file; int b_count; } ;
struct TYPE_2__ {int f_mutex; } ;


 int FUNC_0 (int *,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct nlm_block *VAR_1)
{
 if (VAR_1 != ((void*)0))
  FUNC_0(&VAR_1->b_count, VAR_0, &VAR_1->b_file->f_mutex);
}
