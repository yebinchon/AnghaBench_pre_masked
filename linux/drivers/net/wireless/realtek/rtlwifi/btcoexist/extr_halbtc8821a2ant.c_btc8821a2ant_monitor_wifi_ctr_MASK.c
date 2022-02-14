
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btc_coexist {int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;scalar_t__ (* btc_read_2byte ) (struct btc_coexist*,int) ;scalar_t__ (* btc_read_4byte ) (struct btc_coexist*,int) ;} ;
struct TYPE_2__ {scalar_t__ crc_err_11n_agg; scalar_t__ crc_err_11n; scalar_t__ crc_err_11g; scalar_t__ crc_err_cck; scalar_t__ crc_ok_11n_agg; scalar_t__ crc_ok_11n; scalar_t__ crc_ok_11g; scalar_t__ crc_ok_cck; scalar_t__ under_ips; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct btc_coexist*,int) ;
 int FUNC_1 (struct btc_coexist*,int,int,int) ;
 scalar_t__ FUNC_2 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_3 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_4 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_5 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_6 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_7 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_8 (struct btc_coexist*,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int) ;

__attribute__((used)) static void FUNC_10(struct btc_coexist *VAR_1)
{
 if (VAR_0->under_ips) {
  VAR_0->crc_ok_cck = 0;
  VAR_0->crc_ok_11g = 0;
  VAR_0->crc_ok_11n = 0;
  VAR_0->crc_ok_11n_agg = 0;

  VAR_0->crc_err_cck = 0;
  VAR_0->crc_err_11g = 0;
  VAR_0->crc_err_11n = 0;
  VAR_0->crc_err_11n_agg = 0;
 } else {
  VAR_0->crc_ok_cck =
   VAR_1->btc_read_4byte(VAR_1, 0xf88);
  VAR_0->crc_ok_11g =
   VAR_1->btc_read_2byte(VAR_1, 0xf94);
  VAR_0->crc_ok_11n =
   VAR_1->btc_read_2byte(VAR_1, 0xf90);
  VAR_0->crc_ok_11n_agg =
   VAR_1->btc_read_2byte(VAR_1, 0xfb8);

  VAR_0->crc_err_cck =
   VAR_1->btc_read_4byte(VAR_1, 0xf84);
  VAR_0->crc_err_11g =
   VAR_1->btc_read_2byte(VAR_1, 0xf96);
  VAR_0->crc_err_11n =
   VAR_1->btc_read_2byte(VAR_1, 0xf92);
  VAR_0->crc_err_11n_agg =
   VAR_1->btc_read_2byte(VAR_1, 0xfba);
 }


 VAR_1->btc_write_1byte_bitmask(VAR_1, 0xf16, 0x1, 0x1);
 VAR_1->btc_write_1byte_bitmask(VAR_1, 0xf16, 0x1, 0x0);
}
