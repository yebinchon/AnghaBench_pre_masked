
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wsm_buf {int * begin; int * end; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,size_t,int) ;
 size_t FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct wsm_buf*) ;

__attribute__((used)) static int FUNC_3(struct wsm_buf *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = VAR_4->data - VAR_4->begin;
 size_t VAR_7 = VAR_6 + VAR_5;
 u8 *VAR_8;

 VAR_7 = FUNC_1(VAR_7, VAR_1);

 VAR_8 = FUNC_0(VAR_4->begin, VAR_7, VAR_3 | VAR_2);
 if (!VAR_8) {
  FUNC_2(VAR_4);
  return -VAR_0;
 }

 VAR_4->begin = VAR_8;
 VAR_4->data = &VAR_4->begin[VAR_6];
 VAR_4->end = &VAR_4->begin[VAR_7];
 return 0;
}
