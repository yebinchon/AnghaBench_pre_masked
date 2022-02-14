
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_buf_map {int refcount; } ;
struct TYPE_2__ {struct comedi_buf_map* buf_map; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct comedi_subdevice *VAR_0)
{
 struct comedi_buf_map *VAR_1 = VAR_0->async->buf_map;

 return VAR_1 && (FUNC_0(&VAR_1->refcount) > 1);
}
