
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9118_private {unsigned int ai_n_realscanlen; int ai_flags; scalar_t__ iobase_a; scalar_t__ dma_actbuf; int ai_neverending; struct pci9118_dmabuf* dmabuf; } ;
struct pci9118_dmabuf {unsigned int size; unsigned int use_size; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int class_dev; struct pci9118_private* private; } ;
struct comedi_cmd {unsigned long long stop_arg; } ;
struct TYPE_2__ {unsigned int prealloc_bufsz; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5)
{
 struct pci9118_private *VAR_6 = VAR_4->private;
 struct comedi_cmd *VAR_7 = &VAR_5->async->cmd;
 struct pci9118_dmabuf *VAR_8 = &VAR_6->dmabuf[0];
 struct pci9118_dmabuf *VAR_9 = &VAR_6->dmabuf[1];
 unsigned int VAR_10 = VAR_8->size;
 unsigned int VAR_11 = VAR_9->size;
 unsigned int VAR_12 = VAR_6->ai_n_realscanlen *
      FUNC_0(VAR_5);


 if (VAR_10 > VAR_5->async->prealloc_bufsz) {

  VAR_10 = VAR_5->async->prealloc_bufsz & ~3L;
 }
 if (VAR_11 > VAR_5->async->prealloc_bufsz) {

  VAR_11 = VAR_5->async->prealloc_bufsz & ~3L;
 }


 if (VAR_6->ai_flags & VAR_2) {
  if (VAR_10 < VAR_12) {

   VAR_6->ai_flags &= (~VAR_2);
   FUNC_1(VAR_4->class_dev,
     "WAR: DMA0 buf too short, can't support CMDF_WAKE_EOS (%d<%d)\n",
      VAR_10, VAR_12);
  } else {

   VAR_10 = VAR_12;
   if (VAR_10 < 4) {
    FUNC_1(VAR_4->class_dev,
      "ERR: DMA0 buf len bug? (%d<4)\n",
      VAR_10);
    VAR_10 = 4;
   }
  }
 }
 if (VAR_6->ai_flags & VAR_2) {
  if (VAR_11 < VAR_12) {

   VAR_6->ai_flags &= (~VAR_2);
   FUNC_1(VAR_4->class_dev,
     "WAR: DMA1 buf too short, can't support CMDF_WAKE_EOS (%d<%d)\n",
     VAR_11, VAR_12);
  } else {

   VAR_11 = VAR_12;
   if (VAR_11 < 4) {
    FUNC_1(VAR_4->class_dev,
      "ERR: DMA1 buf len bug? (%d<4)\n",
      VAR_11);
    VAR_11 = 4;
   }
  }
 }


 if (!(VAR_6->ai_flags & VAR_2)) {
  unsigned int VAR_13;


  VAR_13 = VAR_10;
  VAR_10 = (VAR_10 / VAR_12) * VAR_12;
  VAR_10 &= ~3L;
  if (!VAR_10)
   VAR_10 = VAR_13;
  VAR_13 = VAR_11;
  VAR_11 = (VAR_11 / VAR_12) * VAR_12;
  VAR_11 &= ~3L;
  if (!VAR_11)
   VAR_11 = VAR_13;




  if (!VAR_6->ai_neverending) {
   unsigned long long VAR_14;

   VAR_14 = (unsigned long long)VAR_12 *
      VAR_7->stop_arg;


   if (VAR_10 > VAR_14) {
    VAR_10 = VAR_14;
    VAR_10 &= ~3L;
   } else {

    if (VAR_11 > (VAR_14 - VAR_10)) {
     VAR_11 = VAR_14 - VAR_10;
     VAR_11 &= ~3L;
    }
   }
  }
 }


 VAR_6->dma_actbuf = 0;
 VAR_8->use_size = VAR_10;
 VAR_9->use_size = VAR_11;

 FUNC_4(VAR_4, 0);
 FUNC_5(VAR_4, 0);

 FUNC_3(0x00000000 | VAR_0,
      VAR_6->iobase_a + VAR_1);

 FUNC_4(VAR_4, 1);
 FUNC_3(FUNC_2(VAR_6->iobase_a + VAR_1) | VAR_3,
      VAR_6->iobase_a + VAR_1);


 return 0;
}
