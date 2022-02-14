
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_4)
{
 if (VAR_4 < 2 || VAR_4 > 7200)
  return -VAR_0;

 VAR_3 = VAR_4;

 if (VAR_2 >= VAR_1)
  FUNC_0("New heartbeat: %d\n", VAR_3);

 return 0;
}
