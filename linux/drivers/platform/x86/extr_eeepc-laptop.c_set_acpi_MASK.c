
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int cm_supported; int handle; } ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_2(struct eeepc_laptop *VAR_2, int VAR_3, int VAR_4)
{
 const char *VAR_5 = VAR_1[VAR_3];

 if (VAR_5 == ((void*)0))
  return -VAR_0;
 if ((VAR_2->cm_supported & (0x1 << VAR_3)) == 0)
  return -VAR_0;

 if (FUNC_1(VAR_2->handle, VAR_5, VAR_4))
  FUNC_0("Error writing %s\n", VAR_5);
 return 0;
}
