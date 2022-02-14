
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int attach_lock; scalar_t__ attached; } ;


 unsigned int VAR_0 ;
 struct comedi_device* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int ,unsigned int*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (int *) ;

struct comedi_device *FUNC_6(const char *VAR_1)
{
 struct comedi_device *VAR_2, *VAR_3 = ((void*)0);
 unsigned int VAR_4;

 if (FUNC_4(VAR_1, "/dev/comedi", 11) != 0)
  return ((void*)0);

 if (FUNC_3(VAR_1 + 11, 0, &VAR_4))
  return ((void*)0);

 if (VAR_4 >= VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_4);
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(&VAR_2->attach_lock);
 if (VAR_2->attached)
  VAR_3 = VAR_2;
 else
  VAR_3 = ((void*)0);
 FUNC_5(&VAR_2->attach_lock);

 if (!VAR_3)
  FUNC_1(VAR_2);

 return VAR_3;
}
