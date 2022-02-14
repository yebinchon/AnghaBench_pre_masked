
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dbg; } ;
struct ubifs_debug_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

int FUNC_1(struct ubifs_info *VAR_2)
{
 VAR_2->dbg = FUNC_0(sizeof(struct ubifs_debug_info), VAR_1);
 if (!VAR_2->dbg)
  return -VAR_0;

 return 0;
}
