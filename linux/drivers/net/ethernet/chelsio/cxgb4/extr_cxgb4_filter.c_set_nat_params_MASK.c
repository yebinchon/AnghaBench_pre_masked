
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* nat_lip; int* nat_fip; int nat_lport; int nat_fport; scalar_t__ type; } ;
struct filter_entry {TYPE_1__ fs; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*,struct filter_entry*,unsigned int,scalar_t__,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_6, struct filter_entry *VAR_7,
      unsigned int VAR_8, bool VAR_9, bool VAR_10, bool VAR_11,
      bool VAR_12)
{
 if (VAR_9) {
  if (VAR_7->fs.type) {
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_4,
          VAR_5, VAR_7->fs.nat_lip[15] |
          VAR_7->fs.nat_lip[14] << 8 |
          VAR_7->fs.nat_lip[13] << 16 |
          VAR_7->fs.nat_lip[12] << 24, 1);

   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_4 + 1,
          VAR_5, VAR_7->fs.nat_lip[11] |
          VAR_7->fs.nat_lip[10] << 8 |
          VAR_7->fs.nat_lip[9] << 16 |
          VAR_7->fs.nat_lip[8] << 24, 1);

   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_4 + 2,
          VAR_5, VAR_7->fs.nat_lip[7] |
          VAR_7->fs.nat_lip[6] << 8 |
          VAR_7->fs.nat_lip[5] << 16 |
          VAR_7->fs.nat_lip[4] << 24, 1);

   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_4 + 3,
          VAR_5, VAR_7->fs.nat_lip[3] |
          VAR_7->fs.nat_lip[2] << 8 |
          VAR_7->fs.nat_lip[1] << 16 |
          VAR_7->fs.nat_lip[0] << 24, 1);
  } else {
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_2,
          VAR_5, VAR_7->fs.nat_lip[3] |
          VAR_7->fs.nat_lip[2] << 8 |
          VAR_7->fs.nat_lip[1] << 16 |
          VAR_7->fs.nat_lip[0] << 24, 1);
  }
 }

 if (VAR_10) {
  if (VAR_7->fs.type) {
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_1,
          VAR_5, VAR_7->fs.nat_fip[15] |
          VAR_7->fs.nat_fip[14] << 8 |
          VAR_7->fs.nat_fip[13] << 16 |
          VAR_7->fs.nat_fip[12] << 24, 1);

   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_1 + 1,
          VAR_5, VAR_7->fs.nat_fip[11] |
          VAR_7->fs.nat_fip[10] << 8 |
          VAR_7->fs.nat_fip[9] << 16 |
          VAR_7->fs.nat_fip[8] << 24, 1);

   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_1 + 2,
          VAR_5, VAR_7->fs.nat_fip[7] |
          VAR_7->fs.nat_fip[6] << 8 |
          VAR_7->fs.nat_fip[5] << 16 |
          VAR_7->fs.nat_fip[4] << 24, 1);

   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_1 + 3,
          VAR_5, VAR_7->fs.nat_fip[3] |
          VAR_7->fs.nat_fip[2] << 8 |
          VAR_7->fs.nat_fip[1] << 16 |
          VAR_7->fs.nat_fip[0] << 24, 1);

  } else {
   FUNC_0(VAR_6, VAR_7, VAR_8,
          VAR_3,
          VAR_5, VAR_7->fs.nat_fip[3] |
          VAR_7->fs.nat_fip[2] << 8 |
          VAR_7->fs.nat_fip[1] << 16 |
          VAR_7->fs.nat_fip[0] << 24, 1);
  }
 }

 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_0, VAR_5,
        (VAR_11 ? VAR_7->fs.nat_lport : 0) |
        (VAR_12 ? VAR_7->fs.nat_fport << 16 : 0), 1);
}
