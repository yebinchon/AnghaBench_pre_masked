
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_call {int work; TYPE_1__* type; } ;
struct TYPE_2__ {scalar_t__ work; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct afs_call*,int ) ;
 int FUNC_2 (struct afs_call*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct afs_call *VAR_2)
{
 if (VAR_2->type->work) {
  FUNC_0(&VAR_2->work, VAR_2->type->work);

  FUNC_1(VAR_2, VAR_0);
  if (!FUNC_3(VAR_1, &VAR_2->work))
   FUNC_2(VAR_2);
 }
}
