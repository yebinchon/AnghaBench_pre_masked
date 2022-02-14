
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int rp_gid; int rp_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_2)
{
 if (FUNC_4(FUNC_1(), VAR_2->rp_uid) || FUNC_0(VAR_0) ||
     (!FUNC_2(VAR_2->rp_gid, VAR_1) && FUNC_3(VAR_2->rp_gid)))
  return 1;
 return 0;
}
