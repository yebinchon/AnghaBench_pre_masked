
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_dev {TYPE_1__* firmware; } ;
struct TYPE_2__ {int * data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct qed_dev *VAR_0)
{
 const u8 *VAR_1;




 VAR_1 = VAR_0->firmware->data + *(u32 *)VAR_0->firmware->data;
 FUNC_0((u8 *)VAR_1);
 FUNC_1((u8 *)VAR_1);
}
