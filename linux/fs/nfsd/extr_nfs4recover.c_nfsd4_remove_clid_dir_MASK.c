
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int rec_file; scalar_t__ in_grace; } ;
struct nfs4_client {int cl_flags; int cl_name; int net; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,struct nfsd_net*) ;
 int FUNC_1 (int ,int *) ;
 void FUNC_2 (struct nfs4_client*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct nfsd_net* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (struct cred const*) ;
 int FUNC_8 (struct cred const**) ;
 int FUNC_9 (char*,int,struct nfsd_net*) ;
 int VAR_2 ;
 int FUNC_10 (char*,int,char*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void
FUNC_13(struct nfs4_client *VAR_3)
{
 const struct cred *VAR_4;
 char VAR_5[VAR_0];
 int VAR_6;
 struct nfsd_net *VAR_7 = FUNC_5(VAR_3->net, VAR_2);

 if (!VAR_7->rec_file || !FUNC_11(VAR_1, &VAR_3->cl_flags))
  return;

 VAR_6 = FUNC_6(VAR_5, &VAR_3->cl_name);
 if (VAR_6)
  return FUNC_2(VAR_3, VAR_6);

 VAR_6 = FUNC_4(VAR_7->rec_file);
 if (VAR_6)
  goto out;
 FUNC_1(VAR_1, &VAR_3->cl_flags);

 VAR_6 = FUNC_8(&VAR_4);
 if (VAR_6 < 0)
  goto out_drop_write;

 VAR_6 = FUNC_9(VAR_5, VAR_0-1, VAR_7);
 FUNC_7(VAR_4);
 if (VAR_6 == 0) {
  FUNC_12(VAR_7->rec_file, 0);
  if (VAR_7->in_grace)
   FUNC_0(VAR_5,
     VAR_0, VAR_7);
 }
out_drop_write:
 FUNC_3(VAR_7->rec_file);
out:
 if (VAR_6)
  FUNC_10("NFSD: Failed to remove expired client state directory"
    " %.*s\n", VAR_0, VAR_5);
}
