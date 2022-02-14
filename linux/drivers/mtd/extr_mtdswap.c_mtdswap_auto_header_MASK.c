
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; scalar_t__ nr_badpages; scalar_t__ last_page; } ;
union swap_header {TYPE_1__ info; } ;
struct mtdswap_dev {TYPE_2__* mbd_dev; } ;
struct TYPE_4__ {scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mtdswap_dev *VAR_1, char *VAR_2)
{
 union swap_header *VAR_3 = (union swap_header *)(VAR_2);

 FUNC_1(VAR_2, 0, VAR_0 - 10);

 VAR_3->info.version = 1;
 VAR_3->info.last_page = VAR_1->mbd_dev->size - 1;
 VAR_3->info.nr_badpages = 0;

 FUNC_0(VAR_2 + VAR_0 - 10, "SWAPSPACE2", 10);

 return 0;
}
