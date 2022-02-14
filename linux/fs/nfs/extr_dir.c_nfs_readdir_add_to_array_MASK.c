
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_entry {scalar_t__ eof; int cookie; int len; int name; int d_type; int ino; int prev_cookie; } ;
struct nfs_cache_array_entry {int string; int d_type; int ino; int cookie; } ;
struct nfs_cache_array {size_t size; size_t eof_index; int last_cookie; struct nfs_cache_array_entry* array; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_cache_array* FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static
int FUNC_4(struct nfs_entry *VAR_2, struct page *VAR_3)
{
 struct nfs_cache_array *VAR_4 = FUNC_0(VAR_3);
 struct nfs_cache_array_entry *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_4->array[VAR_4->size];


 VAR_6 = -VAR_0;
 if ((char *)&VAR_5[1] - (char *)FUNC_3(VAR_3) > VAR_1)
  goto out;

 VAR_5->cookie = VAR_2->prev_cookie;
 VAR_5->ino = VAR_2->ino;
 VAR_5->d_type = VAR_2->d_type;
 VAR_6 = FUNC_2(&VAR_5->string, VAR_2->name, VAR_2->len);
 if (VAR_6)
  goto out;
 VAR_4->last_cookie = VAR_2->cookie;
 VAR_4->size++;
 if (VAR_2->eof != 0)
  VAR_4->eof_index = VAR_4->size;
out:
 FUNC_1(VAR_3);
 return VAR_6;
}
