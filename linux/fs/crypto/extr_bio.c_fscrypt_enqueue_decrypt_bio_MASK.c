
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_ctx {int work; struct bio* bio; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct fscrypt_ctx *VAR_1, struct bio *VAR_2)
{
 FUNC_0(&VAR_1->work, VAR_0);
 VAR_1->bio = VAR_2;
 FUNC_1(&VAR_1->work);
}
