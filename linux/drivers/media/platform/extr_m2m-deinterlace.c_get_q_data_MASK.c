
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deinterlace_q_data {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 () ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct deinterlace_q_data* VAR_2 ;

__attribute__((used)) static struct deinterlace_q_data *FUNC_1(enum v4l2_buf_type VAR_3)
{
 switch (VAR_3) {
 case 128:
  return &VAR_2[VAR_1];
 case 129:
  return &VAR_2[VAR_0];
 default:
  FUNC_0();
 }
 return ((void*)0);
}
