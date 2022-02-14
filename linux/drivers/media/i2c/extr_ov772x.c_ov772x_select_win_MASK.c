
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct ov772x_win_size {TYPE_1__ rect; } ;


 unsigned int FUNC_0 (struct ov772x_win_size*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct ov772x_win_size* VAR_1 ;

__attribute__((used)) static const struct ov772x_win_size *FUNC_2(u32 VAR_2, u32 VAR_3)
{
 const struct ov772x_win_size *VAR_4 = &VAR_1[0];
 u32 VAR_5 = VAR_0;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); ++VAR_6) {
  u32 VAR_7 = FUNC_1(VAR_2 - VAR_1[VAR_6].rect.width)
    + FUNC_1(VAR_3 - VAR_1[VAR_6].rect.height);
  if (VAR_7 < VAR_5) {
   VAR_5 = VAR_7;
   VAR_4 = &VAR_1[VAR_6];
  }
 }

 return VAR_4;
}
