
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max2175 {int rom_bbf_bw_fm; int rom_bbf_bw_dab; int rom_bbf_bw_am; } ;


 scalar_t__ FUNC_0 (struct max2175*) ;
 scalar_t__ FUNC_1 (struct max2175*) ;
 int FUNC_2 (struct max2175*,int,int,int ,int ) ;
 int FUNC_3 (struct max2175*,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct max2175 *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_0, 12, 3, 0, VAR_0->rom_bbf_bw_am);
  FUNC_3(VAR_0, "set_bbfilter AM: rom %d\n", VAR_0->rom_bbf_bw_am);
 } else if (FUNC_1(VAR_0)) {
  FUNC_2(VAR_0, 12, 3, 0, VAR_0->rom_bbf_bw_dab);
  FUNC_3(VAR_0, "set_bbfilter DAB: rom %d\n", VAR_0->rom_bbf_bw_dab);
 } else {
  FUNC_2(VAR_0, 12, 3, 0, VAR_0->rom_bbf_bw_fm);
  FUNC_3(VAR_0, "set_bbfilter FM: rom %d\n", VAR_0->rom_bbf_bw_fm);
 }
}
