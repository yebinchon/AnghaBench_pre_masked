
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {scalar_t__ sector_size; int free_size; int dirty_size; } ;
struct jffs2_eraseblock {scalar_t__ free_size; scalar_t__ offset; int dirty_size; TYPE_1__* last_node; int wasted_size; } ;
struct TYPE_2__ {int __totlen; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct jffs2_sb_info*,struct jffs2_eraseblock*,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct jffs2_sb_info *VAR_1, struct jffs2_eraseblock *VAR_2,
      uint32_t VAR_3)
{
 if (!VAR_3)
  return 0;
 if (FUNC_4(VAR_3 > VAR_2->free_size)) {
  FUNC_2("Dirty space 0x%x larger then free_size 0x%x (wasted 0x%x)\n",
   VAR_3, VAR_2->free_size, VAR_2->wasted_size);
  FUNC_0();
 }

 if (VAR_2->last_node && FUNC_3(VAR_2->last_node)) {



  VAR_1->dirty_size += VAR_3;
  VAR_1->free_size -= VAR_3;
  VAR_2->dirty_size += VAR_3;
  VAR_2->free_size -= VAR_3;
 } else {
  uint32_t VAR_4 = VAR_2->offset + VAR_1->sector_size - VAR_2->free_size;
  VAR_4 |= VAR_0;

  FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3, ((void*)0));
 }

 return 0;
}
