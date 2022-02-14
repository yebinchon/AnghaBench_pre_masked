
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sda_spec3; } ;
struct mmc_card {TYPE_3__* host; TYPE_1__ scr; } ;
struct TYPE_5__ {scalar_t__ timing; } ;
struct TYPE_6__ {TYPE_2__ ios; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (struct mmc_card*) ;
 int FUNC_4 (struct mmc_card*) ;

__attribute__((used)) static int FUNC_5(struct mmc_card *VAR_2)
{
 int VAR_3;

 if (!VAR_2->scr.sda_spec3)
  return 0;


 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto out;


 FUNC_3(VAR_2);


 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  goto out;





 if (!FUNC_1(VAR_2->host) &&
     ((VAR_2->host->ios.timing == VAR_1) ||
       (VAR_2->host->ios.timing == VAR_0)))
  VAR_3 = FUNC_0(VAR_2);
out:
 return VAR_3;
}
