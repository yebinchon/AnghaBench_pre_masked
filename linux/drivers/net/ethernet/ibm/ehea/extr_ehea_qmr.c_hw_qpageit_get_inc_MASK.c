
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_queue {scalar_t__ current_q_offset; scalar_t__ pagesize; scalar_t__ queue_length; } ;


 int VAR_0 ;
 void* FUNC_0 (struct hw_queue*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void *FUNC_2(struct hw_queue *VAR_1)
{
 void *VAR_2 = FUNC_0(VAR_1);

 VAR_1->current_q_offset += VAR_1->pagesize;
 if (VAR_1->current_q_offset > VAR_1->queue_length) {
  VAR_1->current_q_offset -= VAR_1->pagesize;
  VAR_2 = ((void*)0);
 } else if (((u64) VAR_2) & (VAR_0-1)) {
  FUNC_1("not on pageboundary\n");
  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
