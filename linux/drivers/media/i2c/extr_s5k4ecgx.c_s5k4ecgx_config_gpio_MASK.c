
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned long,char const*) ;

__attribute__((used)) static int FUNC_3(int VAR_2, int VAR_3, const char *VAR_4)
{
 unsigned long VAR_5 = VAR_3 ? VAR_0 : VAR_1;
 int VAR_6;

 if (!FUNC_1(VAR_2))
  return 0;
 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_4);
 if (!VAR_6)
  FUNC_0(VAR_2, 0);

 return VAR_6;
}
