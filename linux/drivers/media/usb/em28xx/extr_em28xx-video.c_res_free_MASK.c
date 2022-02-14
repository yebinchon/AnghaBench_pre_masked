
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int resources; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct em28xx *VAR_0, enum v4l2_buf_type VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 VAR_0->resources &= ~VAR_2;
 FUNC_0("res: put %d\n", VAR_2);
}
