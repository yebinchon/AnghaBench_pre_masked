
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_bufmap {struct orangefs_bufmap* buffer_index_array; struct orangefs_bufmap* desc_array; struct orangefs_bufmap* page_array; } ;


 int FUNC_0 (struct orangefs_bufmap*) ;

__attribute__((used)) static void
FUNC_1(struct orangefs_bufmap *VAR_0)
{
 FUNC_0(VAR_0->page_array);
 FUNC_0(VAR_0->desc_array);
 FUNC_0(VAR_0->buffer_index_array);
 FUNC_0(VAR_0);
}
