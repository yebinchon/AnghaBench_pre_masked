
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_call {TYPE_1__* type; int tmp; int operation_ID; int _iter; } ;
struct TYPE_2__ {int (* deliver ) (struct afs_call*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct afs_call*) ;
 int FUNC_2 (struct afs_call*,int) ;
 int FUNC_3 (struct afs_call*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct afs_call*) ;
 int FUNC_7 (struct afs_call*) ;

__attribute__((used)) static int FUNC_8(struct afs_call *VAR_3)
{
 int VAR_4;

 FUNC_0("{%zu}", FUNC_4(VAR_3->_iter));


 VAR_4 = FUNC_2(VAR_3, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->operation_ID = FUNC_5(VAR_3->tmp);
 FUNC_3(VAR_3, VAR_0, VAR_1);



 if (!FUNC_1(VAR_3))
  return -VAR_2;

 FUNC_7(VAR_3);



 return VAR_3->type->deliver(VAR_3);
}
