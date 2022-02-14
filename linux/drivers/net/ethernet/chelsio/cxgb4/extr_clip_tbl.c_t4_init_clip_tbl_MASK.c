
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clip_tbl {unsigned int clipt_start; unsigned int clipt_size; int ce_free_head; void* cl_list; int * hash_list; int lock; int nfree; } ;
struct clip_entry {int list; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int VAR_2 ;
 struct clip_entry* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct clip_tbl*) ;
 struct clip_tbl* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct clip_tbl*,int ,unsigned int) ;

struct clip_tbl *FUNC_8(unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct clip_entry *VAR_5;
 struct clip_tbl *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_3 >= VAR_4)
  return ((void*)0);
 VAR_7 = VAR_4 - VAR_3 + 1;
 if (VAR_7 < VAR_0)
  return ((void*)0);

 VAR_6 = FUNC_4(FUNC_7(VAR_6, VAR_2, VAR_7), VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->clipt_start = VAR_3;
 VAR_6->clipt_size = VAR_7;
 FUNC_0(&VAR_6->ce_free_head);

 FUNC_1(&VAR_6->nfree, VAR_7);
 FUNC_6(&VAR_6->lock);

 for (VAR_8 = 0; VAR_8 < VAR_6->clipt_size; ++VAR_8)
  FUNC_0(&VAR_6->hash_list[VAR_8]);

 VAR_5 = FUNC_2(VAR_7, sizeof(struct clip_entry), VAR_1);
 if (!VAR_5) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }
 VAR_6->cl_list = (void *)VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_0(&VAR_5[VAR_8].list);
  FUNC_5(&VAR_5[VAR_8].list, &VAR_6->ce_free_head);
 }

 return VAR_6;
}
