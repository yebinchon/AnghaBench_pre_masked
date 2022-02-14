
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct firmware {int size; int data; } ;
struct TYPE_4__ {int nr; TYPE_1__* pci; } ;
struct bttv {TYPE_2__ c; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct bttv*,int ,int ) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct bttv *VAR_0)
{
 const struct firmware *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_4(&VAR_1, "hcwamc.rbf", &VAR_0->c.pci->dev);
 if (VAR_2 != 0) {
  FUNC_1("%d: no altera firmware [via hotplug]\n", VAR_0->c.nr);
  return VAR_2;
 }
 VAR_2 = FUNC_2(VAR_0, VAR_1->data, VAR_1->size);
 FUNC_0("%d: altera firmware upload %s\n",
  VAR_0->c.nr, (VAR_2 < 0) ? "failed" : "ok");
 FUNC_3(VAR_1);
 return VAR_2;
}
