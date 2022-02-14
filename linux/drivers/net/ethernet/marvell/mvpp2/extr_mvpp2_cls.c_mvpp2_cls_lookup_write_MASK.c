
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
 int FUNC_0 (struct mvpp2*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mvpp2 *VAR_3,
       struct mvpp2_cls_lookup_entry *VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_4->way << VAR_1) | VAR_4->lkpid;
 FUNC_0(VAR_3, VAR_0, VAR_5);
 FUNC_0(VAR_3, VAR_2, VAR_4->data);
}
