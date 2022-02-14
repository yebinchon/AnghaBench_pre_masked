
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcmcia_low_level {int first; int nr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(struct device *VAR_3, struct pcmcia_low_level *VAR_4)
{




 uint32_t VAR_5 = VAR_1;


 if ((VAR_4->first + VAR_4->nr) > 1 ||
     FUNC_2() || FUNC_1())
  VAR_5 |= VAR_2;

 FUNC_0(VAR_5, VAR_0);
}
