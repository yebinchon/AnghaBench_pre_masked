
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_y; } ;
struct uni_screen {int ** lines; } ;
typedef int char32_t ;


 struct uni_screen* FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int *,char,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 struct uni_screen *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3) {
  char32_t *VAR_4 = VAR_3->lines[VAR_0->vc_y];

  FUNC_1(&VAR_4[VAR_1], ' ', VAR_2);
 }
}
