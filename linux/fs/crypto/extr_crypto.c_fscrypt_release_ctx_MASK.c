
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_ctx {int flags; int free_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct fscrypt_ctx*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct fscrypt_ctx *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4->flags & VAR_0) {
  FUNC_0(VAR_1, VAR_4);
 } else {
  FUNC_2(&VAR_2, VAR_5);
  FUNC_1(&VAR_4->free_list, &VAR_3);
  FUNC_3(&VAR_2, VAR_5);
 }
}
