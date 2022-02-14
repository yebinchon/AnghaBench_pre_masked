
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem; int io; } ;
struct mt7621_pcie {int busn; TYPE_1__ offset; int mem; int io; struct device* dev; } ;
struct list_head {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct list_head*) ;
 int FUNC_1 (struct list_head*,int *) ;
 int FUNC_2 (struct list_head*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct mt7621_pcie *VAR_0,
      struct list_head *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;

 FUNC_2(VAR_1, &VAR_0->io, VAR_0->offset.io);
 FUNC_2(VAR_1, &VAR_0->mem, VAR_0->offset.mem);
 FUNC_1(VAR_1, &VAR_0->busn);

 return FUNC_0(VAR_2, VAR_1);
}
