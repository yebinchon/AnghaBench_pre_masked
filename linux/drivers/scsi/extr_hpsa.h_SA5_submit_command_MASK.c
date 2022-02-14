
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {scalar_t__ vaddr; } ;
struct CommandList {int busaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_2,
 struct CommandList *VAR_3)
{
 FUNC_1(VAR_3->busaddr, VAR_2->vaddr + VAR_0);
 (void) FUNC_0(VAR_2->vaddr + VAR_1);
}
