
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct comedi_device {int n_subdevices; } ;


 int FUNC_0 (struct comedi_device*,int const*,size_t) ;
 int FUNC_1 (struct comedi_device*,int,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
     const u8 *VAR_1, size_t VAR_2,
     unsigned long VAR_3)
{
 int VAR_4;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_0->n_subdevices; VAR_4++)
  FUNC_1(VAR_0, VAR_4, VAR_1, VAR_2);

 return 0;
}
