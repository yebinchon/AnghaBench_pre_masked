
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nidio96_private {int di_mite_ring; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct nidio96_private* private; } ;
struct TYPE_2__ {int prealloc_bufsz; int prealloc_buf; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1)
{
 struct nidio96_private *VAR_2 = VAR_0->private;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->di_mite_ring, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_1->async->prealloc_buf, 0xaa, VAR_1->async->prealloc_bufsz);

 return 0;
}
