
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct Scsi_Host {scalar_t__ unchecked_isa_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int,int *) ;
 int FUNC_1 (char*,int ,int ,int,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct kmem_cache* FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct Scsi_Host *VAR_7)
{
 struct kmem_cache *VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_5);
 VAR_8 = FUNC_4(VAR_7->unchecked_isa_dma);
 if (VAR_8)
  goto exit;

 if (VAR_7->unchecked_isa_dma) {
  VAR_6 =
   FUNC_0("scsi_sense_cache(DMA)",
    VAR_1, 0,
    VAR_3 | VAR_2, ((void*)0));
  if (!VAR_6)
   VAR_9 = -VAR_0;
 } else {
  VAR_4 =
   FUNC_1("scsi_sense_cache",
    VAR_1, 0, VAR_3,
    0, VAR_1, ((void*)0));
  if (!VAR_4)
   VAR_9 = -VAR_0;
 }
 exit:
 FUNC_3(&VAR_5);
 return VAR_9;
}
