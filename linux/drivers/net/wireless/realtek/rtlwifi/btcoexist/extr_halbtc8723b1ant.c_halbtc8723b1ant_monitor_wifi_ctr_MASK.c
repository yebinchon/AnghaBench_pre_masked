
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {scalar_t__ (* btc_read_4byte ) (struct btc_coexist*,int) ;scalar_t__ (* btc_read_2byte ) (struct btc_coexist*,int) ;int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;} ;
typedef int s32 ;
struct TYPE_4__ {scalar_t__ bt_status; } ;
struct TYPE_3__ {scalar_t__ crc_ok_cck; scalar_t__ crc_ok_11g; scalar_t__ crc_ok_11n; scalar_t__ crc_ok_11n_agg; scalar_t__ crc_err_cck; scalar_t__ crc_err_11g; scalar_t__ crc_err_11n; scalar_t__ crc_err_11n_agg; int pre_ccklock; int cck_lock; int cck_ever_lock; scalar_t__ under_ips; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct btc_coexist*,int ,int*) ;
 scalar_t__ FUNC_1 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_2 (struct btc_coexist*,int) ;
 int FUNC_3 (struct btc_coexist*,int,int,int) ;
 int FUNC_4 (struct btc_coexist*,int,int,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int*) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;
 scalar_t__ FUNC_7 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_8 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_9 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_10 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_11 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_12 (struct btc_coexist*,int) ;

__attribute__((used)) static void FUNC_13(struct btc_coexist *VAR_8)
{
 s32 VAR_9 = 0;
 bool VAR_10 = 0, VAR_11 = 0;
 static u8 VAR_12;
 u32 VAR_13;

 VAR_8->btc_get(VAR_8, VAR_0, &VAR_10);
 VAR_8->btc_get(VAR_8, VAR_2, &VAR_9);
 VAR_8->btc_get(VAR_8, VAR_1,
      &VAR_11);

 if (VAR_7->under_ips) {
  VAR_7->crc_ok_cck = 0;
  VAR_7->crc_ok_11g = 0;
  VAR_7->crc_ok_11n = 0;
  VAR_7->crc_ok_11n_agg = 0;

  VAR_7->crc_err_cck = 0;
  VAR_7->crc_err_11g = 0;
  VAR_7->crc_err_11n = 0;
  VAR_7->crc_err_11n_agg = 0;
 } else {
  VAR_7->crc_ok_cck =
   VAR_8->btc_read_4byte(VAR_8, 0xf88);
  VAR_7->crc_ok_11g =
   VAR_8->btc_read_2byte(VAR_8, 0xf94);
  VAR_7->crc_ok_11n =
   VAR_8->btc_read_2byte(VAR_8, 0xf90);
  VAR_7->crc_ok_11n_agg =
   VAR_8->btc_read_2byte(VAR_8, 0xfb8);

  VAR_7->crc_err_cck =
   VAR_8->btc_read_4byte(VAR_8, 0xf84);
  VAR_7->crc_err_11g =
   VAR_8->btc_read_2byte(VAR_8, 0xf96);
  VAR_7->crc_err_11n =
   VAR_8->btc_read_2byte(VAR_8, 0xf92);
  VAR_7->crc_err_11n_agg =
   VAR_8->btc_read_2byte(VAR_8, 0xfba);
 }


 VAR_8->btc_write_1byte_bitmask(VAR_8, 0xf16, 0x1, 0x1);
 VAR_8->btc_write_1byte_bitmask(VAR_8, 0xf16, 0x1, 0x0);

 if ((VAR_10) && (VAR_9 >= 30) && (!VAR_11)) {
  VAR_13 = VAR_7->crc_ok_cck + VAR_7->crc_ok_11g +
       VAR_7->crc_ok_11n + VAR_7->crc_ok_11n_agg;

  if ((VAR_6->bt_status == VAR_3) ||
      (VAR_6->bt_status ==
       VAR_4) ||
      (VAR_6->bt_status == VAR_5)) {
   if (VAR_7->crc_ok_cck >
       (VAR_13 - VAR_7->crc_ok_cck)) {
    if (VAR_12 < 3)
     VAR_12++;
   } else {
    if (VAR_12 > 0)
     VAR_12--;
   }

  } else {
   if (VAR_12 > 0)
    VAR_12--;
  }
 } else {
  if (VAR_12 > 0)
   VAR_12--;
 }

 if (!VAR_7->pre_ccklock) {
  if (VAR_12 >= 3)
   VAR_7->cck_lock = 1;
  else
   VAR_7->cck_lock = 0;
 } else {
  if (VAR_12 == 0)
   VAR_7->cck_lock = 0;
  else
   VAR_7->cck_lock = 1;
 }

 if (VAR_7->cck_lock)
  VAR_7->cck_ever_lock = 1;

 VAR_7->pre_ccklock = VAR_7->cck_lock;
}
