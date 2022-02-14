
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {scalar_t__ id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct bpf_map *VAR_2, bool VAR_3)
{
 unsigned long VAR_4;






 if (!VAR_2->id)
  return;

 if (VAR_3)
  FUNC_3(&VAR_1, VAR_4);
 else
  FUNC_0(&VAR_1);

 FUNC_2(&VAR_0, VAR_2->id);
 VAR_2->id = 0;

 if (VAR_3)
  FUNC_4(&VAR_1, VAR_4);
 else
  FUNC_1(&VAR_1);
}
