
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_config {int id; int word_size; int stride; int read_only; int root_only; int no_of_node; struct mtd_info* priv; int size; int reg_read; int owner; int name; int * dev; } ;
struct mtd_info {int * nvmem; int dev; int size; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int VAR_2 ;
 int * FUNC_3 (struct nvmem_config*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_3)
{
 struct nvmem_config VAR_4 = {};

 VAR_4.id = -1;
 VAR_4.dev = &VAR_3->dev;
 VAR_4.name = VAR_3->name;
 VAR_4.owner = VAR_1;
 VAR_4.reg_read = VAR_2;
 VAR_4.size = VAR_3->size;
 VAR_4.word_size = 1;
 VAR_4.stride = 1;
 VAR_4.read_only = 1;
 VAR_4.root_only = 1;
 VAR_4.no_of_node = 1;
 VAR_4.priv = VAR_3;

 VAR_3->nvmem = FUNC_3(&VAR_4);
 if (FUNC_0(VAR_3->nvmem)) {

  if (FUNC_1(VAR_3->nvmem) == -VAR_0) {
   VAR_3->nvmem = ((void*)0);
  } else {
   FUNC_2(&VAR_3->dev, "Failed to register NVMEM device\n");
   return FUNC_1(VAR_3->nvmem);
  }
 }

 return 0;
}
