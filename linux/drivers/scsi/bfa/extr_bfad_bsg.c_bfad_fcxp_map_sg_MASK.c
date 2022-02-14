
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct bfad_s {TYPE_1__* pcidev; } ;
struct bfad_buf_info {int size; scalar_t__ phys; int virt; } ;
struct bfa_sge_s {int sg_len; void* sg_addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__*,int ) ;
 struct bfad_buf_info* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct bfad_buf_info*) ;
 int FUNC_3 (int ,void*,int) ;

struct bfad_buf_info *
FUNC_4(struct bfad_s *VAR_1, void *VAR_2,
   uint32_t VAR_3, uint32_t *VAR_4)
{
 struct bfad_buf_info *VAR_5, *VAR_6;
 struct bfa_sge_s *VAR_7;
 int VAR_8 = 1;

 VAR_5 = FUNC_1(sizeof(struct bfad_buf_info) +
    sizeof(struct bfa_sge_s),
      VAR_8, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_7 = (struct bfa_sge_s *) (((uint8_t *)VAR_5) +
   (sizeof(struct bfad_buf_info) * VAR_8));


 VAR_6 = VAR_5;
 VAR_6->size = VAR_3;
 VAR_6->virt = FUNC_0(&VAR_1->pcidev->dev,
         VAR_6->size, &VAR_6->phys,
         VAR_0);
 if (!VAR_6->virt)
  goto out_free_mem;


 FUNC_3(VAR_6->virt, VAR_2, VAR_6->size);




 VAR_7->sg_len = VAR_6->size;
 VAR_7->sg_addr = (void *)(size_t) VAR_6->phys;

 *VAR_4 = VAR_8;

 return VAR_5;

out_free_mem:
 FUNC_2(VAR_5);
 return ((void*)0);
}
