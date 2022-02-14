
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct msdos_dir_entry {int name; } ;
struct inode {scalar_t__ i_generation; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;
typedef int llu ;
struct TYPE_4__ {scalar_t__ nfs; } ;
struct TYPE_5__ {TYPE_1__ options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct inode* FUNC_3 (struct super_block*,struct msdos_dir_entry*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__*,int*) ;
 struct inode* FUNC_5 (struct super_block*,int ,int ) ;
 int FUNC_6 (struct super_block*,int ,char*,int ) ;
 int FUNC_7 (struct inode*) ;
 struct buffer_head* FUNC_8 (struct super_block*,scalar_t__) ;

__attribute__((used)) static struct inode *FUNC_9(struct super_block *VAR_2,
           u64 VAR_3, u32 VAR_4, loff_t VAR_5)
{
 struct inode *VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_5);

 if (VAR_6 && VAR_4 && (VAR_6->i_generation != VAR_4)) {
  FUNC_7(VAR_6);
  VAR_6 = ((void*)0);
 }
 if (VAR_6 == ((void*)0) && FUNC_1(VAR_2)->options.nfs == VAR_0) {
  struct buffer_head *VAR_7 = ((void*)0);
  struct msdos_dir_entry *VAR_8 ;
  sector_t VAR_9;
  int VAR_10;
  FUNC_4(FUNC_1(VAR_2), VAR_5, &VAR_9, &VAR_10);
  VAR_7 = FUNC_8(VAR_2, VAR_9);
  if (!VAR_7) {
   FUNC_6(VAR_2, VAR_1,
    "unable to read block(%llu) for building NFS inode",
    (llu)VAR_9);
   return VAR_6;
  }
  VAR_8 = (struct msdos_dir_entry *)VAR_7->b_data;



  if (FUNC_0(VAR_8[VAR_10].name))
   VAR_6 = ((void*)0);
  else
   VAR_6 = FUNC_3(VAR_2, &VAR_8[VAR_10], VAR_5);
  FUNC_2(VAR_7);
 }

 return VAR_6;
}
