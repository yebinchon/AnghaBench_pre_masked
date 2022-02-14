
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int quirks; int last_dme_cmd_tstamp; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct ufs_hba *VAR_2)
{

 unsigned long VAR_3;

 if (!(VAR_2->quirks & VAR_1))
  return;





 if (FUNC_3(!FUNC_2(VAR_2->last_dme_cmd_tstamp))) {
  VAR_3 = 1000;
 } else {
  unsigned long VAR_4 =
   (unsigned long) FUNC_2(
    FUNC_1(FUNC_0(),
    VAR_2->last_dme_cmd_tstamp));

  if (VAR_4 < 1000)
   VAR_3 =
    1000 - VAR_4;
  else
   return;
 }


 FUNC_4(VAR_3, VAR_3 + 50);
}
