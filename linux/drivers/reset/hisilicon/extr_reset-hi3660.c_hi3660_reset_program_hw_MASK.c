
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct hi3660_reset_controller {int map; } ;


 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 struct hi3660_reset_controller* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_0,
       unsigned long VAR_1, bool VAR_2)
{
 struct hi3660_reset_controller *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = VAR_1 >> 8;
 unsigned int VAR_5 = FUNC_0(VAR_1 & 0x1f);

 if (VAR_2)
  return FUNC_1(VAR_3->map, VAR_4, VAR_5);
 else
  return FUNC_1(VAR_3->map, VAR_4 + 4, VAR_5);
}
