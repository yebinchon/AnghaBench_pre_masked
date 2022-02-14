
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3, int VAR_4)
{

 FUNC_2(VAR_2, VAR_3->mmio + VAR_1);

 FUNC_2(VAR_4, VAR_3->mmio + FUNC_0(0));



 FUNC_1(VAR_3, VAR_0);
}
