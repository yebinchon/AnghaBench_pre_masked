
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs4_cached_acl {int cached; size_t len; int data; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct page**,size_t,size_t) ;
 struct nfs4_cached_acl* FUNC_1 (int,int ) ;
 int FUNC_2 (struct inode*,struct nfs4_cached_acl*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_2, struct page **VAR_3, size_t VAR_4, size_t VAR_5)
{
 struct nfs4_cached_acl *VAR_6;
 size_t VAR_7 = sizeof(*VAR_6) + VAR_5;

 if (VAR_7 <= VAR_1) {
  VAR_6 = FUNC_1(VAR_7, VAR_0);
  if (VAR_6 == ((void*)0))
   goto out;
  VAR_6->cached = 1;
  FUNC_0(VAR_6->data, VAR_3, VAR_4, VAR_5);
 } else {
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
  if (VAR_6 == ((void*)0))
   goto out;
  VAR_6->cached = 0;
 }
 VAR_6->len = VAR_5;
out:
 FUNC_2(VAR_2, VAR_6);
}
