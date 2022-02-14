
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int dummy; } ;
typedef int NEGOTIATE_RSP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline int
FUNC_1(struct TCP_Server_Info *VAR_2, NEGOTIATE_RSP *VAR_3)
{
 FUNC_0(VAR_1, "mount failed, cifs module not built with CIFS_WEAK_PW_HASH support\n");
 return -VAR_0;
}
