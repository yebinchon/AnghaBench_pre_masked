
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_color; } ;
struct rgb {int r; int g; int b; } ;



__attribute__((used)) static void FUNC_0(struct vc_data *VAR_0, const struct rgb *VAR_1)
{

 VAR_0->vc_color = (VAR_0->vc_color & 0x0f)
  | (VAR_1->r&0x80) >> 1 | (VAR_1->g&0x80) >> 2 | (VAR_1->b&0x80) >> 3;
}
