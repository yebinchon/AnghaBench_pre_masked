
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int completion_lock; int tail; int * ring_pages; scalar_t__ completed_events; } ;
struct aio_ring {unsigned int head; } ;


 struct aio_ring* FUNC_0 (int ) ;
 int FUNC_1 (struct aio_ring*) ;
 int FUNC_2 (struct kioctx*,unsigned int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct kioctx *VAR_0)
{
 FUNC_3(&VAR_0->completion_lock);
 if (VAR_0->completed_events) {
  struct aio_ring *VAR_1;
  unsigned VAR_2;
  VAR_1 = FUNC_0(VAR_0->ring_pages[0]);
  VAR_2 = VAR_1->head;
  FUNC_1(VAR_1);

  FUNC_2(VAR_0, VAR_2, VAR_0->tail);
 }

 FUNC_4(&VAR_0->completion_lock);
}
