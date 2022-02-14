
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl_state {int dummy; } ;
struct posix_acl {int dummy; } ;
struct nfs4_acl {int naces; struct nfs4_ace* aces; } ;
struct nfs4_ace {scalar_t__ type; int flag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct posix_acl_state*) ;
 int FUNC_3 (struct posix_acl_state*,int) ;
 int FUNC_4 (struct posix_acl*) ;
 struct posix_acl* FUNC_5 (struct posix_acl_state*,unsigned int) ;
 int FUNC_6 (struct posix_acl_state*,struct nfs4_ace*) ;
 int FUNC_7 (struct posix_acl*) ;

__attribute__((used)) static int FUNC_8(struct nfs4_acl *VAR_8,
  struct posix_acl **VAR_9, struct posix_acl **VAR_10,
  unsigned int VAR_11)
{
 struct posix_acl_state VAR_12, VAR_13;
 struct nfs4_ace *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(&VAR_12, VAR_8->naces);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_3(&VAR_13, VAR_8->naces);
 if (VAR_15)
  goto out_estate;
 VAR_15 = -VAR_0;
 for (VAR_14 = VAR_8->aces; VAR_14 < VAR_8->aces + VAR_8->naces; VAR_14++) {
  if (VAR_14->type != VAR_1 &&
      VAR_14->type != VAR_2)
   goto out_dstate;
  if (VAR_14->flag & ~VAR_7)
   goto out_dstate;
  if ((VAR_14->flag & VAR_6) == 0) {
   FUNC_6(&VAR_12, VAR_14);
   continue;
  }
  if (!(VAR_11 & VAR_4))
   goto out_dstate;





  FUNC_6(&VAR_13, VAR_14);

  if (!(VAR_14->flag & VAR_3))
   FUNC_6(&VAR_12, VAR_14);
 }
 *VAR_9 = FUNC_5(&VAR_12, VAR_11);
 if (FUNC_0(*VAR_9)) {
  VAR_15 = FUNC_1(*VAR_9);
  *VAR_9 = ((void*)0);
  goto out_dstate;
 }
 *VAR_10 = FUNC_5(&VAR_13,
      VAR_11 | VAR_5);
 if (FUNC_0(*VAR_10)) {
  VAR_15 = FUNC_1(*VAR_10);
  *VAR_10 = ((void*)0);
  FUNC_4(*VAR_9);
  *VAR_9 = ((void*)0);
  goto out_dstate;
 }
 FUNC_7(*VAR_9);
 FUNC_7(*VAR_10);
 VAR_15 = 0;
out_dstate:
 FUNC_2(&VAR_13);
out_estate:
 FUNC_2(&VAR_12);
 return VAR_15;
}
