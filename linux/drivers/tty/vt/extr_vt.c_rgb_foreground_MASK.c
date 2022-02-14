
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vc_data {int vc_intensity; int vc_color; } ;
struct rgb {int r; int g; int b; } ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, const struct rgb *VAR_1)
{
 u8 VAR_2 = 0, VAR_3 = FUNC_0(VAR_1->r, VAR_1->g, VAR_1->b);

 if (VAR_1->r > VAR_3 / 2)
  VAR_2 |= 4;
 if (VAR_1->g > VAR_3 / 2)
  VAR_2 |= 2;
 if (VAR_1->b > VAR_3 / 2)
  VAR_2 |= 1;

 if (VAR_2 == 7 && VAR_3 <= 0x55) {
  VAR_2 = 0;
  VAR_0->vc_intensity = 2;
 } else if (VAR_3 > 0xaa)
  VAR_0->vc_intensity = 2;
 else
  VAR_0->vc_intensity = 1;

 VAR_0->vc_color = (VAR_0->vc_color & 0xf0) | VAR_2;
}
