
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uea_softc {int task; int pageno; } ;
struct intr_pkt {int e4_bSwapPageNo; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct uea_softc *VAR_0,
      struct intr_pkt *VAR_1)
{
 VAR_0->pageno = VAR_1->e4_bSwapPageNo;
 FUNC_0(&VAR_0->task);
}
