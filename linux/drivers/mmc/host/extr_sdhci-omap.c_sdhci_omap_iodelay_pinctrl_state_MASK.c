
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_omap_host {char* version; int pinctrl; struct device* dev; } ;
struct pinctrl_state {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct pinctrl_state* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pinctrl_state*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 struct pinctrl_state* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;

__attribute__((used)) static struct pinctrl_state
*FUNC_5(struct sdhci_omap_host *VAR_1, char *VAR_2,
      u32 *VAR_3, u32 VAR_4)
{
 struct device *VAR_5 = VAR_1->dev;
 char *VAR_6 = VAR_1->version;
 struct pinctrl_state *VAR_7 = FUNC_0(-VAR_0);
 char VAR_8[20];

 if (!(*VAR_3 & VAR_4))
  goto ret;

 if (VAR_6) {
  FUNC_4(VAR_8, 20, "%s-%s", VAR_2, VAR_6);
  VAR_7 = FUNC_3(VAR_1->pinctrl, VAR_8);
 }

 if (FUNC_1(VAR_7))
  VAR_7 = FUNC_3(VAR_1->pinctrl, VAR_2);

 if (FUNC_1(VAR_7)) {
  FUNC_2(VAR_5, "no pinctrl state for %s mode", VAR_2);
  *VAR_3 &= ~VAR_4;
 }

ret:
 return VAR_7;
}
