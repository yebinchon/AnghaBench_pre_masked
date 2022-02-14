
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int * b_assoc_map; int b_assoc_buffers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct buffer_head *VAR_0)
{
 FUNC_1(&VAR_0->b_assoc_buffers);
 FUNC_0(!VAR_0->b_assoc_map);
 VAR_0->b_assoc_map = ((void*)0);
}
