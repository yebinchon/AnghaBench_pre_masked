
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct coda_inode_info {int c_fid; } ;
struct CodaFid {int dummy; } ;


 struct coda_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,struct CodaFid*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, void *VAR_1)
{
 struct CodaFid *VAR_2 = (struct CodaFid *)VAR_1;
 struct coda_inode_info *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(&VAR_3->c_fid, VAR_2);
}
