
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btrfs_io_ctl {int size; struct btrfs_free_space_entry* cur; int index; } ;
struct btrfs_free_space_entry {int type; int bytes; int offset; } ;
struct btrfs_free_space {void* bytes; void* offset; } ;


 int FUNC_0 (struct btrfs_io_ctl*,int ) ;
 int FUNC_1 (struct btrfs_io_ctl*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct btrfs_io_ctl *VAR_0,
       struct btrfs_free_space *VAR_1, u8 *VAR_2)
{
 struct btrfs_free_space_entry *VAR_3;
 int VAR_4;

 if (!VAR_0->cur) {
  VAR_4 = FUNC_0(VAR_0, VAR_0->index);
  if (VAR_4)
   return VAR_4;
 }

 VAR_3 = VAR_0->cur;
 VAR_1->offset = FUNC_2(VAR_3->offset);
 VAR_1->bytes = FUNC_2(VAR_3->bytes);
 *VAR_2 = VAR_3->type;
 VAR_0->cur += sizeof(struct btrfs_free_space_entry);
 VAR_0->size -= sizeof(struct btrfs_free_space_entry);

 if (VAR_0->size >= sizeof(struct btrfs_free_space_entry))
  return 0;

 FUNC_1(VAR_0);

 return 0;
}
