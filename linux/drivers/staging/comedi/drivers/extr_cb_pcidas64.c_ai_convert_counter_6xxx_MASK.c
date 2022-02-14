
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int convert_arg; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const struct comedi_device *VAR_1,
       const struct comedi_cmd *VAR_2)
{

 return VAR_2->convert_arg / VAR_0 - 3;
}
