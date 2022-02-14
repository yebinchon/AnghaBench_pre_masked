
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nfs_open_dir_context {scalar_t__ attr_gencount; int duped; scalar_t__ dup_cookie; } ;
struct nfs_inode {scalar_t__ attr_gencount; } ;
struct nfs_cache_array {int size; scalar_t__ eof_index; scalar_t__ last_cookie; TYPE_2__* array; } ;
struct TYPE_11__ {scalar_t__* dir_cookie; scalar_t__ current_index; int cache_entry_index; int eof; TYPE_3__* ctx; TYPE_5__* file; } ;
typedef TYPE_4__ nfs_readdir_descriptor_t ;
typedef scalar_t__ loff_t ;
struct TYPE_12__ {struct nfs_open_dir_context* private_data; } ;
struct TYPE_10__ {scalar_t__ pos; } ;
struct TYPE_8__ {int name; int len; } ;
struct TYPE_9__ {scalar_t__ cookie; TYPE_1__ string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs_inode* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct nfs_inode*) ;
 int FUNC_3 (char*,TYPE_5__*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static
int FUNC_5(struct nfs_cache_array *VAR_3, nfs_readdir_descriptor_t *VAR_4)
{
 int VAR_5;
 loff_t VAR_6;
 int VAR_7 = -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->size; VAR_5++) {
  if (VAR_3->array[VAR_5].cookie == *VAR_4->dir_cookie) {
   struct nfs_inode *VAR_8 = FUNC_0(FUNC_1(VAR_4->file));
   struct nfs_open_dir_context *VAR_9 = VAR_4->file->private_data;

   VAR_6 = VAR_4->current_index + VAR_5;
   if (VAR_9->attr_gencount != VAR_8->attr_gencount ||
       !FUNC_2(VAR_8)) {
    VAR_9->duped = 0;
    VAR_9->attr_gencount = VAR_8->attr_gencount;
   } else if (VAR_6 < VAR_4->ctx->pos) {
    if (VAR_9->duped > 0
        && VAR_9->dup_cookie == *VAR_4->dir_cookie) {
     if (FUNC_4()) {
      FUNC_3("NFS: directory %pD2 contains a readdir loop."
        "Please contact your server vendor.  "
        "The file: %.*s has duplicate cookie %llu\n",
        VAR_4->file, VAR_3->array[VAR_5].string.len,
        VAR_3->array[VAR_5].string.name, *VAR_4->dir_cookie);
     }
     VAR_7 = -VAR_2;
     goto out;
    }
    VAR_9->dup_cookie = *VAR_4->dir_cookie;
    VAR_9->duped = -1;
   }
   VAR_4->ctx->pos = VAR_6;
   VAR_4->cache_entry_index = VAR_5;
   return 0;
  }
 }
 if (VAR_3->eof_index >= 0) {
  VAR_7 = -VAR_1;
  if (*VAR_4->dir_cookie == VAR_3->last_cookie)
   VAR_4->eof = 1;
 }
out:
 return VAR_7;
}
