
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmuio_private {struct pcmuio_asic* asics; } ;
struct pcmuio_asic {int pagelock; } ;
struct comedi_device {struct pcmuio_private* private; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 unsigned long FUNC_5 (struct comedi_device*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_8(struct comedi_device *VAR_1,
    int VAR_2, int VAR_3, int VAR_4)
{
 struct pcmuio_private *VAR_5 = VAR_1->private;
 struct pcmuio_asic *VAR_6 = &VAR_5->asics[VAR_2];
 unsigned long VAR_7 = FUNC_5(VAR_1, VAR_2);
 unsigned long VAR_8;
 unsigned int VAR_9;

 FUNC_6(&VAR_6->pagelock, VAR_8);
 if (VAR_3 == 0) {

  VAR_9 = FUNC_3(VAR_7 + FUNC_2(VAR_4 + 0));
  VAR_9 |= (FUNC_3(VAR_7 + FUNC_2(VAR_4 + 1)) << 8);
  VAR_9 |= (FUNC_3(VAR_7 + FUNC_2(VAR_4 + 2)) << 16);
 } else {
  FUNC_4(FUNC_0(VAR_3), VAR_7 + VAR_0);
  VAR_9 = FUNC_3(VAR_7 + FUNC_1(0));
  VAR_9 |= (FUNC_3(VAR_7 + FUNC_1(1)) << 8);
  VAR_9 |= (FUNC_3(VAR_7 + FUNC_1(2)) << 16);
 }
 FUNC_7(&VAR_6->pagelock, VAR_8);

 return VAR_9;
}
