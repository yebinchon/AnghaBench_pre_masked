
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sram_reserve {int size; } ;
struct TYPE_4__ {int mode; int name; } ;
struct TYPE_5__ {int size; int write; int read; TYPE_1__ attr; } ;
struct sram_partition {TYPE_2__ battr; } ;
struct sram_dev {int dev; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,char*,unsigned long long) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct sram_dev *VAR_6, struct sram_reserve *VAR_7,
      phys_addr_t VAR_8, struct sram_partition *VAR_9)
{
 FUNC_2(&VAR_9->battr);
 VAR_9->battr.attr.name = FUNC_1(VAR_6->dev, VAR_1,
            "%llx.sram",
            (unsigned long long)VAR_8);
 if (!VAR_9->battr.attr.name)
  return -VAR_0;

 VAR_9->battr.attr.mode = VAR_2 | VAR_3;
 VAR_9->battr.read = VAR_4;
 VAR_9->battr.write = VAR_5;
 VAR_9->battr.size = VAR_7->size;

 return FUNC_0(VAR_6->dev, &VAR_9->battr);
}
