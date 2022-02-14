
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {unsigned int (* get_valid_routes ) (struct comedi_device*,unsigned int,unsigned int*) ;int mutex; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct comedi_device*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0, unsigned int *VAR_1)
{
 FUNC_0(&VAR_0->mutex);
 VAR_1[1] = VAR_0->get_valid_routes(VAR_0, VAR_1[1], VAR_1 + 2);
 return 0;
}
