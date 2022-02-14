
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct mtd_info {struct bcm47xxsflash* priv; } ;
struct bcm47xxsflash {int blocksize; int (* cc_write ) (struct bcm47xxsflash*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm47xxsflash*,int ) ;
 int FUNC_1 (struct bcm47xxsflash*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct bcm47xxsflash*,int ,int) ;
 int FUNC_4 (struct bcm47xxsflash*,int ,int) ;
 int FUNC_5 (struct bcm47xxsflash*,int ,int) ;
 int FUNC_6 (struct bcm47xxsflash*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_6, u32 VAR_7, size_t VAR_8,
      const u_char *VAR_9)
{
 struct bcm47xxsflash *VAR_10 = VAR_6->priv;
 u32 VAR_11 = VAR_10->blocksize - 1;
 u32 VAR_12 = (VAR_7 & ~VAR_11) << 1;
 u32 VAR_13 = VAR_7 & VAR_11;
 int VAR_14 = 0;


 if (VAR_13 || (VAR_8 < VAR_10->blocksize)) {
  int VAR_15;

  VAR_10->cc_write(VAR_10, VAR_0, VAR_12);
  FUNC_0(VAR_10, VAR_3);

  VAR_15 = FUNC_1(VAR_10, VAR_2 / 1000);
  if (VAR_15) {
   FUNC_2("Timeout reading page 0x%X info buffer\n", VAR_12);
   return VAR_15;
  }
 }


 while (VAR_8 > 0) {

  if (VAR_13 == VAR_10->blocksize)
   break;

  VAR_10->cc_write(VAR_10, VAR_0, VAR_13++);
  VAR_10->cc_write(VAR_10, VAR_1, *VAR_9++);
  FUNC_0(VAR_10, VAR_5);
  VAR_8--;
  VAR_14++;
 }


 VAR_10->cc_write(VAR_10, VAR_0, VAR_12);
 FUNC_0(VAR_10, VAR_4);

 return VAR_14;
}
