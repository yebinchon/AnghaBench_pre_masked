
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ov2640_win_size {scalar_t__ width; scalar_t__ height; } ;


 int FUNC_0 (struct ov2640_win_size const*) ;
 struct ov2640_win_size const* VAR_0 ;

__attribute__((used)) static const struct ov2640_win_size *FUNC_1(u32 VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4 = FUNC_0(VAR_0) - 1;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].width >= VAR_1 &&
      VAR_0[VAR_3].height >= VAR_2)
   return &VAR_0[VAR_3];
 }

 return &VAR_0[VAR_4];
}
