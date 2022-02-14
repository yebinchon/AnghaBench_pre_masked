
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,int*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0, int *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_1 = (VAR_3 << 8) + VAR_2;
 return 0;
}
