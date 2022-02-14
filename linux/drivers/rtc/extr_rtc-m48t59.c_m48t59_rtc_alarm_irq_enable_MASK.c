
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m48t59_private {int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 struct m48t59_private* FUNC_1 (struct device*) ;
 struct m48t59_plat_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, unsigned int VAR_3)
{
 struct m48t59_plat_data *VAR_4 = FUNC_2(VAR_2);
 struct m48t59_private *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6;

 FUNC_3(&VAR_5->lock, VAR_6);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_0);
 else
  FUNC_0(0x00, VAR_0);
 FUNC_4(&VAR_5->lock, VAR_6);

 return 0;
}
