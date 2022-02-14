
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {TYPE_1__* cld_net; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int cn_tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct nfsd_net*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int) ;
 struct nfsd_net* FUNC_6 (struct net*,int ) ;
 int FUNC_7 (struct net*) ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (struct nfsd_net*) ;
 int FUNC_10 (struct nfsd_net*) ;
 int FUNC_11 (struct nfsd_net*) ;
 int FUNC_12 (struct net*) ;
 int VAR_2 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(struct net *VAR_3)
{
 int VAR_4;
 struct nfsd_net *VAR_5 = FUNC_6(VAR_3, VAR_2);
 bool VAR_6;
 int VAR_7 = 10;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto err_shutdown;
 VAR_5->cld_net->cn_tfm = FUNC_4("sha256", 0, 0);
 if (FUNC_0(VAR_5->cld_net->cn_tfm)) {
  VAR_4 = FUNC_1(VAR_5->cld_net->cn_tfm);
  goto err_remove;
 }
 while (!(VAR_6 = FUNC_3(VAR_5)) && VAR_7--)
  FUNC_5(100);

 if (!VAR_6) {
  VAR_4 = -VAR_1;
  goto err_remove;
 }

 VAR_4 = FUNC_10(VAR_5);
 if (VAR_4 == -VAR_0)
  FUNC_13("NFSD: nfsdcld GetVersion upcall failed. Please upgrade nfsdcld.\n");

 VAR_4 = FUNC_11(VAR_5);
 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   FUNC_13("NFSD: nfsdcld GraceStart upcall failed. Please upgrade nfsdcld.\n");
  FUNC_9(VAR_5);
  goto err_remove;
 } else
  FUNC_14("NFSD: Using nfsdcld client tracking operations.\n");
 return 0;

err_remove:
 FUNC_12(VAR_3);
err_shutdown:
 FUNC_8(VAR_3);
 return VAR_4;
}
