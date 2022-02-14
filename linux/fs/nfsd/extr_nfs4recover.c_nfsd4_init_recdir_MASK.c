
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int in_grace; int * rec_file; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int,int ) ;
 struct nfsd_net* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct cred const*) ;
 int FUNC_6 (struct cred const**) ;
 int VAR_2 ;
 int FUNC_7 (char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8(struct net *VAR_4)
{
 struct nfsd_net *VAR_5 = FUNC_4(VAR_4, VAR_2);
 const struct cred *VAR_6;
 int VAR_7;

 FUNC_7("NFSD: Using %s as the NFSv4 state recovery directory\n",
   VAR_3);

 FUNC_0(VAR_5->rec_file);

 VAR_7 = FUNC_6(&VAR_6);
 if (VAR_7 < 0) {
  FUNC_7("NFSD: Unable to change credentials to find recovery"
         " directory: error %d\n",
         VAR_7);
  return VAR_7;
 }

 VAR_5->rec_file = FUNC_3(VAR_3, VAR_1 | VAR_0, 0);
 if (FUNC_1(VAR_5->rec_file)) {
  FUNC_7("NFSD: unable to find recovery directory %s\n",
    VAR_3);
  VAR_7 = FUNC_2(VAR_5->rec_file);
  VAR_5->rec_file = ((void*)0);
 }

 FUNC_5(VAR_6);
 if (!VAR_7)
  VAR_5->in_grace = 1;
 return VAR_7;
}
