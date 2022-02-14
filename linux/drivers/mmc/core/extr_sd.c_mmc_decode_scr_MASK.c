
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sd_scr {int sda_vsn; int bus_widths; int sda_spec3; int sda_spec4; int sda_specx; int cmds; } ;
struct mmc_card {int erased_byte; int host; int * raw_scr; struct sd_scr scr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,...) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_4)
{
 struct sd_scr *VAR_5 = &VAR_4->scr;
 unsigned int VAR_6;
 u32 VAR_7[4];

 VAR_7[3] = VAR_4->raw_scr[1];
 VAR_7[2] = VAR_4->raw_scr[0];

 VAR_6 = FUNC_0(VAR_7, 60, 4);
 if (VAR_6 != 0) {
  FUNC_2("%s: unrecognised SCR structure version %d\n",
   FUNC_1(VAR_4->host), VAR_6);
  return -VAR_0;
 }

 VAR_5->sda_vsn = FUNC_0(VAR_7, 56, 4);
 VAR_5->bus_widths = FUNC_0(VAR_7, 48, 4);
 if (VAR_5->sda_vsn == VAR_1)

  VAR_5->sda_spec3 = FUNC_0(VAR_7, 47, 1);

 if (VAR_5->sda_spec3) {
  VAR_5->sda_spec4 = FUNC_0(VAR_7, 42, 1);
  VAR_5->sda_specx = FUNC_0(VAR_7, 38, 4);
 }

 if (FUNC_0(VAR_7, 55, 1))
  VAR_4->erased_byte = 0xFF;
 else
  VAR_4->erased_byte = 0x0;

 if (VAR_5->sda_spec3)
  VAR_5->cmds = FUNC_0(VAR_7, 32, 2);


 if (!(VAR_5->bus_widths & VAR_2) ||
     !(VAR_5->bus_widths & VAR_3)) {
  FUNC_2("%s: invalid bus width\n", FUNC_1(VAR_4->host));
  return -VAR_0;
 }

 return 0;
}
