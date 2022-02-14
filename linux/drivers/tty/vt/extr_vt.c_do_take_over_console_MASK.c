
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct consw const*,int,int,int) ;
 int FUNC_1 (struct consw const*,int,int) ;

int FUNC_2(const struct consw *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);





 if (VAR_5 == -VAR_0)
  VAR_5 = 0;
 if (!VAR_5)
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
