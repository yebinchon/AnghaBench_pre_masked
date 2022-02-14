
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NCR5380_hostdata {scalar_t__ board; int c400_ctl_status; int connected; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct NCR5380_hostdata *VAR_5)
{
 int VAR_6 = 10000;

 do {
  if (VAR_5->board == VAR_0)
   FUNC_3(4);
  if (FUNC_0(VAR_5->c400_ctl_status) & VAR_1)
   return;
 } while (--VAR_6 > 0);

 FUNC_2(VAR_4, VAR_5->connected,
             "53c80 registers not accessible, device will be reset\n");
 FUNC_1(VAR_5->c400_ctl_status, VAR_3);
 FUNC_1(VAR_5->c400_ctl_status, VAR_2);
}
