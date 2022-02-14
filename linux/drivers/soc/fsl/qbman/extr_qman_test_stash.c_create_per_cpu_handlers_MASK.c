
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hp_handler {int node; int frame_ptr; int addr; int processor_id; } ;
struct hp_cpu {int handlers; int processor_id; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct hp_handler* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct hp_cpu* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void)
{
 struct hp_handler *VAR_10;
 int VAR_11;
 struct hp_cpu *VAR_12 = FUNC_8(&VAR_7);

 VAR_12->processor_id = FUNC_5();
 FUNC_6(&VAR_9);
 FUNC_3(&VAR_12->node, &VAR_5);
 VAR_6++;
 FUNC_7(&VAR_9);
 FUNC_0(&VAR_12->handlers);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_10 = FUNC_2(VAR_8, VAR_1);
  if (!VAR_10) {
   FUNC_4("kmem_cache_alloc() failed");
   FUNC_1(1);
   return -VAR_0;
  }
  VAR_10->processor_id = VAR_12->processor_id;
  VAR_10->addr = VAR_3;
  VAR_10->frame_ptr = VAR_4;
  FUNC_3(&VAR_10->node, &VAR_12->handlers);
 }
 return 0;
}
