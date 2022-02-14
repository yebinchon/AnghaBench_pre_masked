
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char const*,char const*,char*,unsigned int*) ;

unsigned int FUNC_1(const char *VAR_1, const char *VAR_2,
      unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, "%u", &VAR_4);
 if (VAR_5 <= 0)
  VAR_4 = VAR_3;

 return VAR_4;
}
