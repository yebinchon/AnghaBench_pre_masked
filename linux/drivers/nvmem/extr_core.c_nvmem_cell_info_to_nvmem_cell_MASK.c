
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int stride; int dev; } ;
struct nvmem_cell_info {scalar_t__ nbits; scalar_t__ bit_offset; int name; int bytes; int offset; } ;
struct nvmem_cell {int name; int offset; scalar_t__ bit_offset; scalar_t__ nbits; int bytes; struct nvmem_device* nvmem; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct nvmem_device *VAR_2,
       const struct nvmem_cell_info *VAR_3,
       struct nvmem_cell *VAR_4)
{
 VAR_4->nvmem = VAR_2;
 VAR_4->offset = VAR_3->offset;
 VAR_4->bytes = VAR_3->bytes;
 VAR_4->name = VAR_3->name;

 VAR_4->bit_offset = VAR_3->bit_offset;
 VAR_4->nbits = VAR_3->nbits;

 if (VAR_4->nbits)
  VAR_4->bytes = FUNC_0(VAR_4->nbits + VAR_4->bit_offset,
        VAR_0);

 if (!FUNC_1(VAR_4->offset, VAR_2->stride)) {
  FUNC_2(&VAR_2->dev,
   "cell %s unaligned to nvmem stride %d\n",
   VAR_4->name, VAR_2->stride);
  return -VAR_1;
 }

 return 0;
}
