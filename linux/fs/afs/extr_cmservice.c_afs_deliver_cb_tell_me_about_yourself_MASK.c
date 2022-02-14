
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_call {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct afs_call*,int ) ;
 int FUNC_2 (struct afs_call*,int) ;
 int FUNC_3 (struct afs_call*,int ) ;
 int FUNC_4 (struct afs_call*) ;
 int FUNC_5 (struct afs_call*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct afs_call *VAR_2)
{
 int VAR_3;

 FUNC_0("");

 FUNC_3(VAR_2, 0);
 VAR_3 = FUNC_2(VAR_2, 0);
 if (VAR_3 < 0)
  return VAR_3;

 if (!FUNC_1(VAR_2, VAR_0))
  return FUNC_5(VAR_2, VAR_1);
 return FUNC_4(VAR_2);
}
