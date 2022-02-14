
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int extra_caps; int num_slots; int ic_version; void* rx_initial_phase; void* tx_initial_phase; int aspm_en; int sd30_drive_sel_3v3; int sd30_drive_sel_1v8; int card_drive_sel; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;

__attribute__((used)) static void FUNC_2(struct rtsx_pcr *VAR_6)
{
 VAR_6->extra_caps = VAR_4 | VAR_3;
 VAR_6->num_slots = 2;
 VAR_6->flags = 0;
 VAR_6->card_drive_sel = VAR_5;
 VAR_6->sd30_drive_sel_1v8 = VAR_1;
 VAR_6->sd30_drive_sel_3v3 = VAR_2;
 VAR_6->aspm_en = VAR_0;
 VAR_6->tx_initial_phase = FUNC_0(23, 7, 14);
 VAR_6->rx_initial_phase = FUNC_0(4, 3, 10);
 VAR_6->ic_version = FUNC_1(VAR_6);
}
