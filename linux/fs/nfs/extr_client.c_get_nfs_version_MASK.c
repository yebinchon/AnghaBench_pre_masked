
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_subversion {int owner; } ;


 int VAR_0 ;
 struct nfs_subversion* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nfs_subversion*) ;
 struct nfs_subversion* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (int ) ;

struct nfs_subversion *FUNC_7(unsigned int VAR_2)
{
 struct nfs_subversion *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_3)) {
  FUNC_3(&VAR_1);
  FUNC_5("nfsv%d", VAR_2);
  VAR_3 = FUNC_2(VAR_2);
  FUNC_4(&VAR_1);
 }

 if (!FUNC_1(VAR_3) && !FUNC_6(VAR_3->owner))
  return FUNC_0(-VAR_0);
 return VAR_3;
}
