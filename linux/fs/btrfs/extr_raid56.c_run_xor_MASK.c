
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,void*,void**) ;

__attribute__((used)) static void FUNC_2(void **VAR_1, int VAR_2, ssize_t VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 void *VAR_6 = VAR_1[VAR_2];

 while(VAR_2 > 0) {
  VAR_5 = FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_5, VAR_3, VAR_6, VAR_1 + VAR_4);

  VAR_2 -= VAR_5;
  VAR_4 += VAR_5;
 }
}
