
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct ni_660x_private {unsigned long long io_dir; int * io_cfg; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 struct ni_660x_private *VAR_4 = VAR_1->private;
 u64 VAR_5;

 if (VAR_2 >= FUNC_0(0))

  VAR_2 -= FUNC_0(0);

 VAR_5 = 1ULL << VAR_2;

 if (VAR_3 == VAR_0) {
  VAR_4->io_dir |= VAR_5;

  FUNC_1(VAR_1, VAR_2, VAR_4->io_cfg[VAR_2]);
 } else {
  VAR_4->io_dir &= ~VAR_5;

  FUNC_1(VAR_1, VAR_2, 0);
 }
}
