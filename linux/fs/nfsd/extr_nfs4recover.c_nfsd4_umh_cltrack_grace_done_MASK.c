
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int boot_time; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,char*,char*,int *) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct nfsd_net *VAR_0)
{
 char *VAR_1;
 char VAR_2[22];

 FUNC_3(VAR_2, "%ld", VAR_0->boot_time);
 VAR_1 = FUNC_1();
 FUNC_2("gracedone", VAR_2, VAR_1, ((void*)0));
 FUNC_0(VAR_1);
}
