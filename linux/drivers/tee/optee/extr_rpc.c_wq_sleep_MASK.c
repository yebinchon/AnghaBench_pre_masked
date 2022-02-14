
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wq_entry {int link; int c; } ;
struct optee_wait_queue {int mu; } ;


 int FUNC_0 (struct wq_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct wq_entry* FUNC_5 (struct optee_wait_queue*,int ) ;

__attribute__((used)) static void FUNC_6(struct optee_wait_queue *VAR_0, u32 VAR_1)
{
 struct wq_entry *VAR_2 = FUNC_5(VAR_0, VAR_1);

 if (VAR_2) {
  FUNC_4(&VAR_2->c);
  FUNC_2(&VAR_0->mu);
  FUNC_1(&VAR_2->link);
  FUNC_3(&VAR_0->mu);
  FUNC_0(VAR_2);
 }
}
