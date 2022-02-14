
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct path*,struct path*) ;
 int FUNC_1 (char const*,int ,struct path*) ;
 int FUNC_2 (struct path*) ;

__attribute__((used)) static int FUNC_3(struct path *VAR_2, const char *VAR_3)
{
 struct path VAR_4;
 int VAR_5;

 if (!VAR_3 || !*VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_2);
 FUNC_2(&VAR_4);
 return VAR_5;
}
