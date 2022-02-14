
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_7)
{

 FUNC_1(2);
 FUNC_2(VAR_5 | VAR_4,
        VAR_7->mmio + VAR_3);
 FUNC_1(2);
 FUNC_2(VAR_6 | VAR_4,
        VAR_7->mmio + VAR_3);


 FUNC_1(2);
 FUNC_2(VAR_1,
        VAR_7->mmio + VAR_2);


 FUNC_1(2);
 FUNC_2(VAR_0,
        VAR_7->mmio + VAR_2);


 FUNC_0(VAR_7);
}
