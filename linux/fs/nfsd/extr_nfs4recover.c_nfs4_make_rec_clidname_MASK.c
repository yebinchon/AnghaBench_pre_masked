
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct xdr_netobj {int * data; int len; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_5__ {struct crypto_shash* tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (TYPE_1__*,struct crypto_shash*) ;
 struct crypto_shash* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int *) ;
 int FUNC_6 (struct crypto_shash*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int *) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_12(char *VAR_3, const struct xdr_netobj *VAR_4)
{
 struct xdr_netobj VAR_5;
 struct crypto_shash *VAR_6;
 int VAR_7;

 FUNC_7("NFSD: nfs4_make_rec_clidname for %.*s\n",
   VAR_4->len, VAR_4->data);
 VAR_6 = FUNC_3("md5", 0, 0);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto out_no_tfm;
 }

 VAR_5.len = FUNC_6(VAR_6);
 VAR_5.data = FUNC_9(VAR_5.len, VAR_1);
 if (VAR_5.data == ((void*)0)) {
  VAR_7 = -VAR_0;
   goto out;
 }

 {
  FUNC_2(VAR_2, VAR_6);

  VAR_2->tfm = VAR_6;

  VAR_7 = FUNC_5(VAR_2, VAR_4->data, VAR_4->len,
          VAR_5.data);
  FUNC_11(VAR_2);
 }

 if (VAR_7)
  goto out;

 FUNC_10(VAR_3, VAR_5.data);

 VAR_7 = 0;
out:
 FUNC_8(VAR_5.data);
 FUNC_4(VAR_6);
out_no_tfm:
 return VAR_7;
}
