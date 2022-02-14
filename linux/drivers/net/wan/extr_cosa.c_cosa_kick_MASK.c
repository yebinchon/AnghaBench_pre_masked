
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int lock; int dma; scalar_t__ rxtx; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cosa_data*) ;
 int FUNC_3 (struct cosa_data*,int ) ;
 int FUNC_4 (struct cosa_data*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,char*) ;
 int FUNC_7 (struct cosa_data*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ,scalar_t__*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct cosa_data *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 char *VAR_5 = "(probably) IRQ";

 if (FUNC_11(VAR_0, &VAR_2->rxtx))
  VAR_5 = "RX DMA";
 if (FUNC_11(VAR_1, &VAR_2->rxtx))
  VAR_5 = "TX DMA";

 FUNC_6("%s: %s timeout - restarting\n", VAR_2->name, VAR_5);
 FUNC_9(&VAR_2->lock, VAR_3);
 VAR_2->rxtx = 0;

 VAR_4 = FUNC_0();
 FUNC_5(VAR_2->dma);
 FUNC_1(VAR_2->dma);
 FUNC_8(VAR_4);


 FUNC_12(100);
 FUNC_4(VAR_2, 0);
 FUNC_12(100);
 (void) FUNC_2(VAR_2);
 FUNC_12(100);
 FUNC_3(VAR_2, 0);
 FUNC_12(100);
 FUNC_7(VAR_2);
 FUNC_10(&VAR_2->lock, VAR_3);
}
