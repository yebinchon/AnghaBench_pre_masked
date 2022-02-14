
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int left; int top; int width; int height; } ;
struct v4l2_mbus_framefmt {int width; unsigned int height; int code; } ;
struct isp_format_info {scalar_t__ flavor; } ;
struct isp_ccdc_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,unsigned int,unsigned int) ;
 struct isp_format_info* FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct isp_ccdc_device *VAR_4,
     const struct v4l2_mbus_framefmt *VAR_5,
     struct v4l2_rect *VAR_6)
{
 const struct isp_format_info *VAR_7;
 unsigned int VAR_8;




 VAR_7 = FUNC_1(VAR_5->code);
 if (VAR_7->flavor != VAR_2) {
  VAR_6->left &= ~1;
  VAR_6->top &= ~1;
 }

 VAR_6->left = FUNC_0(VAR_3, VAR_6->left, 0, VAR_5->width - VAR_1);
 VAR_6->top = FUNC_0(VAR_3, VAR_6->top, 0, VAR_5->height - VAR_0);






 VAR_8 = (VAR_5->width - VAR_6->left + 15) & ~15;
 VAR_6->width = FUNC_0(VAR_3, VAR_6->width, VAR_1, VAR_8)
      & ~15;
 VAR_6->height = FUNC_0(VAR_3, VAR_6->height, VAR_0,
          VAR_5->height - VAR_6->top);


 if (VAR_7->flavor != VAR_2) {
  VAR_6->width &= ~1;
  VAR_6->height &= ~1;
 }
}
