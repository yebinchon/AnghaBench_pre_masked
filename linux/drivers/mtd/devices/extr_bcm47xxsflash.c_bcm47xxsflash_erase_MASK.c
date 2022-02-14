
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct bcm47xxsflash* priv; } ;
struct erase_info {int addr; } ;
struct bcm47xxsflash {int type; int blocksize; int (* cc_write ) (struct bcm47xxsflash*,int ,int) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm47xxsflash*,int ) ;
 int FUNC_1 (struct bcm47xxsflash*,int ) ;
 int FUNC_2 (struct bcm47xxsflash*,int ,int) ;
 int FUNC_3 (struct bcm47xxsflash*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_6, struct erase_info *VAR_7)
{
 struct bcm47xxsflash *VAR_8 = VAR_6->priv;

 switch (VAR_8->type) {
 case 128:
  FUNC_0(VAR_8, VAR_5);
  VAR_8->cc_write(VAR_8, VAR_0, VAR_7->addr);




  if (VAR_8->blocksize < (64 * 1024))
   FUNC_0(VAR_8, VAR_4);
  else
   FUNC_0(VAR_8, VAR_3);
  break;
 case 129:
  VAR_8->cc_write(VAR_8, VAR_0, VAR_7->addr << 1);
  FUNC_0(VAR_8, VAR_2);
  break;
 }

 return FUNC_1(VAR_8, VAR_1);
}
