
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_ctx {int free_list; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 struct fscrypt_ctx* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_6(unsigned int VAR_9)
{
 int VAR_10, VAR_11 = -VAR_0;


 if (VAR_9 & VAR_1)
  return 0;

 FUNC_4(&VAR_6);
 if (VAR_3)
  goto already_initialized;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  struct fscrypt_ctx *VAR_12;

  VAR_12 = FUNC_1(VAR_4, VAR_2);
  if (!VAR_12)
   goto fail;
  FUNC_2(&VAR_12->free_list, &VAR_5);
 }

 VAR_3 =
  FUNC_3(VAR_8, 0);
 if (!VAR_3)
  goto fail;

already_initialized:
 FUNC_5(&VAR_6);
 return 0;
fail:
 FUNC_0();
 FUNC_5(&VAR_6);
 return VAR_11;
}
