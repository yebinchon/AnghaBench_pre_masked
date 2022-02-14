
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static u16 FUNC_3(struct comedi_device *VAR_3, u16 VAR_4)
{

 FUNC_2(VAR_0 | VAR_4, VAR_3->mmio + VAR_2);


 FUNC_1(VAR_3);

 return FUNC_0(VAR_3->mmio + VAR_1);
}
