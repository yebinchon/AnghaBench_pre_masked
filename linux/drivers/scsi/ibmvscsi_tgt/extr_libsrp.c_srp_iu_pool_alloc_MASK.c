
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_queue {void* pool; int queue; struct iu_entry* items; int lock; } ;
struct srp_buf {int dummy; } ;
struct iu_entry {struct srp_buf* sbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (int *,void*,size_t) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct srp_queue *VAR_2, size_t VAR_3,
        struct srp_buf **VAR_4)
{
 struct iu_entry *VAR_5;
 int VAR_6;

 VAR_2->pool = FUNC_0(VAR_3, sizeof(struct iu_entry *), VAR_1);
 if (!VAR_2->pool)
  return -VAR_0;
 VAR_2->items = FUNC_0(VAR_3, sizeof(struct iu_entry), VAR_1);
 if (!VAR_2->items)
  goto free_pool;

 FUNC_4(&VAR_2->lock);
 FUNC_2(&VAR_2->queue, (void *)VAR_2->pool, VAR_3 * sizeof(void *));

 for (VAR_6 = 0, VAR_5 = VAR_2->items; VAR_6 < VAR_3; VAR_6++) {
  FUNC_1(&VAR_2->queue, (void *)&VAR_5, sizeof(void *));
  VAR_5->sbuf = VAR_4[VAR_6];
  VAR_5++;
 }
 return 0;

free_pool:
 FUNC_3(VAR_2->pool);
 return -VAR_0;
}
