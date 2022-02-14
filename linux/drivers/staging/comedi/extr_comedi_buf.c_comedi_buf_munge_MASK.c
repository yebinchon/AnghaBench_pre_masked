
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int device; int (* munge ) (int ,struct comedi_subdevice*,unsigned int,int,int) ;struct comedi_async* async; } ;
struct TYPE_2__ {int flags; int chanlist_len; } ;
struct comedi_async {unsigned int munge_count; unsigned int prealloc_bufsz; unsigned int munge_ptr; unsigned int prealloc_buf; int munge_chan; TYPE_1__ cmd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct comedi_subdevice*,unsigned int,int,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct comedi_subdevice *VAR_1,
         unsigned int VAR_2)
{
 struct comedi_async *VAR_3 = VAR_1->async;
 unsigned int VAR_4 = 0;
 const unsigned int VAR_5 = FUNC_0(VAR_1);

 if (!VAR_1->munge || (VAR_3->cmd.flags & VAR_0)) {
  VAR_3->munge_count += VAR_2;
  VAR_4 = VAR_2;
 } else {

  VAR_2 -= VAR_2 % VAR_5;
  while (VAR_4 < VAR_2) {
   int VAR_6 = VAR_2 - VAR_4;
   unsigned int VAR_7;

   VAR_7 = VAR_3->prealloc_bufsz - VAR_3->munge_ptr;
   if (VAR_6 > VAR_7)
    VAR_6 = VAR_7;

   VAR_1->munge(VAR_1->device, VAR_1,
     VAR_3->prealloc_buf + VAR_3->munge_ptr,
     VAR_6, VAR_3->munge_chan);





   FUNC_1();

   VAR_3->munge_chan += VAR_6 / VAR_5;
   VAR_3->munge_chan %= VAR_3->cmd.chanlist_len;
   VAR_3->munge_count += VAR_6;
   VAR_3->munge_ptr += VAR_6;
   VAR_3->munge_ptr %= VAR_3->prealloc_bufsz;
   VAR_4 += VAR_6;
  }
 }

 return VAR_4;
}
