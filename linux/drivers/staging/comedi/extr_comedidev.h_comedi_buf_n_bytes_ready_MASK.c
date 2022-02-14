
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct TYPE_2__ {unsigned int buf_write_count; unsigned int buf_read_count; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct comedi_subdevice *VAR_0)
{
 return VAR_0->async->buf_write_count - VAR_0->async->buf_read_count;
}
