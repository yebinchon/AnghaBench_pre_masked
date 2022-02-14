
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int dummy; } ;
struct ov7251_mode_info {scalar_t__ width; scalar_t__ height; struct v4l2_fract timeperframe; } ;
struct ov7251 {struct ov7251_mode_info* current_mode; } ;


 unsigned int FUNC_0 (struct ov7251_mode_info const*) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct v4l2_fract*) ;
 struct ov7251_mode_info const* VAR_0 ;

__attribute__((used)) static const struct ov7251_mode_info *
FUNC_3(struct ov7251 *VAR_1, struct v4l2_fract *VAR_2)
{
 const struct ov7251_mode_info *VAR_3 = VAR_1->current_mode;
 unsigned int VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5 = (unsigned int) -1;
 unsigned int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  unsigned int VAR_8;
  unsigned int VAR_9;

  if (VAR_3->width != VAR_0[VAR_6].width ||
      VAR_3->height != VAR_0[VAR_6].height)
   continue;

  VAR_9 = FUNC_2(&VAR_0[VAR_6].timeperframe);

  VAR_8 = FUNC_1(VAR_4 - VAR_9);

  if (VAR_8 < VAR_5) {
   VAR_7 = VAR_6;
   VAR_5 = VAR_8;
  }
 }

 return &VAR_0[VAR_7];
}
