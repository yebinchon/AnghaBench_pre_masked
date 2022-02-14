
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct xdr_buf {int dummy; } ;
struct page {int dummy; } ;
struct nfs_entry {scalar_t__ eof; } ;
struct nfs_cache_array {int size; int eof_index; } ;
struct TYPE_4__ {int file; scalar_t__ plus; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nfs_cache_array* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,struct nfs_entry*) ;
 int FUNC_5 (struct nfs_entry*,struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (TYPE_1__*,struct nfs_entry*,struct xdr_stream*) ;
 int FUNC_9 (struct xdr_stream*,struct xdr_buf*,struct page**,unsigned int) ;
 int FUNC_10 (struct xdr_stream*,int ,int ) ;

__attribute__((used)) static
int FUNC_11(nfs_readdir_descriptor_t *VAR_5, struct nfs_entry *VAR_6,
    struct page **VAR_7, struct page *VAR_8, unsigned int VAR_9)
{
 struct xdr_stream VAR_10;
 struct xdr_buf VAR_11;
 struct page *VAR_12;
 struct nfs_cache_array *VAR_13;
 unsigned int VAR_14 = 0;
 int VAR_15;

 VAR_12 = FUNC_0(VAR_3);
 if (VAR_12 == ((void*)0))
  return -VAR_2;

 if (VAR_9 == 0)
  goto out_nopages;

 FUNC_9(&VAR_10, &VAR_11, VAR_7, VAR_9);
 FUNC_10(&VAR_10, FUNC_6(VAR_12), VAR_4);

 do {
  VAR_15 = FUNC_8(VAR_5, VAR_6, &VAR_10);
  if (VAR_15 != 0) {
   if (VAR_15 == -VAR_0)
    VAR_15 = 0;
   break;
  }

  VAR_14++;

  if (VAR_5->plus)
   FUNC_4(FUNC_1(VAR_5->file), VAR_6);

  VAR_15 = FUNC_5(VAR_6, VAR_8);
  if (VAR_15 != 0)
   break;
 } while (!VAR_6->eof);

out_nopages:
 if (VAR_14 == 0 || (VAR_15 == -VAR_1 && VAR_6->eof != 0)) {
  VAR_13 = FUNC_2(VAR_8);
  VAR_13->eof_index = VAR_13->size;
  VAR_15 = 0;
  FUNC_3(VAR_8);
 }

 FUNC_7(VAR_12);
 return VAR_15;
}
