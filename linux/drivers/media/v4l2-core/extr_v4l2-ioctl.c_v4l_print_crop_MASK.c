
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int top; int left; int height; int width; } ;
struct v4l2_crop {TYPE_1__ c; int type; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const void *VAR_1, bool VAR_2)
{
 const struct v4l2_crop *VAR_3 = VAR_1;

 FUNC_0("type=%s, wxh=%dx%d, x,y=%d,%d\n",
  FUNC_1(VAR_3->type, VAR_0),
  VAR_3->c.width, VAR_3->c.height,
  VAR_3->c.left, VAR_3->c.top);
}
