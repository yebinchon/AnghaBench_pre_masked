
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcu_msg_init_response {int dummy; } ;
struct allegro_dev {int init_complete; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct allegro_dev *VAR_0,
          struct mcu_msg_init_response *VAR_1)
{
 FUNC_0(&VAR_0->init_complete);

 return 0;
}
