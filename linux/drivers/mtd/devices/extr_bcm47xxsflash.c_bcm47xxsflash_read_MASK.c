
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {scalar_t__ size; struct bcm47xxsflash* priv; } ;
struct bcm47xxsflash {scalar_t__ window; int (* cc_read ) (struct bcm47xxsflash*,int ) ;int (* cc_write ) (struct bcm47xxsflash*,int ,int ) ;} ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm47xxsflash*,int ) ;
 int FUNC_1 (int *,scalar_t__,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct bcm47xxsflash*,int ,int ) ;
 int FUNC_4 (struct bcm47xxsflash*,int ) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_5, loff_t VAR_6, size_t VAR_7,
         size_t *VAR_8, u_char *VAR_9)
{
 struct bcm47xxsflash *VAR_10 = VAR_5->priv;
 size_t VAR_11 = VAR_7;


 if ((VAR_6 + VAR_7) > VAR_5->size)
  return -VAR_3;


 if (VAR_6 < VAR_0) {
  size_t VAR_12;

  VAR_12 = FUNC_2(VAR_7, (size_t)(VAR_0 - VAR_6));
  FUNC_1(VAR_9, VAR_10->window + VAR_6, VAR_12);
  VAR_6 += VAR_12;
  VAR_7 -= VAR_12;
  VAR_9 += VAR_12;
 }


 for (; VAR_7; VAR_7--) {
  VAR_10->cc_write(VAR_10, VAR_1, VAR_6++);
  FUNC_0(VAR_10, VAR_4);
  *VAR_9++ = VAR_10->cc_read(VAR_10, VAR_2);
 }

 *VAR_8 = VAR_11;

 return VAR_11;
}
