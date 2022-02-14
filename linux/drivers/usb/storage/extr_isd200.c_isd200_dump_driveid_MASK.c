
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct us_data {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct us_data*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct us_data *VAR_21, u16 *VAR_22)
{
 FUNC_1(VAR_21, "   Identify Data Structure:\n");
 FUNC_1(VAR_21, "      config = 0x%x\n", VAR_22[VAR_4]);
 FUNC_1(VAR_21, "      cyls = 0x%x\n", VAR_22[VAR_8]);
 FUNC_1(VAR_21, "      heads = 0x%x\n", VAR_22[VAR_12]);
 FUNC_1(VAR_21, "      track_bytes = 0x%x\n", VAR_22[4]);
 FUNC_1(VAR_21, "      sector_bytes = 0x%x\n", VAR_22[5]);
 FUNC_1(VAR_21, "      sectors = 0x%x\n", VAR_22[VAR_19]);
 FUNC_1(VAR_21, "      serial_no[0] = 0x%x\n", *(char *)&VAR_22[VAR_20]);
 FUNC_1(VAR_21, "      buf_type = 0x%x\n", VAR_22[20]);
 FUNC_1(VAR_21, "      buf_size = 0x%x\n", VAR_22[VAR_0]);
 FUNC_1(VAR_21, "      ecc_bytes = 0x%x\n", VAR_22[22]);
 FUNC_1(VAR_21, "      fw_rev[0] = 0x%x\n", *(char *)&VAR_22[VAR_11]);
 FUNC_1(VAR_21, "      model[0] = 0x%x\n", *(char *)&VAR_22[VAR_18]);
 FUNC_1(VAR_21, "      max_multsect = 0x%x\n", VAR_22[VAR_14] & 0xff);
 FUNC_1(VAR_21, "      dword_io = 0x%x\n", VAR_22[VAR_9]);
 FUNC_1(VAR_21, "      capability = 0x%x\n", VAR_22[VAR_1] >> 8);
 FUNC_1(VAR_21, "      tPIO = 0x%x\n", VAR_22[VAR_17] >> 8);
 FUNC_1(VAR_21, "      tDMA = 0x%x\n", VAR_22[VAR_16] >> 8);
 FUNC_1(VAR_21, "      field_valid = 0x%x\n", VAR_22[VAR_10]);
 FUNC_1(VAR_21, "      cur_cyls = 0x%x\n", VAR_22[VAR_5]);
 FUNC_1(VAR_21, "      cur_heads = 0x%x\n", VAR_22[VAR_6]);
 FUNC_1(VAR_21, "      cur_sectors = 0x%x\n", VAR_22[VAR_7]);
 FUNC_1(VAR_21, "      cur_capacity = 0x%x\n", FUNC_0(VAR_22, 57));
 FUNC_1(VAR_21, "      multsect = 0x%x\n", VAR_22[VAR_15] & 0xff);
 FUNC_1(VAR_21, "      lba_capacity = 0x%x\n", FUNC_0(VAR_22, VAR_13));
 FUNC_1(VAR_21, "      command_set_1 = 0x%x\n", VAR_22[VAR_2]);
 FUNC_1(VAR_21, "      command_set_2 = 0x%x\n", VAR_22[VAR_3]);
}
