
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ async_dma_dir; int spin_lock; struct comedi_async* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_buf_map {int dummy; } ;
struct comedi_async {struct comedi_buf_map* buf_map; scalar_t__ prealloc_bufsz; int * prealloc_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_buf_map*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2)
{
 struct comedi_async *VAR_3 = VAR_2->async;
 struct comedi_buf_map *VAR_4;
 unsigned long VAR_5;

 if (VAR_3->prealloc_buf) {
  if (VAR_2->async_dma_dir == VAR_0)
   FUNC_3(VAR_3->prealloc_buf);
  VAR_3->prealloc_buf = ((void*)0);
  VAR_3->prealloc_bufsz = 0;
 }

 FUNC_1(&VAR_2->spin_lock, VAR_5);
 VAR_4 = VAR_3->buf_map;
 VAR_3->buf_map = ((void*)0);
 FUNC_2(&VAR_2->spin_lock, VAR_5);
 FUNC_0(VAR_4);
}
