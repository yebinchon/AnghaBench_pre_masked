
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {scalar_t__ state; int fps; int height; int width; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct venus_inst *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2 || !(VAR_2->state >= VAR_0 && VAR_2->state < VAR_1))
  return 0;

 VAR_3 = (FUNC_0(VAR_2->width, 16) / 16) * (FUNC_0(VAR_2->height, 16) / 16);

 return VAR_3 * VAR_2->fps;
}
