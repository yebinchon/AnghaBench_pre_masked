
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_watch {int dummy; } ;


 int FUNC_0 (char*,char*,unsigned int*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct xenbus_watch *VAR_0,
          const char *VAR_1, const char *VAR_2)
{
 unsigned int VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_1(VAR_1, "cpu/");
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4, "cpu/%u", &VAR_3);
  FUNC_2(VAR_3);
 }
}
