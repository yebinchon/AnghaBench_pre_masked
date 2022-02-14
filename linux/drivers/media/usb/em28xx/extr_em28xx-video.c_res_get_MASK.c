
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int resources; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_1, enum v4l2_buf_type VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);


 if (VAR_1->resources & VAR_3) {

  return -VAR_0;
 }


 VAR_1->resources |= VAR_3;
 FUNC_0("res: get %d\n", VAR_3);
 return 0;
}
