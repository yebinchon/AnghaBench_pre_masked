
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_bucket {int dummy; } ;
struct dma_debug_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_debug_entry*) ;
 struct hash_bucket* FUNC_1 (struct dma_debug_entry*,unsigned long*) ;
 int VAR_1 ;
 int FUNC_2 (struct hash_bucket*,struct dma_debug_entry*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct hash_bucket*,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct dma_debug_entry *VAR_2)
{
 struct hash_bucket *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_2, &VAR_4);
 FUNC_2(VAR_3, VAR_2);
 FUNC_4(VAR_3, &VAR_4);

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 == -VAR_0) {
  FUNC_3("cacheline tracking ENOMEM, dma-debug disabled\n");
  VAR_1 = 1;
 }




}
