
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicode_data {size_t code; } ;
struct tree {int* leafindex; } ;



__attribute__((used)) static int *FUNC_0(struct tree *VAR_0, void *VAR_1)
{
 struct unicode_data *VAR_2 = VAR_1;

 return &VAR_0->leafindex[VAR_2->code];
}
