
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int (* reg_read ) (int ,unsigned int,void*,size_t) ;int priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,void*,size_t) ;

__attribute__((used)) static int FUNC_1(struct nvmem_device *VAR_1, unsigned int VAR_2,
     void *VAR_3, size_t VAR_4)
{
 if (VAR_1->reg_read)
  return VAR_1->reg_read(VAR_1->priv, VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
