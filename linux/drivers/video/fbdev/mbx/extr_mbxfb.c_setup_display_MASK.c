
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_8)
{
 unsigned long VAR_9 = 0;

 VAR_9 = VAR_2;
 if (VAR_8->var.sync & VAR_6)
  VAR_9 |= VAR_3;
 if (VAR_8->var.sync & VAR_7)
  VAR_9 |= VAR_5;
 FUNC_1(VAR_9, VAR_1);
 FUNC_1(0xd0303010, VAR_0);
 FUNC_1((FUNC_0(VAR_1) | VAR_4), VAR_1);
}
