
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct net *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  FUNC_1("NFSD: Using old nfsdcld client tracking operations.\n");
 return VAR_1;
}
