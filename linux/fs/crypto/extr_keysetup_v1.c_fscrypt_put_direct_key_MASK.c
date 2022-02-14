
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_direct_key {int dk_node; int dk_refcount; } ;


 int FUNC_0 (struct fscrypt_direct_key*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fscrypt_direct_key *VAR_1)
{
 if (!FUNC_2(&VAR_1->dk_refcount, &VAR_0))
  return;
 FUNC_1(&VAR_1->dk_node);
 FUNC_3(&VAR_0);

 FUNC_0(VAR_1);
}
