
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_spd_infoframe {int sdi; int product; int vendor; } ;
struct hdmi_any_infoframe {int dummy; } ;
struct device {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char const*,struct device*,struct hdmi_any_infoframe const*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0,
       struct device *VAR_1,
       const struct hdmi_spd_infoframe *VAR_2)
{
 u8 VAR_3[17];

 FUNC_0(VAR_0, VAR_1,
      (const struct hdmi_any_infoframe *)VAR_2);

 FUNC_3(VAR_3, 0, sizeof(VAR_3));

 FUNC_4(VAR_3, VAR_2->vendor, 8);
 FUNC_1("    vendor: %s\n", VAR_3);
 FUNC_4(VAR_3, VAR_2->product, 16);
 FUNC_1("    product: %s\n", VAR_3);
 FUNC_1("    source device information: %s (0x%x)\n",
  FUNC_2(VAR_2->sdi), VAR_2->sdi);
}
