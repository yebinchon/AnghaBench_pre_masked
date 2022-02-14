
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smem_private_entry {scalar_t__ canary; int padding_data; int size; int item; } ;
struct smem_partition_header {int host1; int host0; } ;
struct qcom_smem {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 struct smem_private_entry* FUNC_1 (struct smem_private_entry*,size_t) ;
 void* FUNC_2 (struct smem_private_entry*) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 struct smem_private_entry* FUNC_6 (struct smem_partition_header*,size_t) ;
 struct smem_private_entry* FUNC_7 (struct smem_partition_header*) ;
 struct smem_private_entry* FUNC_8 (struct smem_partition_header*) ;
 struct smem_private_entry* FUNC_9 (struct smem_partition_header*) ;
 struct smem_private_entry* FUNC_10 (struct smem_private_entry*) ;
 void* FUNC_11 (struct smem_private_entry*) ;

__attribute__((used)) static void *FUNC_12(struct qcom_smem *VAR_3,
       struct smem_partition_header *VAR_4,
       size_t VAR_5,
       unsigned VAR_6,
       size_t *VAR_7)
{
 struct smem_private_entry *VAR_8, *VAR_9;

 VAR_8 = FUNC_7(VAR_4);
 VAR_9 = FUNC_9(VAR_4);

 while (VAR_8 < VAR_9) {
  if (VAR_8->canary != VAR_2)
   goto invalid_canary;

  if (FUNC_4(VAR_8->item) == VAR_6) {
   if (VAR_7 != ((void*)0))
    *VAR_7 = FUNC_5(VAR_8->size) -
     FUNC_4(VAR_8->padding_data);

   return FUNC_11(VAR_8);
  }

  VAR_8 = FUNC_10(VAR_8);
 }



 VAR_8 = FUNC_6(VAR_4, VAR_5);
 VAR_9 = FUNC_8(VAR_4);

 while (VAR_8 > VAR_9) {
  if (VAR_8->canary != VAR_2)
   goto invalid_canary;

  if (FUNC_4(VAR_8->item) == VAR_6) {
   if (VAR_7 != ((void*)0))
    *VAR_7 = FUNC_5(VAR_8->size) -
     FUNC_4(VAR_8->padding_data);

   return FUNC_2(VAR_8);
  }

  VAR_8 = FUNC_1(VAR_8, VAR_5);
 }

 return FUNC_0(-VAR_1);

invalid_canary:
 FUNC_3(VAR_3->dev, "Found invalid canary in hosts %hu:%hu partition\n",
   FUNC_4(VAR_4->host0), FUNC_4(VAR_4->host1));

 return FUNC_0(-VAR_0);
}
