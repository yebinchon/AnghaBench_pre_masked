
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rbsp*,int ) ;
 int FUNC_2 (struct rbsp*,int,int) ;

__attribute__((used)) static int FUNC_3(struct rbsp *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4 = VAR_1 + 1;
 int VAR_5 = FUNC_0(VAR_4) - 1;

 for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++) {
  VAR_3 = FUNC_1(VAR_0, 0);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_2(VAR_0, VAR_5 + 1, VAR_4);
}
