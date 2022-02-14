
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int attached; int attach_lock; int mutex; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->mutex);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;
 FUNC_1(&VAR_0->attach_lock);
 VAR_0->attached = 1;
 FUNC_3(&VAR_0->attach_lock);
 return 0;
}
