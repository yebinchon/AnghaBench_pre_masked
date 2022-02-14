
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {unsigned int minor; int mutex; } ;


 struct comedi_device** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct comedi_device *VAR_2)
{
 unsigned int VAR_3 = VAR_2->minor;
 bool VAR_4 = 0;

 FUNC_0(&VAR_2->mutex);
 FUNC_1(&VAR_1);
 if (VAR_2 == VAR_0[VAR_3]) {
  VAR_0[VAR_3] = ((void*)0);
  VAR_4 = 1;
 }
 FUNC_2(&VAR_1);
 return VAR_4;
}
