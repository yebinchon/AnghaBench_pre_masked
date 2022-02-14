
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int in_grace; int rec_file; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfsd_net*) ;
 int FUNC_3 (int ,struct nfsd_net*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct nfsd_net *VAR_1)
{
 int VAR_2;

 VAR_1->in_grace = 0;
 if (!VAR_1->rec_file)
  return;
 VAR_2 = FUNC_1(VAR_1->rec_file);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 == 0)
  FUNC_5(VAR_1->rec_file, 0);
 FUNC_0(VAR_1->rec_file);
out:
 FUNC_2(VAR_1);
 if (VAR_2)
  FUNC_4("nfsd4: failed to purge old clients from recovery"
   " directory %pD\n", VAR_1->rec_file);
}
