
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_cls_lookup_entry {int way; int lkpid; int data; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mvpp2*,int ) ;
 int FUNC_1 (struct mvpp2*,int ,int) ;

void FUNC_2(struct mvpp2 *VAR_3, int VAR_4, int VAR_5,
      struct mvpp2_cls_lookup_entry *VAR_6)
{
 u32 VAR_7;

 VAR_7 = (VAR_5 << VAR_1) | VAR_4;
 FUNC_1(VAR_3, VAR_0, VAR_7);
 VAR_6->way = VAR_5;
 VAR_6->lkpid = VAR_4;
 VAR_6->data = FUNC_0(VAR_3, VAR_2);
}
