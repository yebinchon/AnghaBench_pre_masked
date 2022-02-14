
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_lrange {int dummy; } ;


 struct comedi_lrange const** VAR_0 ;
 struct comedi_lrange const VAR_1 ;

__attribute__((used)) static const struct comedi_lrange *FUNC_0(int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= 5)
  return &VAR_1;
 return VAR_0[VAR_2];
}
