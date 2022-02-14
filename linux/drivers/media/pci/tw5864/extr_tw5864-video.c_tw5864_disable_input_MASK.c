
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw5864_input {scalar_t__ enabled; int nr; struct tw5864_dev* root; } ;
struct tw5864_dev {int slock; TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tw5864_input *VAR_0)
{
 struct tw5864_dev *VAR_1 = VAR_0->root;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->pci->dev, "Disabling channel %d\n", VAR_0->nr);

 FUNC_1(&VAR_1->slock, VAR_2);
 VAR_0->enabled = 0;
 FUNC_2(&VAR_1->slock, VAR_2);
 return 0;
}
