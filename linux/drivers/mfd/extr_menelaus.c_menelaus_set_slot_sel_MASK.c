
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;

int FUNC_4(int VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_3->lock);
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  goto out;
 VAR_5 |= VAR_0;
 if (VAR_4)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 VAR_5 = FUNC_1(VAR_2, VAR_5);
out:
 FUNC_3(&VAR_3->lock);
 return VAR_5;
}
