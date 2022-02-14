
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_entry {int * fh; int * fattr; int label; int server; scalar_t__ eof; int cookie; scalar_t__ prev_cookie; } ;
struct nfs_cache_array {int eof_index; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int last_cookie; struct file* file; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;


 unsigned int FUNC_0 (struct page**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 struct nfs_cache_array* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct nfs_cache_array*,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 () ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct page**,unsigned int) ;
 int FUNC_14 (struct page**,unsigned int) ;
 int FUNC_15 (TYPE_1__*,struct nfs_entry*,struct page**,struct page*,unsigned int) ;
 int FUNC_16 (struct page**,TYPE_1__*,struct nfs_entry*,struct file*,struct inode*) ;

__attribute__((used)) static
int FUNC_17(nfs_readdir_descriptor_t *VAR_4, struct page *VAR_5, struct inode *VAR_6)
{
 struct page *VAR_7[VAR_3];
 struct nfs_entry VAR_8;
 struct file *VAR_9 = VAR_4->file;
 struct nfs_cache_array *VAR_10;
 int VAR_11 = -VAR_0;
 unsigned int VAR_12 = FUNC_0(VAR_7);

 VAR_8.prev_cookie = 0;
 VAR_8.cookie = VAR_4->last_cookie;
 VAR_8.eof = 0;
 VAR_8.fh = FUNC_10();
 VAR_8.fattr = FUNC_9();
 VAR_8.server = FUNC_2(VAR_6);
 if (VAR_8.fh == ((void*)0) || VAR_8.fattr == ((void*)0))
  goto out;

 VAR_8.label = FUNC_7(FUNC_2(VAR_6), VAR_2);
 if (FUNC_1(VAR_8.label)) {
  VAR_11 = FUNC_3(VAR_8.label);
  goto out;
 }

 VAR_10 = FUNC_4(VAR_5);
 FUNC_6(VAR_10, 0, sizeof(struct nfs_cache_array));
 VAR_10->eof_index = -1;

 VAR_11 = FUNC_13(VAR_7, VAR_12);
 if (VAR_11 < 0)
  goto out_release_array;
 do {
  unsigned int VAR_13;
  VAR_11 = FUNC_16(VAR_7, VAR_4, &VAR_8, VAR_9, VAR_6);

  if (VAR_11 < 0)
   break;
  VAR_13 = VAR_11;
  VAR_11 = FUNC_15(VAR_4, &VAR_8, VAR_7, VAR_5, VAR_13);
  if (VAR_11 < 0) {
   if (VAR_11 == -VAR_1)
    VAR_11 = 0;
   break;
  }
 } while (VAR_10->eof_index < 0);

 FUNC_14(VAR_7, VAR_12);
out_release_array:
 FUNC_5(VAR_5);
 FUNC_8(VAR_8.label);
out:
 FUNC_11(VAR_8.fattr);
 FUNC_12(VAR_8.fh);
 return VAR_11;
}
