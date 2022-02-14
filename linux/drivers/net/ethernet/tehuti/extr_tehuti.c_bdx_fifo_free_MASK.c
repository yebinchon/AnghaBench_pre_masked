
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifo {int * va; int da; scalar_t__ memsz; } ;
struct bdx_priv {int pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct bdx_priv *VAR_2, struct fifo *VAR_3)
{
 VAR_0;
 if (VAR_3->va) {
  FUNC_1(VAR_2->pdev,
        VAR_3->memsz + VAR_1, VAR_3->va, VAR_3->da);
  VAR_3->va = ((void*)0);
 }
 FUNC_0();
}
