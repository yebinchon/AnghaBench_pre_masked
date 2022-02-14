
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct reset_control {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;
struct meson_pcie {TYPE_1__ pci; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct reset_control* FUNC_0 (struct device*,char const*) ;
 struct reset_control* FUNC_1 (struct device*,char const*) ;

__attribute__((used)) static struct reset_control *FUNC_2(struct meson_pcie *VAR_1,
        const char *VAR_2,
        u32 VAR_3)
{
 struct device *VAR_4 = VAR_1->pci.dev;
 struct reset_control *VAR_5;

 if (VAR_3 == VAR_0)
  VAR_5 = FUNC_1(VAR_4, VAR_2);
 else
  VAR_5 = FUNC_0(VAR_4, VAR_2);

 return VAR_5;
}
