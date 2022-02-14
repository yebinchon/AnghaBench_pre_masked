
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_frame {int dummy; } ;
struct gsc_ctx {struct gsc_frame d_frame; struct gsc_frame s_frame; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 struct gsc_frame* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static inline struct gsc_frame *FUNC_2(struct gsc_ctx *VAR_3,
           enum v4l2_buf_type VAR_4)
{
 struct gsc_frame *VAR_5;

 if (VAR_2 == VAR_4) {
  VAR_5 = &VAR_3->s_frame;
 } else if (VAR_1 == VAR_4) {
  VAR_5 = &VAR_3->d_frame;
 } else {
  FUNC_1("Wrong buffer/video queue type (%d)", VAR_4);
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
