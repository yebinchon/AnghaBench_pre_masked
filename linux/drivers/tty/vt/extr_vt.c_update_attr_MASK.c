
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_attr; int vc_intensity; int vc_reverse; int vc_decscnm; int vc_video_erase_char; int vc_blink; int vc_color; int vc_italic; int vc_underline; } ;


 int FUNC_0 (struct vc_data*,int ,int,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0)
{
 VAR_0->vc_attr = FUNC_0(VAR_0, VAR_0->vc_color, VAR_0->vc_intensity,
               VAR_0->vc_blink, VAR_0->vc_underline,
               VAR_0->vc_reverse ^ VAR_0->vc_decscnm, VAR_0->vc_italic);
 VAR_0->vc_video_erase_char = (FUNC_0(VAR_0, VAR_0->vc_color, 1, VAR_0->vc_blink, 0, VAR_0->vc_decscnm, 0) << 8) | ' ';
}
