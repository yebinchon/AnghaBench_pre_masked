
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct us_data {scalar_t__ extra; } ;
struct rts51x_chip {int status_len; TYPE_2__* status; } ;
struct TYPE_3__ {size_t detailed_type1; } ;
struct TYPE_4__ {int vid; int pid; size_t cur_lun; size_t card_type; size_t total_lun; int fw_ver; size_t phy_exist; size_t multi_flag; size_t multi_card; size_t log_exist; size_t* function; TYPE_1__ detailed_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct us_data*,size_t,size_t*,int,int*) ;
 int FUNC_1 (struct us_data*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_2, u8 VAR_3)
{
 struct rts51x_chip *VAR_4 = (struct rts51x_chip *)(VAR_2->extra);
 int VAR_5;
 u8 VAR_6[16];

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_6, 16, &(VAR_4->status_len));
 if (VAR_5 != VAR_1)
  return -VAR_0;

 FUNC_1(VAR_2, "chip->status_len = %d\n", VAR_4->status_len);

 VAR_4->status[VAR_3].vid = ((u16) VAR_6[0] << 8) | VAR_6[1];
 VAR_4->status[VAR_3].pid = ((u16) VAR_6[2] << 8) | VAR_6[3];
 VAR_4->status[VAR_3].cur_lun = VAR_6[4];
 VAR_4->status[VAR_3].card_type = VAR_6[5];
 VAR_4->status[VAR_3].total_lun = VAR_6[6];
 VAR_4->status[VAR_3].fw_ver = ((u16) VAR_6[7] << 8) | VAR_6[8];
 VAR_4->status[VAR_3].phy_exist = VAR_6[9];
 VAR_4->status[VAR_3].multi_flag = VAR_6[10];
 VAR_4->status[VAR_3].multi_card = VAR_6[11];
 VAR_4->status[VAR_3].log_exist = VAR_6[12];
 if (VAR_4->status_len == 16) {
  VAR_4->status[VAR_3].detailed_type.detailed_type1 = VAR_6[13];
  VAR_4->status[VAR_3].function[0] = VAR_6[14];
  VAR_4->status[VAR_3].function[1] = VAR_6[15];
 }

 return 0;
}
