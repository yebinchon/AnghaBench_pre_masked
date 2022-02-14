
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int denominator; int numerator; } ;
struct TYPE_4__ {int top; int left; int height; int width; } ;
struct TYPE_6__ {int top; int left; int height; int width; } ;
struct v4l2_cropcap {TYPE_2__ pixelaspect; TYPE_1__ defrect; TYPE_3__ bounds; int type; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const void *VAR_1, bool VAR_2)
{
 const struct v4l2_cropcap *VAR_3 = VAR_1;

 FUNC_0("type=%s, bounds wxh=%dx%d, x,y=%d,%d, defrect wxh=%dx%d, x,y=%d,%d, pixelaspect %d/%d\n",
  FUNC_1(VAR_3->type, VAR_0),
  VAR_3->bounds.width, VAR_3->bounds.height,
  VAR_3->bounds.left, VAR_3->bounds.top,
  VAR_3->defrect.width, VAR_3->defrect.height,
  VAR_3->defrect.left, VAR_3->defrect.top,
  VAR_3->pixelaspect.numerator, VAR_3->pixelaspect.denominator);
}
