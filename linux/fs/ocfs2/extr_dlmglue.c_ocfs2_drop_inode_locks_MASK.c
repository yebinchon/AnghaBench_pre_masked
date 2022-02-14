
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {int ip_rw_lockres; int ip_inode_lockres; int ip_open_lockres; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct inode *VAR_0)
{
 int VAR_1, VAR_2;




 VAR_2 = FUNC_3(FUNC_1(VAR_0->i_sb),
         &FUNC_0(VAR_0)->ip_open_lockres);
 if (VAR_2 < 0)
  FUNC_2(VAR_2);

 VAR_1 = VAR_2;

 VAR_2 = FUNC_3(FUNC_1(VAR_0->i_sb),
         &FUNC_0(VAR_0)->ip_inode_lockres);
 if (VAR_2 < 0)
  FUNC_2(VAR_2);
 if (VAR_2 < 0 && !VAR_1)
  VAR_1 = VAR_2;

 VAR_2 = FUNC_3(FUNC_1(VAR_0->i_sb),
         &FUNC_0(VAR_0)->ip_rw_lockres);
 if (VAR_2 < 0)
  FUNC_2(VAR_2);
 if (VAR_2 < 0 && !VAR_1)
  VAR_1 = VAR_2;

 return VAR_1;
}
