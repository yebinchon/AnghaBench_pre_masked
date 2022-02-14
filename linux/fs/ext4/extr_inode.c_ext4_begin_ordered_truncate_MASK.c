
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int jinode; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static inline int FUNC_4(struct inode *VAR_0,
           loff_t VAR_1)
{
 FUNC_3(VAR_0, VAR_1);






 if (!FUNC_0(VAR_0)->jinode)
  return 0;
 return FUNC_2(FUNC_1(VAR_0),
         FUNC_0(VAR_0)->jinode,
         VAR_1);
}
