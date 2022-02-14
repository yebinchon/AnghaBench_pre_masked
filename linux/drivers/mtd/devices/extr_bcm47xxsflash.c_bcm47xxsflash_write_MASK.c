
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {struct bcm47xxsflash* priv; } ;
struct bcm47xxsflash {int type; } ;
typedef scalar_t__ loff_t ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct mtd_info*,scalar_t__,size_t,int const*) ;
 int FUNC_2 (struct mtd_info*,scalar_t__,size_t,int const*) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
          size_t *VAR_3, const u_char *VAR_4)
{
 struct bcm47xxsflash *VAR_5 = VAR_0->priv;
 int VAR_6;




 while (VAR_2 > 0) {
  switch (VAR_5->type) {
  case 128:
   VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);
   break;
  case 129:
   VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
   break;
  default:
   FUNC_0(1);
  }
  if (VAR_6 < 0) {
   FUNC_3("Error writing at offset 0x%llX\n", VAR_1);
   return VAR_6;
  }
  VAR_1 += (loff_t)VAR_6;
  VAR_2 -= VAR_6;
  *VAR_3 += VAR_6;
  VAR_4 += VAR_6;
 }

 return 0;
}
