
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned long i_ino; } ;
struct CodaFid {int dummy; } ;
struct coda_inode_info {struct CodaFid c_fid; } ;


 int FUNC_0 (int) ;
 struct coda_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,unsigned long) ;
 unsigned long FUNC_3 (struct CodaFid*) ;
 int FUNC_4 (struct CodaFid*,struct CodaFid*) ;
 int FUNC_5 (struct inode*) ;

void FUNC_6(struct inode *VAR_0, struct CodaFid *VAR_1,
        struct CodaFid *VAR_2)
{
 struct coda_inode_info *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4 = FUNC_3(VAR_2);

 FUNC_0(!FUNC_4(&VAR_3->c_fid, VAR_1));



 FUNC_5(VAR_0);
 VAR_3->c_fid = *VAR_2;
 VAR_0->i_ino = VAR_4;
 FUNC_2(VAR_0, VAR_4);
}
