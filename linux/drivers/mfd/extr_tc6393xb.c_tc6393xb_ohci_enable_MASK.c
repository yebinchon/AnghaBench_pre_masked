
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tc6393xb {int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct tc6393xb* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct tc6393xb *VAR_5 = FUNC_0(VAR_4->dev.parent);
 unsigned long VAR_6;
 u16 VAR_7;
 u8 VAR_8;

 FUNC_1(&VAR_5->lock, VAR_6);

 VAR_7 = FUNC_3(VAR_5->scr + VAR_0);
 VAR_7 |= VAR_1;
 FUNC_5(VAR_7, VAR_5->scr + VAR_0);

 VAR_8 = FUNC_4(VAR_5->scr + VAR_2);
 VAR_8 |= VAR_3;
 FUNC_6(VAR_8, VAR_5->scr + VAR_2);

 FUNC_2(&VAR_5->lock, VAR_6);

 return 0;
}
