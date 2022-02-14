
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct nfs4_exception {int interruptible; scalar_t__ retry; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct cred const*,int ,struct page**,unsigned int,int) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,int,struct nfs4_exception*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_0, const struct cred *VAR_1,
  u64 VAR_2, struct page **VAR_3, unsigned int VAR_4, bool VAR_5)
{
 struct nfs4_exception VAR_6 = {
  .interruptible = 1,
 };
 int VAR_7;
 do {
  VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5);
  FUNC_4(FUNC_2(VAR_0), VAR_7);
  VAR_7 = FUNC_3(FUNC_0(FUNC_2(VAR_0)), VAR_7,
    &VAR_6);
 } while (VAR_6.retry);
 return VAR_7;
}
