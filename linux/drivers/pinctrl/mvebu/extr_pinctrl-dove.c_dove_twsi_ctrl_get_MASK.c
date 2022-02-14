
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mpp_ctrl_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct mvebu_mpp_ctrl_data *VAR_6, unsigned VAR_7,
         unsigned long *VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;

 FUNC_0(VAR_5, VAR_0, &VAR_9);
 FUNC_0(VAR_5, VAR_1, &VAR_10);

 *VAR_8 = 0;
 if (VAR_9 & VAR_2)
  *VAR_8 = 1;
 else if (VAR_10 & VAR_3)
  *VAR_8 = 2;
 else if (VAR_10 & VAR_4)
  *VAR_8 = 3;

 return 0;
}
