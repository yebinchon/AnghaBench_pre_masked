
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm2835_host {int hcfg; scalar_t__ blocks; scalar_t__ ioaddr; TYPE_1__* data; } ;
struct TYPE_2__ {int flags; scalar_t__ error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm2835_host*,int ) ;
 int FUNC_1 (struct bcm2835_host*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bcm2835_host *VAR_4, u32 VAR_5)
{






 if (!VAR_4->data)
  return;

 FUNC_0(VAR_4, VAR_5);
 if (VAR_4->data->error)
  goto finished;

 if (VAR_4->data->flags & VAR_0) {

  VAR_4->hcfg &= ~(VAR_3);
  VAR_4->hcfg |= VAR_2;
  FUNC_2(VAR_4->hcfg, VAR_4->ioaddr + VAR_1);
  FUNC_1(VAR_4);
 } else {
  FUNC_1(VAR_4);
  VAR_4->blocks--;
  if ((VAR_4->blocks == 0) || VAR_4->data->error)
   goto finished;
 }
 return;

finished:
 VAR_4->hcfg &= ~(VAR_3 | VAR_2);
 FUNC_2(VAR_4->hcfg, VAR_4->ioaddr + VAR_1);
}
