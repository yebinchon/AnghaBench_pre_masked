
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_vinfo {unsigned long vi_vblocknr; void* vi_blocknr; void* vi_end; void* vi_start; } ;
struct nilfs_dat_entry {int de_blocknr; int de_end; int de_start; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int ssize_t ;
typedef unsigned long __u64 ;
struct TYPE_2__ {unsigned long mi_entries_per_block; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ) ;
 struct nilfs_dat_entry* FUNC_6 (struct inode*,unsigned long,struct buffer_head*,void*) ;
 int FUNC_7 (struct inode*,unsigned long,int ,struct buffer_head**) ;

ssize_t FUNC_8(struct inode *VAR_0, void *VAR_1, unsigned int VAR_2,
       size_t VAR_3)
{
 struct buffer_head *VAR_4;
 struct nilfs_dat_entry *VAR_5;
 struct nilfs_vinfo *VAR_6 = VAR_1;
 __u64 VAR_7, VAR_8;
 void *VAR_9;
 unsigned long VAR_10 = FUNC_0(VAR_0)->mi_entries_per_block;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11 += VAR_13) {
  VAR_14 = FUNC_7(VAR_0, VAR_6->vi_vblocknr,
         0, &VAR_4);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_9 = FUNC_3(VAR_4->b_page);

  VAR_7 = VAR_6->vi_vblocknr;
  FUNC_2(VAR_7, VAR_10);
  VAR_7 *= VAR_10;
  VAR_8 = VAR_7 + VAR_10 - 1;
  for (VAR_12 = VAR_11, VAR_13 = 0;
       VAR_12 < VAR_3 && VAR_6->vi_vblocknr >= VAR_7 &&
        VAR_6->vi_vblocknr <= VAR_8;
       VAR_12++, VAR_13++, VAR_6 = (void *)VAR_6 + VAR_2) {
   VAR_5 = FUNC_6(
    VAR_0, VAR_6->vi_vblocknr, VAR_4, VAR_9);
   VAR_6->vi_start = FUNC_5(VAR_5->de_start);
   VAR_6->vi_end = FUNC_5(VAR_5->de_end);
   VAR_6->vi_blocknr = FUNC_5(VAR_5->de_blocknr);
  }
  FUNC_4(VAR_9);
  FUNC_1(VAR_4);
 }

 return VAR_3;
}
