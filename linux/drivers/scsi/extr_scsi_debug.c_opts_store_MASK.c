
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static ssize_t FUNC_4(struct device_driver *VAR_6, const char *VAR_7,
     size_t VAR_8)
{
 int VAR_9;
 char VAR_10[20];

 if (FUNC_1(VAR_7, "%10s", VAR_10) == 1) {
  if (FUNC_2(VAR_10, "0x", 2) == 0) {
   if (FUNC_0(VAR_10 + 2, 16, &VAR_9) == 0)
    goto opts_done;
  } else {
   if (FUNC_0(VAR_10, 10, &VAR_9) == 0)
    goto opts_done;
  }
 }
 return -VAR_0;
opts_done:
 VAR_4 = VAR_9;
 VAR_5 = !!(VAR_2 & VAR_9);
 VAR_3 = !!(VAR_1 & VAR_9);
 FUNC_3();
 return VAR_8;
}
