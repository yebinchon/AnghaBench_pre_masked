
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma; void** cpu; } ;
struct TYPE_3__ {int nr; int pci; } ;
struct bttv {TYPE_2__ main; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,unsigned long long) ;

int
FUNC_3(struct bttv *VAR_6)
{
 int VAR_7;

 if ((VAR_7 = FUNC_0(VAR_6->c.pci,&VAR_6->main,VAR_5)) < 0)
  return VAR_7;
 FUNC_2("%d: risc main @ %08llx\n",
  VAR_6->c.nr, (unsigned long long)VAR_6->main.dma);

 VAR_6->main.cpu[0] = FUNC_1(VAR_4 | VAR_3 |
           VAR_0);
 VAR_6->main.cpu[1] = FUNC_1(0);
 VAR_6->main.cpu[2] = FUNC_1(VAR_2);
 VAR_6->main.cpu[3] = FUNC_1(VAR_6->main.dma + (4<<2));


 VAR_6->main.cpu[4] = FUNC_1(VAR_2);
 VAR_6->main.cpu[5] = FUNC_1(VAR_6->main.dma + (6<<2));
 VAR_6->main.cpu[6] = FUNC_1(VAR_2);
 VAR_6->main.cpu[7] = FUNC_1(VAR_6->main.dma + (8<<2));

 VAR_6->main.cpu[8] = FUNC_1(VAR_4 | VAR_3 |
           VAR_1);
 VAR_6->main.cpu[9] = FUNC_1(0);


 VAR_6->main.cpu[10] = FUNC_1(VAR_2);
 VAR_6->main.cpu[11] = FUNC_1(VAR_6->main.dma + (12<<2));
 VAR_6->main.cpu[12] = FUNC_1(VAR_2);
 VAR_6->main.cpu[13] = FUNC_1(VAR_6->main.dma + (14<<2));


 VAR_6->main.cpu[14] = FUNC_1(VAR_2);
 VAR_6->main.cpu[15] = FUNC_1(VAR_6->main.dma + (0<<2));

 return 0;
}
