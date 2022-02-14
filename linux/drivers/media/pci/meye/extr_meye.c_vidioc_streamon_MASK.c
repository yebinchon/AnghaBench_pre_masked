
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int mchip_mode; int lock; } ;


 int VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, enum v4l2_buf_type VAR_4)
{
 FUNC_2(&VAR_1.lock);

 switch (VAR_1.mchip_mode) {
 case 128:
  FUNC_1();
  break;
 case 129:
  FUNC_0();
  break;
 default:
  FUNC_3(&VAR_1.lock);
  return -VAR_0;
 }

 FUNC_3(&VAR_1.lock);

 return 0;
}
