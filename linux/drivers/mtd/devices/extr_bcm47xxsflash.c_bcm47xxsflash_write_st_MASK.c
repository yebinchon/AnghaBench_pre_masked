
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
struct mtd_info {struct bcm47xxsflash* priv; } ;
struct bcm47xxsflash {int (* cc_write ) (struct bcm47xxsflash*,int ,int) ;TYPE_3__* bcma_cc; } ;
struct TYPE_6__ {TYPE_2__* core; } ;
struct TYPE_4__ {int rev; } ;
struct TYPE_5__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcm47xxsflash*,int) ;
 scalar_t__ FUNC_1 (struct bcm47xxsflash*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct bcm47xxsflash*,int ,int) ;
 int FUNC_4 (struct bcm47xxsflash*,int ,int) ;
 int FUNC_5 (struct bcm47xxsflash*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_7, u32 VAR_8, size_t VAR_9,
      const u_char *VAR_10)
{
 struct bcm47xxsflash *VAR_11 = VAR_7->priv;
 int VAR_12 = 0;


 FUNC_0(VAR_11, VAR_6);


 VAR_11->cc_write(VAR_11, VAR_0, VAR_8);
 VAR_11->cc_write(VAR_11, VAR_2, *VAR_10++);


 if (VAR_11->bcma_cc->core->id.rev < 20) {
  FUNC_0(VAR_11, VAR_5);
  return 1;
 }


 FUNC_0(VAR_11, VAR_4 | VAR_5);
 VAR_8++;
 VAR_9--;
 VAR_12++;

 while (VAR_9 > 0) {

  if ((VAR_8 & 0xFF) == 0)
   break;

  FUNC_0(VAR_11, VAR_4 | *VAR_10++);
  VAR_8++;
  VAR_9--;
  VAR_12++;
 }


 VAR_11->cc_write(VAR_11, VAR_1, 0);
 FUNC_6(1);
 if (FUNC_1(VAR_11, VAR_3 / 10))
  FUNC_2("Flash rejected dropping CSA\n");

 return VAR_12;
}
