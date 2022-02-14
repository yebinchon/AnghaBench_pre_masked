
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_bucket {int dummy; } ;
struct dma_debug_entry {unsigned long long size; size_t direction; unsigned long long sg_call_ents; scalar_t__ type; struct device* dev; scalar_t__ dev_addr; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct dma_debug_entry* FUNC_0 (struct hash_bucket**,struct dma_debug_entry*,unsigned long*) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct device*,struct dma_debug_entry*,char*,unsigned long long,unsigned long long,...) ;
 struct hash_bucket* FUNC_2 (struct dma_debug_entry*,unsigned long*) ;
 int FUNC_3 (struct hash_bucket*,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_5,
         struct dma_debug_entry *VAR_6,
         bool VAR_7)
{
 struct dma_debug_entry *VAR_8;
 struct hash_bucket *VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_2(VAR_6, &VAR_10);

 VAR_8 = FUNC_0(&VAR_9, VAR_6, &VAR_10);

 if (!VAR_8) {
  FUNC_1(VAR_5, ((void*)0), "device driver tries "
    "to sync DMA memory it has not allocated "
    "[device address=0x%016llx] [size=%llu bytes]\n",
    (unsigned long long)VAR_6->dev_addr, VAR_6->size);
  goto out;
 }

 if (VAR_6->size > VAR_8->size) {
  FUNC_1(VAR_5, VAR_8, "device driver syncs"
    " DMA memory outside allocated range "
    "[device address=0x%016llx] "
    "[allocation size=%llu bytes] "
    "[sync offset+size=%llu]\n",
    VAR_8->dev_addr, VAR_8->size,
    VAR_6->size);
 }

 if (VAR_8->direction == VAR_0)
  goto out;

 if (VAR_6->direction != VAR_8->direction) {
  FUNC_1(VAR_5, VAR_8, "device driver syncs "
    "DMA memory with different direction "
    "[device address=0x%016llx] [size=%llu bytes] "
    "[mapped with %s] [synced with %s]\n",
    (unsigned long long)VAR_6->dev_addr, VAR_8->size,
    VAR_3[VAR_8->direction],
    VAR_3[VAR_6->direction]);
 }

 if (VAR_7 && !(VAR_8->direction == VAR_1) &&
        !(VAR_6->direction == VAR_2))
  FUNC_1(VAR_5, VAR_8, "device driver syncs "
    "device read-only DMA memory for cpu "
    "[device address=0x%016llx] [size=%llu bytes] "
    "[mapped with %s] [synced with %s]\n",
    (unsigned long long)VAR_6->dev_addr, VAR_8->size,
    VAR_3[VAR_8->direction],
    VAR_3[VAR_6->direction]);

 if (!VAR_7 && !(VAR_8->direction == VAR_2) &&
         !(VAR_6->direction == VAR_1))
  FUNC_1(VAR_5, VAR_8, "device driver syncs "
    "device write-only DMA memory to device "
    "[device address=0x%016llx] [size=%llu bytes] "
    "[mapped with %s] [synced with %s]\n",
    (unsigned long long)VAR_6->dev_addr, VAR_8->size,
    VAR_3[VAR_8->direction],
    VAR_3[VAR_6->direction]);

 if (VAR_6->sg_call_ents && VAR_6->type == VAR_4 &&
     VAR_6->sg_call_ents != VAR_8->sg_call_ents) {
  FUNC_1(VAR_6->dev, VAR_8, "device driver syncs "
      "DMA sg list with different entry count "
      "[map count=%d] [sync count=%d]\n",
      VAR_8->sg_call_ents, VAR_6->sg_call_ents);
 }

out:
 FUNC_3(VAR_9, &VAR_10);
}
