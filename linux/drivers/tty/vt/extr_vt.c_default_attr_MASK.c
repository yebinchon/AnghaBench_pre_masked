
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_intensity; int vc_def_color; int vc_color; scalar_t__ vc_blink; scalar_t__ vc_reverse; scalar_t__ vc_underline; scalar_t__ vc_italic; } ;



__attribute__((used)) static void FUNC_0(struct vc_data *VAR_0)
{
 VAR_0->vc_intensity = 1;
 VAR_0->vc_italic = 0;
 VAR_0->vc_underline = 0;
 VAR_0->vc_reverse = 0;
 VAR_0->vc_blink = 0;
 VAR_0->vc_color = VAR_0->vc_def_color;
}
