
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7)
{
 int VAR_8;


 FUNC_2(0, VAR_7->mmio + VAR_4);
 FUNC_2(VAR_5, VAR_7->mmio + VAR_6);


 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  unsigned int VAR_9 = FUNC_0(VAR_8);


  FUNC_2(VAR_9, VAR_7->mmio + VAR_1);


  FUNC_2(0, VAR_7->mmio + VAR_0);


  FUNC_2(VAR_9 | VAR_2,
         VAR_7->mmio + VAR_1);
  FUNC_1(1);
 }


 FUNC_2(0, VAR_7->mmio + VAR_3);

 return 0;
}
