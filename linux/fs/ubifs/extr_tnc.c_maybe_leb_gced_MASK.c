
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int gced_lnum; int gc_seq; } ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct ubifs_info *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_0->gced_lnum;
 FUNC_0();
 VAR_3 = VAR_0->gc_seq;

 if (VAR_2 == VAR_3)
  return 0;

 if (VAR_2 + 1 != VAR_3)
  return 1;




 FUNC_0();
 if (VAR_4 != VAR_0->gced_lnum)
  return 1;

 if (VAR_4 == VAR_1)
  return 1;
 return 0;
}
