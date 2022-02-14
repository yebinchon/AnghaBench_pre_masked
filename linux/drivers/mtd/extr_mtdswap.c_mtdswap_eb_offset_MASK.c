
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_eb {int dummy; } ;
struct mtdswap_dev {TYPE_1__* mtd; struct swap_eb* eb_data; } ;
typedef int loff_t ;
struct TYPE_2__ {int erasesize; } ;



__attribute__((used)) static loff_t FUNC_0(struct mtdswap_dev *VAR_0, struct swap_eb *VAR_1)
{
 return (loff_t)(VAR_1 - VAR_0->eb_data) * VAR_0->mtd->erasesize;
}
