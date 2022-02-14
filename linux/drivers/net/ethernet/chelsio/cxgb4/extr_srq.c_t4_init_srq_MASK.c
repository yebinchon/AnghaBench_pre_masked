
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srq_data {int srq_size; int lock; int comp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct srq_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct srq_data *FUNC_3(int VAR_1)
{
 struct srq_data *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->srq_size = VAR_1;
 FUNC_0(&VAR_2->comp);
 FUNC_2(&VAR_2->lock);

 return VAR_2;
}
