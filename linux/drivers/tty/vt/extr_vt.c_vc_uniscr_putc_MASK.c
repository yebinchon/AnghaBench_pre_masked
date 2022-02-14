
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_y; size_t vc_x; } ;
struct uni_screen {int ** lines; } ;
typedef int char32_t ;


 struct uni_screen* FUNC_0 (struct vc_data*) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, char32_t VAR_1)
{
 struct uni_screen *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_2->lines[VAR_0->vc_y][VAR_0->vc_x] = VAR_1;
}
