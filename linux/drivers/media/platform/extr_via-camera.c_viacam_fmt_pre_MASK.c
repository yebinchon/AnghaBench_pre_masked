
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ width; scalar_t__ height; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct v4l2_pix_format *VAR_4,
  struct v4l2_pix_format *VAR_5)
{
 *VAR_5 = *VAR_4;
 if (VAR_4->width < VAR_1 || VAR_4->height < VAR_0) {
  VAR_4->width = VAR_1;
  VAR_4->height = VAR_0;
 }
 if (VAR_4->width > VAR_3 || VAR_4->height > VAR_2) {
  VAR_4->width = VAR_3;
  VAR_4->height = VAR_2;
 }
 VAR_5->width = VAR_3;
 VAR_5->height = VAR_2;
}
