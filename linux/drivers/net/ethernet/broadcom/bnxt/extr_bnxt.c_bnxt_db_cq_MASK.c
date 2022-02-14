
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt_db_info {int db_key64; int doorbell; } ;
struct bnxt {int flags; } ;


 int FUNC_0 (struct bnxt_db_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_2, struct bnxt_db_info *VAR_3, u32 VAR_4)
{
 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_3->db_key64 | VAR_1 | FUNC_1(VAR_4),
         VAR_3->doorbell);
 else
  FUNC_0(VAR_3, VAR_4);
}
