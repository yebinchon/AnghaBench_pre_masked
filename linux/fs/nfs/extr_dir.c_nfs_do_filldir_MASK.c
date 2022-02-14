
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_open_dir_context {int duped; } ;
struct TYPE_6__ {int len; int name; } ;
struct nfs_cache_array_entry {scalar_t__ cookie; int d_type; int ino; TYPE_1__ string; } ;
struct nfs_cache_array {int size; scalar_t__ eof_index; scalar_t__ last_cookie; struct nfs_cache_array_entry* array; } ;
struct file {struct nfs_open_dir_context* private_data; } ;
struct TYPE_7__ {int cache_entry_index; int eof; scalar_t__* dir_cookie; int page; TYPE_4__* ctx; struct file* file; } ;
typedef TYPE_2__ nfs_readdir_descriptor_t ;
struct TYPE_8__ {int pos; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,unsigned long long,int) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,int ) ;
 struct nfs_cache_array* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static
int FUNC_6(nfs_readdir_descriptor_t *VAR_1)
{
 struct file *VAR_2 = VAR_1->file;
 int VAR_3 = 0;
 int VAR_4 = 0;
 struct nfs_cache_array *VAR_5 = ((void*)0);
 struct nfs_open_dir_context *VAR_6 = VAR_2->private_data;

 VAR_5 = FUNC_3(VAR_1->page);
 for (VAR_3 = VAR_1->cache_entry_index; VAR_3 < VAR_5->size; VAR_3++) {
  struct nfs_cache_array_entry *VAR_7;

  VAR_7 = &VAR_5->array[VAR_3];
  if (!FUNC_2(VAR_1->ctx, VAR_7->string.name, VAR_7->string.len,
      FUNC_5(VAR_7->ino), VAR_7->d_type)) {
   VAR_1->eof = 1;
   break;
  }
  VAR_1->ctx->pos++;
  if (VAR_3 < (VAR_5->size-1))
   *VAR_1->dir_cookie = VAR_5->array[VAR_3+1].cookie;
  else
   *VAR_1->dir_cookie = VAR_5->last_cookie;
  if (VAR_6->duped != 0)
   VAR_6->duped = 1;
 }
 if (VAR_5->eof_index >= 0)
  VAR_1->eof = 1;

 FUNC_4(VAR_1->page);
 FUNC_0(VAR_1);
 FUNC_1(VAR_0, "NFS: nfs_do_filldir() filling ended @ cookie %Lu; returning = %d\n",
   (unsigned long long)*VAR_1->dir_cookie, VAR_4);
 return VAR_4;
}
