
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc3589x {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tc3589x*,int) ;
 int FUNC_3 (struct tc3589x*,int,int) ;

int FUNC_4(struct tc3589x *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->lock);

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 < 0)
  goto out;

 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_4);

out:
 FUNC_1(&VAR_0->lock);
 return VAR_4;
}
