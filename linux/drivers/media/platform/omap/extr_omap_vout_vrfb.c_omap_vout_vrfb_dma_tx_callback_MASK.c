
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vid_vrfb_dma {int tx_status; int wait; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct vid_vrfb_dma *VAR_1 = (struct vid_vrfb_dma *) VAR_0;

 VAR_1->tx_status = 1;
 FUNC_0(&VAR_1->wait);
}
