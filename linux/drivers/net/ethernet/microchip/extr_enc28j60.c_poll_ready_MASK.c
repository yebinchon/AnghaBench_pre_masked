
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct enc28j60_net {TYPE_1__* spi; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,char*,int) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct enc28j60_net*) ;
 int FUNC_4 (struct enc28j60_net*,int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct enc28j60_net *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct device *VAR_6 = &VAR_2->spi->dev;
 unsigned long VAR_7 = VAR_1 + FUNC_2(20);


 while ((FUNC_4(VAR_2, VAR_3) & VAR_4) != VAR_5) {
  if (FUNC_5(VAR_1, VAR_7)) {
   if (FUNC_3(VAR_2))
    FUNC_1(VAR_6, "reg %02x ready timeout!\n", VAR_3);
   return -VAR_0;
  }
  FUNC_0();
 }
 return 0;
}
