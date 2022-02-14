
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_rect {int left; int top; int width; int height; } ;
struct v4l2_mbus_framefmt {int width; int height; } ;
struct camif_dev {TYPE_1__* variant; struct v4l2_rect camif_crop; struct v4l2_mbus_framefmt mbus_fmt; } ;
struct TYPE_2__ {scalar_t__ ip_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct camif_dev*,int ) ;
 int FUNC_1 (struct camif_dev*,int ,int) ;

void FUNC_2(struct camif_dev *VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6 = &VAR_5->mbus_fmt;
 struct v4l2_rect *VAR_7 = &VAR_5->camif_crop;
 u32 VAR_8, VAR_9;
 u32 VAR_10;


 VAR_10 = FUNC_0(VAR_5, VAR_3);
 VAR_10 &= ~(VAR_0 | VAR_1);
 VAR_10 |= (VAR_7->left << 16) | VAR_7->top;
 if (VAR_7->left != 0 || VAR_7->top != 0)
  VAR_10 |= VAR_1;
 FUNC_1(VAR_5, VAR_3, VAR_10);

 if (VAR_5->variant->ip_revision == VAR_2) {
  VAR_8 = VAR_6->width - VAR_7->width - VAR_7->left;
  VAR_9 = VAR_6->height - VAR_7->height - VAR_7->top;
  VAR_10 = (VAR_8 << 16) | VAR_9;
  FUNC_1(VAR_5, VAR_4, VAR_10);
 }
}
