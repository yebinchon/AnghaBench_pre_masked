
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
    int VAR_2, int VAR_3, int VAR_4,
    unsigned long VAR_5)
{
 int VAR_6 = VAR_0 * (VAR_5 >> 12);

 VAR_5 &= 0x0fff;

 FUNC_1(VAR_3 + VAR_6, VAR_5);
 if (VAR_2) {
  FUNC_1(VAR_4, VAR_5 + 1);
  return 0;
 }
 return FUNC_0(VAR_5 + 1);
}
