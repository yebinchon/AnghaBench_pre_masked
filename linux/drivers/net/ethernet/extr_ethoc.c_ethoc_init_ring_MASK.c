
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethoc_bd {unsigned long addr; int stat; } ;
struct ethoc {int num_tx; int num_rx; void** vma; void* membase; scalar_t__ cur_rx; scalar_t__ dty_tx; scalar_t__ cur_tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ethoc*,int ,int) ;
 int FUNC_1 (struct ethoc*,int,struct ethoc_bd*) ;

__attribute__((used)) static int FUNC_2(struct ethoc *VAR_8, unsigned long VAR_9)
{
 struct ethoc_bd VAR_10;
 int VAR_11;
 void *VAR_12;

 VAR_8->cur_tx = 0;
 VAR_8->dty_tx = 0;
 VAR_8->cur_rx = 0;

 FUNC_0(VAR_8, VAR_6, VAR_8->num_tx);


 VAR_10.addr = VAR_9;
 VAR_10.stat = VAR_5 | VAR_4;
 VAR_12 = VAR_8->membase;

 for (VAR_11 = 0; VAR_11 < VAR_8->num_tx; VAR_11++) {
  if (VAR_11 == VAR_8->num_tx - 1)
   VAR_10.stat |= VAR_7;

  FUNC_1(VAR_8, VAR_11, &VAR_10);
  VAR_10.addr += VAR_0;

  VAR_8->vma[VAR_11] = VAR_12;
  VAR_12 += VAR_0;
 }

 VAR_10.stat = VAR_1 | VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_8->num_rx; VAR_11++) {
  if (VAR_11 == VAR_8->num_rx - 1)
   VAR_10.stat |= VAR_3;

  FUNC_1(VAR_8, VAR_8->num_tx + VAR_11, &VAR_10);
  VAR_10.addr += VAR_0;

  VAR_8->vma[VAR_8->num_tx + VAR_11] = VAR_12;
  VAR_12 += VAR_0;
 }

 return 0;
}
