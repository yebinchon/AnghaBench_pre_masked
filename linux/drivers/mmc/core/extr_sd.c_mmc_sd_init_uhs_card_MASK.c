
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int cmdclass; } ;
struct mmc_card {TYPE_3__* host; TYPE_1__ csd; } ;
struct TYPE_7__ {scalar_t__ timing; } ;
struct TYPE_8__ {TYPE_2__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct mmc_card*,int ) ;
 int FUNC_3 (struct mmc_card*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct mmc_card*,int *) ;
 int FUNC_9 (struct mmc_card*,int *) ;
 int FUNC_10 (struct mmc_card*,int *) ;
 int FUNC_11 (struct mmc_card*) ;

__attribute__((used)) static int FUNC_12(struct mmc_card *VAR_7)
{
 int VAR_8;
 u8 *VAR_9;

 if (!(VAR_7->csd.cmdclass & VAR_0))
  return 0;

 VAR_9 = FUNC_1(64, VAR_2);
 if (!VAR_9)
  return -VAR_1;


 VAR_8 = FUNC_2(VAR_7, VAR_3);
 if (VAR_8)
  goto out;

 FUNC_6(VAR_7->host, VAR_3);





 FUNC_11(VAR_7);


 VAR_8 = FUNC_8(VAR_7, VAR_9);
 if (VAR_8)
  goto out;


 VAR_8 = FUNC_10(VAR_7, VAR_9);
 if (VAR_8)
  goto out;


 VAR_8 = FUNC_9(VAR_7, VAR_9);
 if (VAR_8)
  goto out;





 if (!FUNC_4(VAR_7->host) &&
  (VAR_7->host->ios.timing == VAR_6 ||
   VAR_7->host->ios.timing == VAR_4 ||
   VAR_7->host->ios.timing == VAR_5)) {
  VAR_8 = FUNC_3(VAR_7);
  if (VAR_8 && VAR_7->host->ios.timing == VAR_4) {
   FUNC_7("%s: ddr50 tuning failed\n",
    FUNC_5(VAR_7->host));
   VAR_8 = 0;
  }
 }

out:
 FUNC_0(VAR_9);

 return VAR_8;
}
