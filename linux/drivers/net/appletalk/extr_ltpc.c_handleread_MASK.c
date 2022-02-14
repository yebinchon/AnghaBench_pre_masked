
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
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_2)
{


 int VAR_3 = VAR_2->dma;
 int VAR_4 = VAR_2->base_addr;
 unsigned long VAR_5;


 VAR_5=FUNC_0();
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 FUNC_9(VAR_3,VAR_0);
 FUNC_7(VAR_3,FUNC_10(VAR_1));
 FUNC_8(VAR_3,800);
 FUNC_3(VAR_3);
 FUNC_6(VAR_5);

 FUNC_4(VAR_4+3);
 FUNC_4(VAR_4+2);
 if ( FUNC_11(VAR_2,0xfb) ) FUNC_5("timed out in handleread\n");
}
