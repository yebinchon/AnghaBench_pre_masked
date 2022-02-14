
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct ene_device* priv; } ;
struct ene_device {int learning_mode_enabled; int hw_lock; } ;


 int FUNC_0 (struct ene_device*) ;
 int FUNC_1 (struct ene_device*) ;
 int FUNC_2 (struct ene_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_0, int VAR_1)
{
 struct ene_device *VAR_2 = VAR_0->priv;
 unsigned long VAR_3;
 if (VAR_1 == VAR_2->learning_mode_enabled)
  return 0;

 FUNC_3(&VAR_2->hw_lock, VAR_3);
 VAR_2->learning_mode_enabled = VAR_1;
 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_2->hw_lock, VAR_3);
 return 0;
}
