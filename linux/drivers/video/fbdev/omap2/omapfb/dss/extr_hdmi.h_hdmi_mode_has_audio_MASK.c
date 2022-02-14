
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_config {scalar_t__ hdmi_dvi_mode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct hdmi_config *VAR_1)
{
 return VAR_1->hdmi_dvi_mode == VAR_0 ? 1 : 0;
}
