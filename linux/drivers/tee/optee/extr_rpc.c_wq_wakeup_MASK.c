
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wq_entry {int c; } ;
struct optee_wait_queue {int dummy; } ;


 int FUNC_0 (int *) ;
 struct wq_entry* FUNC_1 (struct optee_wait_queue*,int ) ;

__attribute__((used)) static void FUNC_2(struct optee_wait_queue *VAR_0, u32 VAR_1)
{
 struct wq_entry *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  FUNC_0(&VAR_2->c);
}
