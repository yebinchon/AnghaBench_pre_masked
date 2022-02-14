
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int ioctx_table; int ioctx_lock; } ;
struct kioctx_table {unsigned int nr; unsigned int id; int * table; int * ring_pages; } ;
struct kioctx {unsigned int nr; unsigned int id; int * table; int * ring_pages; } ;
struct aio_ring {unsigned int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kioctx_table*) ;
 int FUNC_1 (struct kioctx_table*,int ) ;
 struct aio_ring* FUNC_2 (int ) ;
 int FUNC_3 (struct aio_ring*) ;
 struct kioctx_table* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct kioctx_table*) ;
 struct kioctx_table* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct kioctx *VAR_3, struct mm_struct *VAR_4)
{
 unsigned VAR_5, VAR_6;
 struct kioctx_table *VAR_7, *VAR_8;
 struct aio_ring *VAR_9;

 FUNC_9(&VAR_4->ioctx_lock);
 VAR_7 = FUNC_8(VAR_4->ioctx_table);

 while (1) {
  if (VAR_7)
   for (VAR_5 = 0; VAR_5 < VAR_7->nr; VAR_5++)
    if (!FUNC_6(VAR_7->table[VAR_5])) {
     VAR_3->id = VAR_5;
     FUNC_7(VAR_7->table[VAR_5], VAR_3);
     FUNC_10(&VAR_4->ioctx_lock);





     VAR_9 = FUNC_2(VAR_3->ring_pages[0]);
     VAR_9->id = VAR_3->id;
     FUNC_3(VAR_9);
     return 0;
    }

  VAR_6 = (VAR_7 ? VAR_7->nr : 1) * 4;
  FUNC_10(&VAR_4->ioctx_lock);

  VAR_7 = FUNC_4(sizeof(*VAR_7) + sizeof(struct kioctx *) *
    VAR_6, VAR_1);
  if (!VAR_7)
   return -VAR_0;

  VAR_7->nr = VAR_6;

  FUNC_9(&VAR_4->ioctx_lock);
  VAR_8 = FUNC_8(VAR_4->ioctx_table);

  if (!VAR_8) {
   FUNC_7(VAR_4->ioctx_table, VAR_7);
  } else if (VAR_7->nr > VAR_8->nr) {
   FUNC_5(VAR_7->table, VAR_8->table,
          VAR_8->nr * sizeof(struct kioctx *));

   FUNC_7(VAR_4->ioctx_table, VAR_7);
   FUNC_1(VAR_8, VAR_2);
  } else {
   FUNC_0(VAR_7);
   VAR_7 = VAR_8;
  }
 }
}
