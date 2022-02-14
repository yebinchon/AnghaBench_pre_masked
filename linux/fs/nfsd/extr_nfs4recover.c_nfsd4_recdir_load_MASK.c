
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int rec_file; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct nfsd_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int ,struct nfsd_net*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct net *VAR_2) {
 int VAR_3;
 struct nfsd_net *VAR_4 = FUNC_0(VAR_2, VAR_1);

 if (!VAR_4->rec_file)
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_4);
 if (VAR_3)
  FUNC_2("nfsd4: failed loading clients from recovery"
   " directory %pD\n", VAR_4->rec_file);
 return VAR_3;
}
