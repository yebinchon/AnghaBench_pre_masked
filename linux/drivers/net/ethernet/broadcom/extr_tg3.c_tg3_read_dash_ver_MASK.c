
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tg3 {int * fw_ver; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,scalar_t__,char*,char*,int,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tg3*,int ) ;
 scalar_t__ FUNC_3 (struct tg3*,int ) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_11)
{
 int VAR_12;
 u32 VAR_13;
 char *VAR_14;

 VAR_13 = FUNC_2(VAR_11, VAR_9);

 if (FUNC_3(VAR_11, VAR_7))
  VAR_14 = "NCSI";
 else if (VAR_11->pdev->device == VAR_8)
  VAR_14 = "SMASH";
 else
  VAR_14 = "DASH";

 VAR_12 = FUNC_1(VAR_11->fw_ver);

 FUNC_0(&VAR_11->fw_ver[VAR_12], VAR_10 - VAR_12, " %s v%d.%d.%d.%d",
   VAR_14,
   (VAR_13 & VAR_1) >> VAR_2,
   (VAR_13 & VAR_3) >> VAR_4,
   (VAR_13 & VAR_5) >> VAR_6,
   (VAR_13 & VAR_0));
}
