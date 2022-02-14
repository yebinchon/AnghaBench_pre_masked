
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_wp_data {int base; } ;
struct hdmi_video_format {int x_res; int y_res; int packing_mode; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct hdmi_wp_data *VAR_2,
  struct hdmi_video_format *VAR_3)
{
 u32 VAR_4 = 0;

 FUNC_1(VAR_2->base, VAR_0, VAR_3->packing_mode,
  10, 8);

 VAR_4 |= FUNC_0(VAR_3->y_res, 31, 16);
 VAR_4 |= FUNC_0(VAR_3->x_res, 15, 0);
 FUNC_2(VAR_2->base, VAR_1, VAR_4);
}
