
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fst_card_info {int nports; size_t type; int irq; TYPE_2__* ports; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int name; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int * VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct fst_card_info *VAR_1)
{
 int VAR_2;
 int VAR_3;





 for (VAR_2 = 0; VAR_2 < VAR_1->nports; VAR_2++) {
  VAR_3 = FUNC_3(VAR_1->ports[VAR_2].dev);
  if (VAR_3 < 0) {
   FUNC_1("Cannot register HDLC device for port %d (errno %d)\n",
    VAR_2, -VAR_3);
   while (VAR_2--)
    FUNC_4(VAR_1->ports[VAR_2].dev);
   return VAR_3;
  }
 }

 FUNC_2("%s-%s: %s IRQ%d, %d ports\n",
  FUNC_0(&VAR_1->ports[0])->name,
  FUNC_0(&VAR_1->ports[VAR_1->nports - 1])->name,
  VAR_0[VAR_1->type], VAR_1->irq, VAR_1->nports);
 return 0;
}
