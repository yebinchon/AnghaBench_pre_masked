
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(enum v4l2_buf_type VAR_2)
{
 switch (VAR_2) {
 case 128:
  return VAR_1;
 case 129:
  return VAR_0;
 default:
  FUNC_0(1);
  return -1;
 }
}
