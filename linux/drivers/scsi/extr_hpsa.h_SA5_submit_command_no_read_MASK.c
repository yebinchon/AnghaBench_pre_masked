
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {scalar_t__ vaddr; } ;
struct CommandList {int busaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ctlr_info *VAR_1,
 struct CommandList *VAR_2)
{
 FUNC_0(VAR_2->busaddr, VAR_1->vaddr + VAR_0);
}
