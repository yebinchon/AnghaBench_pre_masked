
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct mlme_ext_priv {unsigned char cur_channel; unsigned char cur_bwmode; unsigned char cur_ch_offset; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (char*,unsigned char,unsigned char,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

int FUNC_2(struct adapter *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 struct mlme_ext_priv *VAR_6 = &VAR_2->mlmeextpriv;
 unsigned char VAR_7 = VAR_6->cur_channel;
 unsigned char VAR_8 = VAR_6->cur_bwmode;
 unsigned char VAR_9 = VAR_6->cur_ch_offset;
 bool VAR_10 = 1;

 if (!VAR_3 || !VAR_4 || !VAR_5) {
  FUNC_1(1);
  VAR_10 = 0;
 }

 if (VAR_10) {
  FUNC_0("start_join_set_ch_bw: ch =%d, bwmode =%d, ch_offset =%d\n", VAR_7, VAR_8, VAR_9);
  *VAR_3 = VAR_7;
  *VAR_4 = VAR_8;
  *VAR_5 = VAR_9;
 }

 return VAR_10 ? VAR_1 : VAR_0;
}
