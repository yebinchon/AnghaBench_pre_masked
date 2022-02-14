
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ramaddr; } ;
struct TYPE_4__ {int features; } ;
struct sym_device {TYPE_3__* pdev; TYPE_2__ s; TYPE_1__ chip; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sym_device *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (!VAR_2->s.ramaddr)
  return 0;

 if (VAR_2->chip.features & VAR_1)
  VAR_3 = 8192;
 else
  VAR_3 = 4096;

 VAR_4 = FUNC_1(VAR_2->s.ramaddr + VAR_3 - 16);
 if (VAR_4 != 0x52414944)
  return 0;

 FUNC_0(&VAR_2->pdev->dev,
   "not initializing, driven by RAID controller.\n");
 return -VAR_0;
}
