
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {int dev; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {char* name; int read_only; int root_only; int id; int stride; int word_size; size_t size; struct tb_switch* priv; int owner; int * dev; int reg_write; int reg_read; } ;
typedef int config ;


 int VAR_0 ;
 int FUNC_0 (struct nvmem_config*,int ,int) ;
 struct nvmem_device* FUNC_1 (struct nvmem_config*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct nvmem_device *FUNC_2(struct tb_switch *VAR_3, int VAR_4,
        size_t VAR_5, bool VAR_6)
{
 struct nvmem_config VAR_7;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));

 if (VAR_6) {
  VAR_7.name = "nvm_active";
  VAR_7.reg_read = VAR_1;
  VAR_7.read_only = 1;
 } else {
  VAR_7.name = "nvm_non_active";
  VAR_7.reg_write = VAR_2;
  VAR_7.root_only = 1;
 }

 VAR_7.id = VAR_4;
 VAR_7.stride = 4;
 VAR_7.word_size = 4;
 VAR_7.size = VAR_5;
 VAR_7.dev = &VAR_3->dev;
 VAR_7.owner = VAR_0;
 VAR_7.priv = VAR_3;

 return FUNC_1(&VAR_7);
}
