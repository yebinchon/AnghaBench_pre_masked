
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,unsigned long) ;
 int FUNC_1 (struct comedi_device*,int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
       int VAR_1, int VAR_2, int VAR_3, unsigned long VAR_4)
{
 if (VAR_1) {
  FUNC_1(VAR_0, VAR_3, VAR_4 + 2 * VAR_2);
  return 0;
 }

 return FUNC_0(VAR_0, VAR_4 + 2 * VAR_2);
}
