
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct rmobile_pm_domain {scalar_t__ base; TYPE_1__ genpd; int bit_shift; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rmobile_pm_domain *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_5->bit_shift);
 unsigned int VAR_7;
 int VAR_8 = 0;

 if (FUNC_1(VAR_5->base + VAR_1) & VAR_6)
  return VAR_8;

 FUNC_2(VAR_6, VAR_5->base + VAR_4);

 for (VAR_7 = 2 * VAR_3; VAR_7; VAR_7--) {
  if (!(FUNC_1(VAR_5->base + VAR_4) & VAR_6))
   break;
  if (VAR_7 > VAR_3)
   FUNC_5(VAR_2);
  else
   FUNC_3();
 }
 if (!VAR_7)
  VAR_8 = -VAR_0;

 FUNC_4("%s: Power on, 0x%08x -> PSTR = 0x%08x\n",
   VAR_5->genpd.name, VAR_6,
   FUNC_1(VAR_5->base + VAR_1));

 return VAR_8;
}
