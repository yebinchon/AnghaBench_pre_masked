
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int boot_time; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct net VAR_1 ;
 int FUNC_0 (char*) ;
 struct nfsd_net* FUNC_1 (struct net*,int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,char*,int *) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct net *VAR_3)
{
 int VAR_4;
 struct nfsd_net *VAR_5 = FUNC_1(VAR_3, VAR_2);
 char *VAR_6 = FUNC_2(VAR_5->boot_time);


 if (VAR_3 != &VAR_1) {
  FUNC_4("NFSD: attempt to initialize umh client tracking in a container ignored.\n");
  FUNC_0(VAR_6);
  return -VAR_0;
 }

 VAR_4 = FUNC_3("init", ((void*)0), VAR_6, ((void*)0));
 FUNC_0(VAR_6);
 if (!VAR_4)
  FUNC_5("NFSD: Using UMH upcall client tracking operations.\n");
 return VAR_4;
}
