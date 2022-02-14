
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int release; int * parent; } ;
struct TYPE_7__ {char const* name; TYPE_2__ dev; int id; } ;
struct cb710_slot {unsigned int iobase; TYPE_3__ pdev; } ;
struct cb710_chip {int slots; unsigned int iobase; unsigned int slot_mask; int slot_refs_count; TYPE_1__* pdev; int platform_id; struct cb710_slot* slot; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cb710_chip*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,char const*,int ,int,unsigned int,unsigned int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct cb710_chip *VAR_1,
 unsigned VAR_2, unsigned VAR_3, const char *VAR_4)
{
 int VAR_5 = VAR_1->slots;
 struct cb710_slot *VAR_6 = &VAR_1->slot[VAR_5];
 int VAR_7;

 FUNC_2(FUNC_1(VAR_1),
  "register: %s.%d; slot %d; mask %d; IO offset: 0x%02X\n",
  VAR_4, VAR_1->platform_id, VAR_5, VAR_2, VAR_3);



 ++VAR_1->slots;
 FUNC_5();

 VAR_6->iobase = VAR_1->iobase + VAR_3;
 VAR_6->pdev.name = VAR_4;
 VAR_6->pdev.id = VAR_1->platform_id;
 VAR_6->pdev.dev.parent = &VAR_1->pdev->dev;
 VAR_6->pdev.dev.release = VAR_0;

 VAR_7 = FUNC_4(&VAR_6->pdev);





 if (VAR_7) {


  FUNC_3(&VAR_6->pdev);


  --VAR_1->slots;
  return VAR_7;
 }

 VAR_1->slot_mask |= VAR_2;

 return 0;
}
