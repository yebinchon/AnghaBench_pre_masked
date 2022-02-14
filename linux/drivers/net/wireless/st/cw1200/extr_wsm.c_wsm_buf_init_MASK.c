
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_buf {int * begin; int * end; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (size_t,int) ;
 int FUNC_2 (struct wsm_buf*) ;

void FUNC_3(struct wsm_buf *VAR_3)
{
 FUNC_0(VAR_3->begin);
 VAR_3->begin = FUNC_1(VAR_0, VAR_2 | VAR_1);
 VAR_3->end = VAR_3->begin ? &VAR_3->begin[VAR_0] : VAR_3->begin;
 FUNC_2(VAR_3);
}
