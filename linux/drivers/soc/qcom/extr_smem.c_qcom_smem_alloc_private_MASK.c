
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smem_private_entry {scalar_t__ canary; scalar_t__ padding_hdr; int size; void* padding_data; void* item; } ;
struct smem_partition_header {void* host1; void* host0; int offset_free_uncached; } ;
struct qcom_smem {int dev; } ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 unsigned int FUNC_4 (void*) ;
 int FUNC_5 (int *,size_t) ;
 unsigned int FUNC_6 (int ) ;
 struct smem_private_entry* FUNC_7 (struct smem_partition_header*) ;
 void* FUNC_8 (struct smem_partition_header*) ;
 struct smem_private_entry* FUNC_9 (struct smem_partition_header*) ;
 struct smem_private_entry* FUNC_10 (struct smem_private_entry*) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct qcom_smem *VAR_4,
       struct smem_partition_header *VAR_5,
       unsigned VAR_6,
       size_t VAR_7)
{
 struct smem_private_entry *VAR_8, *VAR_9;
 size_t VAR_10;
 void *VAR_11;

 VAR_8 = FUNC_7(VAR_5);
 VAR_9 = FUNC_9(VAR_5);
 VAR_11 = FUNC_8(VAR_5);

 while (VAR_8 < VAR_9) {
  if (VAR_8->canary != VAR_3)
   goto bad_canary;
  if (FUNC_4(VAR_8->item) == VAR_6)
   return -VAR_0;

  VAR_8 = FUNC_10(VAR_8);
 }


 VAR_10 = sizeof(*VAR_8) + FUNC_0(VAR_7, 8);
 if ((void *)VAR_8 + VAR_10 > VAR_11) {
  FUNC_3(VAR_4->dev, "Out of memory\n");
  return -VAR_2;
 }

 VAR_8->canary = VAR_3;
 VAR_8->item = FUNC_1(VAR_6);
 VAR_8->size = FUNC_2(FUNC_0(VAR_7, 8));
 VAR_8->padding_data = FUNC_1(FUNC_6(VAR_8->size) - VAR_7);
 VAR_8->padding_hdr = 0;






 FUNC_11();
 FUNC_5(&VAR_5->offset_free_uncached, VAR_10);

 return 0;
bad_canary:
 FUNC_3(VAR_4->dev, "Found invalid canary in hosts %hu:%hu partition\n",
  FUNC_4(VAR_5->host0), FUNC_4(VAR_5->host1));

 return -VAR_1;
}
