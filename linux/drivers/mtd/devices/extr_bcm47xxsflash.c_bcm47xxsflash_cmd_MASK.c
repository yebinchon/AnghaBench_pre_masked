
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm47xxsflash {int (* cc_read ) (struct bcm47xxsflash*,int ) ;int (* cc_write ) (struct bcm47xxsflash*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct bcm47xxsflash*,int ,int) ;
 int FUNC_3 (struct bcm47xxsflash*,int ) ;

__attribute__((used)) static void FUNC_4(struct bcm47xxsflash *VAR_3, u32 VAR_4)
{
 int VAR_5;

 VAR_3->cc_write(VAR_3, VAR_0, VAR_2 | VAR_4);
 for (VAR_5 = 0; VAR_5 < 1000; VAR_5++) {
  if (!(VAR_3->cc_read(VAR_3, VAR_0) &
        VAR_1))
   return;
  FUNC_0();
 }
 FUNC_1("Control command failed (timeout)!\n");
}
