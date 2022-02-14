
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {scalar_t__ hw_version; int irq; scalar_t__ base_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ipw_hardware *VAR_5)
{
 unsigned int VAR_6;

 if (VAR_5->hw_version == VAR_0) {

  FUNC_1(0, VAR_5->base_port + VAR_1);


  VAR_6 = FUNC_0(VAR_5->base_port + VAR_2);
  if (VAR_6 & VAR_4)
   FUNC_1(VAR_4, VAR_5->base_port + VAR_2);
  if (VAR_6 & VAR_3)
   FUNC_1(VAR_3, VAR_5->base_port + VAR_2);

  FUNC_2(VAR_5->irq);
 }
}
