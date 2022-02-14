
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_rect {int height; int width; int left; int top; } ;
struct TYPE_8__ {int height; int width; int left; int top; } ;
struct TYPE_9__ {TYPE_3__ win; } ;
struct TYPE_6__ {int height; int width; int left; int top; } ;
struct TYPE_7__ {TYPE_1__ win; } ;
struct TYPE_10__ {scalar_t__ if_type; TYPE_4__ ycbcr; TYPE_2__ bayer; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct v4l2_rect *VAR_2)
{
 if (VAR_1.if_type == VAR_0) {
  VAR_1.bayer.win.top = VAR_2->top;
  VAR_1.bayer.win.left = VAR_2->left;
  VAR_1.bayer.win.width = VAR_2->width;
  VAR_1.bayer.win.height = VAR_2->height;
 } else {
  VAR_1.ycbcr.win.top = VAR_2->top;
  VAR_1.ycbcr.win.left = VAR_2->left;
  VAR_1.ycbcr.win.width = VAR_2->width;
  VAR_1.ycbcr.win.height = VAR_2->height;
 }
 return 0;
}
