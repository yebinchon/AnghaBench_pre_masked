
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm47xxsflash {int type; int (* cc_read ) (struct bcm47xxsflash*,int ) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm47xxsflash*,int ) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct bcm47xxsflash*,int ) ;
 int FUNC_4 (struct bcm47xxsflash*,int ) ;
 int FUNC_5 (int,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct bcm47xxsflash *VAR_7, int VAR_8)
{
 unsigned long VAR_9 = VAR_6 + VAR_8;

 do {
  switch (VAR_7->type) {
  case 128:
   FUNC_0(VAR_7, VAR_3);
   if (!(VAR_7->cc_read(VAR_7, VAR_0) &
         VAR_5))
    return 0;
   break;
  case 129:
   FUNC_0(VAR_7, VAR_2);
   if (VAR_7->cc_read(VAR_7, VAR_0) &
       VAR_4)
    return 0;
   break;
  }

  FUNC_1();
  FUNC_6(1);
 } while (!FUNC_5(VAR_6, VAR_9));

 FUNC_2("Timeout waiting for flash to be ready!\n");

 return -VAR_1;
}
