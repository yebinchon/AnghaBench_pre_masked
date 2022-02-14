
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid ;
typedef int u32 ;
struct tb_nhi {int pdev; } ;
struct tb {TYPE_1__* root_switch; struct tb_nhi* nhi; } ;
struct TYPE_2__ {int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct tb *VAR_3)
{
 struct tb_nhi *VAR_4 = VAR_3->nhi;
 u32 VAR_5[4];

 FUNC_1(VAR_4->pdev, VAR_1, &VAR_5[0]);
 FUNC_1(VAR_4->pdev, VAR_2, &VAR_5[1]);
 VAR_5[2] = 0xffffffff;
 VAR_5[3] = 0xffffffff;

 VAR_3->root_switch->uuid = FUNC_0(VAR_5, sizeof(VAR_5), VAR_0);
}
