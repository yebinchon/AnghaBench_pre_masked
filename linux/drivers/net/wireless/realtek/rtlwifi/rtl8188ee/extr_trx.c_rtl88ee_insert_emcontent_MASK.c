
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_tcb_desc {int empkt_num; int* empkt_len; } ;
typedef int __le32 ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(struct rtl_tcb_desc *VAR_0,
         __le32 *VAR_1)
{
 u32 VAR_2 = 0;
 FUNC_0(VAR_1, 0, 8);

 FUNC_7(VAR_1, VAR_0->empkt_num);
 if (VAR_0->empkt_num == 1) {
  VAR_2 = VAR_0->empkt_len[0];
 } else {
  VAR_2 = VAR_0->empkt_len[0];
  VAR_2 += ((VAR_2%4) ? (4-VAR_2%4) : 0)+4;
  VAR_2 += VAR_0->empkt_len[1];
 }
 FUNC_1(VAR_1, VAR_2);

 if (VAR_0->empkt_num <= 3) {
  VAR_2 = VAR_0->empkt_len[2];
 } else {
  VAR_2 = VAR_0->empkt_len[2];
  VAR_2 += ((VAR_2%4) ? (4-VAR_2%4) : 0)+4;
  VAR_2 += VAR_0->empkt_len[3];
 }
 FUNC_2(VAR_1, VAR_2);
 if (VAR_0->empkt_num <= 5) {
  VAR_2 = VAR_0->empkt_len[4];
 } else {
  VAR_2 = VAR_0->empkt_len[4];
  VAR_2 += ((VAR_2%4) ? (4-VAR_2%4) : 0)+4;
  VAR_2 += VAR_0->empkt_len[5];
 }
 FUNC_3(VAR_1, VAR_2 & 0xF);
 FUNC_4(VAR_1, VAR_2 >> 4);
 if (VAR_0->empkt_num <= 7) {
  VAR_2 = VAR_0->empkt_len[6];
 } else {
  VAR_2 = VAR_0->empkt_len[6];
  VAR_2 += ((VAR_2%4) ? (4-VAR_2%4) : 0)+4;
  VAR_2 += VAR_0->empkt_len[7];
 }
 FUNC_5(VAR_1, VAR_2);
 if (VAR_0->empkt_num <= 9) {
  VAR_2 = VAR_0->empkt_len[8];
 } else {
  VAR_2 = VAR_0->empkt_len[8];
  VAR_2 += ((VAR_2%4) ? (4-VAR_2%4) : 0)+4;
  VAR_2 += VAR_0->empkt_len[9];
 }
 FUNC_6(VAR_1, VAR_2);
}
