
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dma; int base_addr; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_2)
{


 int VAR_3 = VAR_2->dma;
 int VAR_4 = VAR_2->base_addr;
 unsigned long VAR_5;

 VAR_5=FUNC_0();
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 FUNC_10(VAR_3,VAR_0);
 FUNC_8(VAR_3,FUNC_11(VAR_1));
 FUNC_9(VAR_3,800);
 FUNC_3(VAR_3);
 FUNC_7(VAR_5);

 FUNC_5(VAR_4+3);
 FUNC_5(VAR_4+2);

 if ( FUNC_12(VAR_2,0xfb) ) {
  VAR_5=FUNC_0();
  FUNC_6("timed out in handlewrite, dma res %d\n",
   FUNC_4(VAR_2->dma) );
  FUNC_7(VAR_5);
 }
}
