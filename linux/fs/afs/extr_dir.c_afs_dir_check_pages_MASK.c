
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union afs_xdr_dir_block {int dummy; } afs_xdr_dir_block ;
struct afs_xdr_dir_page {union afs_xdr_dir_block* blocks; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; } ;
struct afs_read {unsigned int nr_pages; int * pages; int offset; int index; int pos; int remain; int actual_len; int len; int file_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct afs_vnode*,int ,int ) ;
 struct afs_xdr_dir_page* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int,union afs_xdr_dir_block*,...) ;

__attribute__((used)) static bool FUNC_4(struct afs_vnode *VAR_1, struct afs_read *VAR_2)
{
 struct afs_xdr_dir_page *VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6 = VAR_0 / sizeof(union afs_xdr_dir_block);

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_pages; VAR_4++)
  if (!FUNC_0(VAR_1, VAR_2->pages[VAR_4], VAR_2->actual_len))
   goto bad;
 return 1;

bad:
 FUNC_3("DIR %llx:%llx f=%llx l=%llx al=%llx r=%llx\n",
  VAR_1->fid.vid, VAR_1->fid.vnode,
  VAR_2->file_size, VAR_2->len, VAR_2->actual_len, VAR_2->remain);
 FUNC_3("DIR %llx %x %x %x\n",
  VAR_2->pos, VAR_2->index, VAR_2->nr_pages, VAR_2->offset);

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_pages; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2->pages[VAR_4]);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   union afs_xdr_dir_block *VAR_7 = &VAR_3->blocks[VAR_5];

   FUNC_3("[%02x] %32phN\n", VAR_4 * VAR_6 + VAR_5, VAR_7);
  }
  FUNC_2(VAR_2->pages[VAR_4]);
 }
 return 0;
}
