
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ni_660x_private {int io_dir; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_2,
           unsigned int VAR_3)
{
 struct ni_660x_private *VAR_4 = VAR_2->private;
 u64 VAR_5;

 if (VAR_3 >= FUNC_0(0))

  VAR_3 -= FUNC_0(0);

 VAR_5 = 1ULL << VAR_3;

 return (VAR_4->io_dir & VAR_5) ? VAR_1 : VAR_0;
}
