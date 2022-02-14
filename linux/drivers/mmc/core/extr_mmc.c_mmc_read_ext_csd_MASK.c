
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int capacity; } ;
struct mmc_card {int host; TYPE_1__ csd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_card*,int *) ;
 int FUNC_3 (struct mmc_card*,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct mmc_card *VAR_3)
{
 u8 *VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_5 = FUNC_3(VAR_3, &VAR_4);
 if (VAR_5) {


  if ((VAR_5 != -VAR_1)
   && (VAR_5 != -VAR_2)
   && (VAR_5 != -VAR_0))
   return VAR_5;





  if (VAR_3->csd.capacity == (4096 * 512)) {
   FUNC_5("%s: unable to read EXT_CSD on a possible high capacity card. Card will be ignored.\n",
    FUNC_4(VAR_3->host));
  } else {
   FUNC_6("%s: unable to read EXT_CSD, performance might suffer\n",
    FUNC_4(VAR_3->host));
   VAR_5 = 0;
  }

  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 FUNC_0(VAR_4);
 return VAR_5;
}
