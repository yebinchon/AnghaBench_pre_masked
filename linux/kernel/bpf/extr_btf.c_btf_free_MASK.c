
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int data; int resolved_ids; int resolved_sizes; int types; } ;


 int FUNC_0 (struct btf*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct btf *VAR_0)
{
 FUNC_1(VAR_0->types);
 FUNC_1(VAR_0->resolved_sizes);
 FUNC_1(VAR_0->resolved_ids);
 FUNC_1(VAR_0->data);
 FUNC_0(VAR_0);
}
