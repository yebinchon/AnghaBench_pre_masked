
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int spin_lock; struct comedi_async* async; } ;
struct comedi_buf_map {scalar_t__ n_pages; } ;
struct comedi_async {struct comedi_buf_map* buf_map; } ;


 int FUNC_0 (struct comedi_buf_map*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct comedi_buf_map *
FUNC_3(struct comedi_subdevice *VAR_0)
{
 struct comedi_async *VAR_1 = VAR_0->async;
 struct comedi_buf_map *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 if (!VAR_1)
  return ((void*)0);

 FUNC_1(&VAR_0->spin_lock, VAR_3);
 VAR_2 = VAR_1->buf_map;

 if (VAR_2 && VAR_2->n_pages)
  FUNC_0(VAR_2);
 else
  VAR_2 = ((void*)0);
 FUNC_2(&VAR_0->spin_lock, VAR_3);

 return VAR_2;
}
