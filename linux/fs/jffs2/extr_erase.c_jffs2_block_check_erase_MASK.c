
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct jffs2_sb_info {size_t sector_size; int mtd; } ;
struct jffs2_eraseblock {size_t offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,size_t) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__,int ) ;
 size_t FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int ,size_t,size_t,size_t*,void**,int *) ;
 int FUNC_6 (int ,size_t,size_t,size_t*,void*) ;
 int FUNC_7 (int ,size_t,size_t) ;
 int FUNC_8 (char*,unsigned long,...) ;

__attribute__((used)) static int FUNC_9(struct jffs2_sb_info *VAR_5, struct jffs2_eraseblock *VAR_6, uint32_t *VAR_7)
{
 void *VAR_8;
 uint32_t VAR_9;
 size_t VAR_10;
 int VAR_11;
 unsigned long *VAR_12;

 VAR_11 = FUNC_5(VAR_5->mtd, VAR_6->offset, VAR_5->sector_size, &VAR_10,
   &VAR_8, ((void*)0));
 if (VAR_11 != -VAR_2) {
  if (VAR_11) {
   FUNC_1(1, "MTD point failed %d\n", VAR_11);
   goto do_flash_read;
  }
  if (VAR_10 < VAR_5->sector_size) {

   FUNC_1(1, "MTD point returned len too short: 0x%zx\n",
      VAR_10);
   FUNC_7(VAR_5->mtd, VAR_6->offset, VAR_10);
   goto do_flash_read;
  }
  VAR_12 = VAR_8-sizeof(*VAR_12);
  VAR_10 /= sizeof(*VAR_12);
  do {
     if (*++VAR_12 != ~0)
      break;
  } while(--VAR_10);
  FUNC_7(VAR_5->mtd, VAR_6->offset, VAR_5->sector_size);
  if (VAR_10) {
   FUNC_8("Newly-erased block contained word 0x%lx at offset 0x%08tx\n",
    *VAR_12,
    VAR_6->offset +
    VAR_5->sector_size-VAR_10 * sizeof(*VAR_12));
   return -VAR_1;
  }
  return 0;
 }
 do_flash_read:
 VAR_8 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_8) {
  FUNC_8("Failed to allocate page buffer for verifying erase at 0x%08x. Refiling\n",
   VAR_6->offset);
  return -VAR_0;
 }

 FUNC_1(1, "Verifying erase at 0x%08x\n", VAR_6->offset);

 for (VAR_9 = VAR_6->offset; VAR_9 < VAR_6->offset + VAR_5->sector_size; ) {
  uint32_t VAR_13 = FUNC_4((uint32_t)VAR_4, VAR_6->offset + VAR_5->sector_size - VAR_9);
  int VAR_14;

  *VAR_7 = VAR_9;

  VAR_11 = FUNC_6(VAR_5->mtd, VAR_9, VAR_13, &VAR_10, VAR_8);
  if (VAR_11) {
   FUNC_8("Read of newly-erased block at 0x%08x failed: %d. Putting on bad_list\n",
    VAR_9, VAR_11);
   VAR_11 = -VAR_1;
   goto fail;
  }
  if (VAR_10 != VAR_13) {
   FUNC_8("Short read from newly-erased block at 0x%08x. Wanted %d, got %zd\n",
    VAR_9, VAR_13, VAR_10);
   VAR_11 = -VAR_1;
   goto fail;
  }
  for (VAR_14=0; VAR_14<VAR_13; VAR_14 += sizeof(unsigned long)) {

   unsigned long *VAR_15 = VAR_8 + VAR_14;
   if (*VAR_15 + 1) {
    *VAR_7 += VAR_14;
    FUNC_8("Newly-erased block contained word 0x%lx at offset 0x%08x\n",
     *VAR_15, *VAR_7);
    VAR_11 = -VAR_1;
    goto fail;
   }
  }
  VAR_9 += VAR_13;
  FUNC_0();
 }
 VAR_11 = 0;
fail:
 FUNC_2(VAR_8);
 return VAR_11;
}
