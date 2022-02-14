
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tc6393xb {int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct tc6393xb* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct platform_device *VAR_2, bool VAR_3)
{
 struct tc6393xb *VAR_4 = FUNC_0(VAR_2->dev.parent);
 u8 VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->lock, VAR_6);

 VAR_5 = FUNC_1(VAR_4->scr + VAR_0);
 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 FUNC_2(VAR_5, VAR_4->scr + VAR_0);

 FUNC_4(&VAR_4->lock, VAR_6);

 return 0;
}
