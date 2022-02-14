
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int dummy; } ;
struct nvmem_cell {size_t bytes; scalar_t__ nbits; scalar_t__ bit_offset; int offset; } ;


 int FUNC_0 (struct nvmem_device*,int ,void*,size_t) ;
 int FUNC_1 (struct nvmem_cell*,void*) ;

__attribute__((used)) static int FUNC_2(struct nvmem_device *VAR_0,
        struct nvmem_cell *VAR_1,
        void *VAR_2, size_t *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1->offset, VAR_2, VAR_1->bytes);

 if (VAR_4)
  return VAR_4;


 if (VAR_1->bit_offset || VAR_1->nbits)
  FUNC_1(VAR_1, VAR_2);

 if (VAR_3)
  *VAR_3 = VAR_1->bytes;

 return 0;
}
