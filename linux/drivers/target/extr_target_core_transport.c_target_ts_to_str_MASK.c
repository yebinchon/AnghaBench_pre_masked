
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char**,char*) ;

__attribute__((used)) static char *FUNC_1(u32 VAR_6)
{
 char *VAR_7 = ((void*)0);

 if (VAR_6 & VAR_0)
  FUNC_0(&VAR_7, "aborted");
 if (VAR_6 & VAR_1)
  FUNC_0(&VAR_7, "active");
 if (VAR_6 & VAR_2)
  FUNC_0(&VAR_7, "complete");
 if (VAR_6 & VAR_4)
  FUNC_0(&VAR_7, "sent");
 if (VAR_6 & VAR_5)
  FUNC_0(&VAR_7, "stop");
 if (VAR_6 & VAR_3)
  FUNC_0(&VAR_7, "fabric_stop");

 return VAR_7;
}
