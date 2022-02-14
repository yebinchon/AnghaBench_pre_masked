
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {scalar_t__ read_only; } ;
struct nvmem_cell {scalar_t__ bit_offset; size_t bytes; scalar_t__ nbits; int offset; struct nvmem_device* nvmem; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct nvmem_cell*,void*,size_t) ;
 int FUNC_4 (struct nvmem_device*,int ,void*,size_t) ;

int FUNC_5(struct nvmem_cell *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct nvmem_device *VAR_4 = VAR_1->nvmem;
 int VAR_5;

 if (!VAR_4 || VAR_4->read_only ||
     (VAR_1->bit_offset == 0 && VAR_3 != VAR_1->bytes))
  return -VAR_0;

 if (VAR_1->bit_offset || VAR_1->nbits) {
  VAR_2 = FUNC_3(VAR_1, VAR_2, VAR_3);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
 }

 VAR_5 = FUNC_4(VAR_4, VAR_1->offset, VAR_2, VAR_1->bytes);


 if (VAR_1->bit_offset || VAR_1->nbits)
  FUNC_2(VAR_2);

 if (VAR_5)
  return VAR_5;

 return VAR_3;
}
