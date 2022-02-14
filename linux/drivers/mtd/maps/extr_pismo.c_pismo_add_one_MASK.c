
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pismo_mem {int type; scalar_t__ width; int size; int access; int base; } ;
struct pismo_data {TYPE_1__* client; } ;
struct pismo_cs_block {int type; int device; int width; int size; int access; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int,int ) ;
 int FUNC_1 (struct device*,char*,int,int ,int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pismo_data*,int,struct pismo_mem*) ;
 int FUNC_5 (struct pismo_data*,int,struct pismo_mem*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct pismo_data *VAR_0, int VAR_1,
     const struct pismo_cs_block *VAR_2, phys_addr_t VAR_3)
{
 struct device *VAR_4 = &VAR_0->client->dev;
 struct pismo_mem VAR_5;

 VAR_5.base = VAR_3;
 VAR_5.type = VAR_2->type;
 VAR_5.width = FUNC_6(VAR_2->width);
 VAR_5.access = FUNC_2(VAR_2->access);
 VAR_5.size = FUNC_3(VAR_2->size);

 if (VAR_5.width == 0) {
  FUNC_0(VAR_4, "cs%u: bad width: %02x, ignoring\n", VAR_1, VAR_2->width);
  return;
 }







 FUNC_1(VAR_4, "cs%u: %.32s: type %02x access %u00ps size %uK\n",
  VAR_1, VAR_2->device, VAR_5.type, VAR_5.access, VAR_5.size / 1024);

 switch (VAR_5.type) {
 case 0:
  break;
 case 1:

  break;
 case 2:

  FUNC_4(VAR_0, VAR_1, &VAR_5);
  break;
 case 3:

  FUNC_5(VAR_0, VAR_1, &VAR_5);
  break;
 }
}
