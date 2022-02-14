
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmuio_private {struct pcmuio_asic* asics; } ;
struct pcmuio_asic {int pagelock; } ;
struct comedi_device {struct pcmuio_private* private; } ;


 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 unsigned long FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_1, unsigned int VAR_2,
    int VAR_3, int VAR_4, int VAR_5)
{
 struct pcmuio_private *VAR_6 = VAR_1->private;
 struct pcmuio_asic *VAR_7 = &VAR_6->asics[VAR_3];
 unsigned long VAR_8 = FUNC_4(VAR_1, VAR_3);
 unsigned long VAR_9;

 FUNC_5(&VAR_7->pagelock, VAR_9);
 if (VAR_4 == 0) {

  FUNC_3(VAR_2 & 0xff, VAR_8 + FUNC_2(VAR_5 + 0));
  FUNC_3((VAR_2 >> 8) & 0xff, VAR_8 + FUNC_2(VAR_5 + 1));
  FUNC_3((VAR_2 >> 16) & 0xff, VAR_8 + FUNC_2(VAR_5 + 2));
 } else {
  FUNC_3(FUNC_0(VAR_4), VAR_8 + VAR_0);
  FUNC_3(VAR_2 & 0xff, VAR_8 + FUNC_1(0));
  FUNC_3((VAR_2 >> 8) & 0xff, VAR_8 + FUNC_1(1));
  FUNC_3((VAR_2 >> 16) & 0xff, VAR_8 + FUNC_1(2));
 }
 FUNC_6(&VAR_7->pagelock, VAR_9);
}
