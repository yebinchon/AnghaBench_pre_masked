
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt_db_info {int db_key64; int db_key32; int doorbell; } ;
struct bnxt {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct bnxt *VAR_2, struct bnxt_db_info *VAR_3,
     u32 VAR_4)
{
 if (VAR_2->flags & VAR_0) {
  FUNC_1(VAR_3->db_key64 | VAR_4, VAR_3->doorbell);
 } else {
  u32 VAR_5 = VAR_3->db_key32 | VAR_4;

  FUNC_0(VAR_5, VAR_3->doorbell);
  if (VAR_2->flags & VAR_1)
   FUNC_0(VAR_5, VAR_3->doorbell);
 }
}
