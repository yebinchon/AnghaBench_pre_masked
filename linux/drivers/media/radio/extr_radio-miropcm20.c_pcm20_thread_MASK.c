
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcm20 {int rds_radio_test; int aci; int rds_pty; int rds_tp; int rds_ta; int rds_ms; int rds_ps_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (unsigned int const) ;
 int FUNC_2 (int ,int ,...) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_5)
{
 struct pcm20 *VAR_6 = VAR_5;
 const unsigned VAR_7 = 5;
 const unsigned VAR_8 = 2000;
 unsigned VAR_9 = VAR_7;

 for (;;) {
  char VAR_10[66];
  u8 VAR_11;
  int VAR_12;

  FUNC_1(VAR_8);

  if (FUNC_0())
   break;

  VAR_12 = FUNC_2(VAR_6->aci, VAR_1, &VAR_11, 1);
  if (VAR_12)
   continue;
  if (VAR_11 == 0) {
   if (VAR_9 == 0)
    continue;
   VAR_9--;
   if (VAR_9)
    continue;






   FUNC_5(VAR_6->rds_ps_name, "");
   FUNC_4(VAR_6->rds_ms, 1);
   FUNC_4(VAR_6->rds_ta, 0);
   FUNC_4(VAR_6->rds_tp, 0);
   FUNC_4(VAR_6->rds_pty, 0);
   FUNC_5(VAR_6->rds_radio_test, "");
   continue;
  }
  VAR_9 = VAR_7;

  VAR_12 = FUNC_2(VAR_6->aci, VAR_3, &VAR_11, 1);
  if (VAR_12)
   continue;
  if ((VAR_11 >> 3) & 1) {
   VAR_12 = FUNC_2(VAR_6->aci, VAR_2, VAR_10, 8);
   VAR_10[8] = 0;
   if (!VAR_12 && FUNC_3(VAR_10, 8))
    FUNC_5(VAR_6->rds_ps_name, VAR_10);
  }
  if ((VAR_11 >> 6) & 1) {
   u8 VAR_13;

   VAR_12 = FUNC_2(VAR_6->aci, VAR_0, &VAR_13, 1);
   if (!VAR_12) {
    FUNC_4(VAR_6->rds_ms, !!(VAR_13 & 0x01));
    FUNC_4(VAR_6->rds_ta, !!(VAR_13 & 0x02));
    FUNC_4(VAR_6->rds_tp, !!(VAR_13 & 0x80));
    FUNC_4(VAR_6->rds_pty, (VAR_13 >> 2) & 0x1f);
   }
  }
  if ((VAR_11 >> 4) & 1) {
   VAR_12 = FUNC_2(VAR_6->aci, VAR_4, VAR_10, 65);
   VAR_10[65] = 0;
   if (!VAR_12 && FUNC_3(VAR_10 + 1, 64))
    FUNC_5(VAR_6->rds_radio_test, VAR_10 + 1);
  }
 }
 return 0;
}
