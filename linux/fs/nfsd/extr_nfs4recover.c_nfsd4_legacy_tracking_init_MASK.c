
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 int VAR_0 ;
 struct net VAR_1 ;
 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct net *VAR_2)
{
 int VAR_3;


 if (VAR_2 != &VAR_1) {
  FUNC_3("NFSD: attempt to initialize legacy client tracking in a container ignored.\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto err;
 FUNC_4("NFSD: Using legacy client tracking operations.\n");
 return 0;

err:
 FUNC_1(VAR_2);
 return VAR_3;
}
