
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct reset_controller_dev*,unsigned long) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_2,
        unsigned long VAR_3, bool VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_1;

 do {
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_5 == VAR_4)
   return 0;
  FUNC_1(20, 40);
 } while (--VAR_6);

 return -VAR_0;
}
