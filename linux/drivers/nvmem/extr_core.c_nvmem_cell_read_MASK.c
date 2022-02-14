
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct nvmem_device {int dummy; } ;
struct nvmem_cell {int bytes; struct nvmem_device* nvmem; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct nvmem_device*,struct nvmem_cell*,void*,size_t*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ) ;

void *FUNC_4(struct nvmem_cell *VAR_3, size_t *VAR_4)
{
 struct nvmem_device *VAR_5 = VAR_3->nvmem;
 u8 *VAR_6;
 int VAR_7;

 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(VAR_3->bytes, VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_6, VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return FUNC_0(VAR_7);
 }

 return VAR_6;
}
