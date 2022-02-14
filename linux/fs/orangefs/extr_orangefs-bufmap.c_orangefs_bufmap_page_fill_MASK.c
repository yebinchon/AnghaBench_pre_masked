
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orangefs_bufmap_desc {int * page_array; } ;
struct TYPE_2__ {struct orangefs_bufmap_desc* desc_array; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,int ) ;

void FUNC_3(void *VAR_2,
    int VAR_3,
    int VAR_4)
{
 struct orangefs_bufmap_desc *VAR_5;
 void *VAR_6;

 VAR_5 = &VAR_1->desc_array[VAR_3];
 VAR_6 = FUNC_0(VAR_5->page_array[VAR_4]);
 FUNC_2(VAR_2, VAR_6, VAR_0);
 FUNC_1(VAR_6);
}
