
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pre_pll_config {unsigned long pixclock; unsigned long tmdsclock; } ;
struct inno_hdmi_phy {int dummy; } ;


 int VAR_0 ;
 struct pre_pll_config const* FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct inno_hdmi_phy*,unsigned long) ;
 struct pre_pll_config* VAR_1 ;

__attribute__((used)) static const
struct pre_pll_config *FUNC_2(struct inno_hdmi_phy *VAR_2,
           unsigned long VAR_3)
{
 const struct pre_pll_config *VAR_4 = VAR_1;
 unsigned long VAR_5 = FUNC_1(VAR_2, VAR_3);

 for (; VAR_4->pixclock != 0; VAR_4++)
  if (VAR_4->pixclock == VAR_3 && VAR_4->tmdsclock == VAR_5)
   break;

 if (VAR_4->pixclock == 0)
  return FUNC_0(-VAR_0);

 return VAR_4;
}
