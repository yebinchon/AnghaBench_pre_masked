
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_guest_device {int dev; int bm_tasklet; int datagram_tasklet; scalar_t__ iobase; scalar_t__ exclusive_vectors; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct vmci_guest_device *VAR_7 = VAR_6;







 if (VAR_7->exclusive_vectors) {
  FUNC_2(&VAR_7->datagram_tasklet);
 } else {
  unsigned int VAR_8;


  VAR_8 = FUNC_1(VAR_7->iobase + VAR_2);
  if (VAR_8 == 0 || VAR_8 == ~0)
   return VAR_1;

  if (VAR_8 & VAR_3) {
   FUNC_2(&VAR_7->datagram_tasklet);
   VAR_8 &= ~VAR_3;
  }

  if (VAR_8 & VAR_4) {
   FUNC_2(&VAR_7->bm_tasklet);
   VAR_8 &= ~VAR_4;
  }

  if (VAR_8 != 0)
   FUNC_0(VAR_7->dev,
     "Ignoring unknown interrupt cause (%d)\n",
     VAR_8);
 }

 return VAR_0;
}
