
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_item {int vi_ih; int vi_type; int vi_index; } ;


 int FUNC_0 (int *,char*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct virtual_item *VAR_0)
{
 FUNC_0(((void*)0), "reiserfs-16103",
    "INDIRECT, index %d, type 0x%x, %h",
    VAR_0->vi_index, VAR_0->vi_type, VAR_0->vi_ih);
}
