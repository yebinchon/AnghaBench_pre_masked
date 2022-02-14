
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_test_card {TYPE_1__* card; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_0)
{
 FUNC_1("%s: Highmem not configured - test skipped\n",
        FUNC_0(VAR_0->card->host));
 return 0;
}
