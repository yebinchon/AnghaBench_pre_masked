
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_y; unsigned int vc_x; unsigned int vc_cols; } ;
struct uni_screen {int ** lines; } ;
typedef int char32_t ;


 struct uni_screen* FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (int *,char,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_0, unsigned int VAR_1)
{
 struct uni_screen *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2) {
  char32_t *VAR_3 = VAR_2->lines[VAR_0->vc_y];
  unsigned int VAR_4 = VAR_0->vc_x, VAR_5 = VAR_0->vc_cols;

  FUNC_1(&VAR_3[VAR_4], &VAR_3[VAR_4 + VAR_1], (VAR_5 - VAR_4 - VAR_1) * sizeof(*VAR_3));
  FUNC_2(&VAR_3[VAR_5 - VAR_1], ' ', VAR_1);
 }
}
