
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btc_coexist {int dummy; } ;
struct TYPE_2__ {int coex_table_type; int scan_ap_num; int cck_ever_lock; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct btc_coexist*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct btc_coexist *VAR_1,
       bool VAR_2, u8 VAR_3)
{
 VAR_0->coex_table_type = VAR_3;

 switch (VAR_3) {
 case 0:
  FUNC_0(VAR_1, VAR_2, 0x55555555,
        0x55555555, 0xffffff, 0x3);
  break;
 case 1:
  FUNC_0(VAR_1, VAR_2, 0x55555555,
        0x5a5a5a5a, 0xffffff, 0x3);
  break;
 case 2:
  FUNC_0(VAR_1, VAR_2, 0x5a5a5a5a,
        0x5a5a5a5a, 0xffffff, 0x3);
  break;
 case 3:
  FUNC_0(VAR_1, VAR_2, 0x55555555,
        0x5a5a5a5a, 0xffffff, 0x3);
  break;
 case 4:
  if ((VAR_0->cck_ever_lock) && (VAR_0->scan_ap_num <= 5))
   FUNC_0(VAR_1, VAR_2,
         0x55555555, 0xaaaa5a5a,
         0xffffff, 0x3);
  else
   FUNC_0(VAR_1, VAR_2,
         0x55555555, 0x5a5a5a5a,
         0xffffff, 0x3);
  break;
 case 5:
  FUNC_0(VAR_1, VAR_2, 0x5a5a5a5a,
        0x5aaa5a5a, 0xffffff, 0x3);
  break;
 case 6:
  FUNC_0(VAR_1, VAR_2, 0x55555555,
        0xaaaaaaaa, 0xffffff, 0x3);
  break;
 case 7:
  FUNC_0(VAR_1, VAR_2, 0xaaaaaaaa,
        0xaaaaaaaa, 0xffffff, 0x3);
  break;
 case 8:
  FUNC_0(VAR_1, VAR_2, 0x55dd55dd,
        0x5ada5ada, 0xffffff, 0x3);
  break;
 case 9:
  FUNC_0(VAR_1, VAR_2, 0x55dd55dd,
        0x5ada5ada, 0xffffff, 0x3);
  break;
 case 10:
  FUNC_0(VAR_1, VAR_2, 0x55dd55dd,
        0x5ada5ada, 0xffffff, 0x3);
  break;
 case 11:
  FUNC_0(VAR_1, VAR_2, 0x55dd55dd,
        0x5ada5ada, 0xffffff, 0x3);
  break;
 case 12:
  FUNC_0(VAR_1, VAR_2, 0x55dd55dd,
        0x5ada5ada, 0xffffff, 0x3);
  break;
 case 13:
  FUNC_0(VAR_1, VAR_2, 0x5fff5fff,
        0xaaaaaaaa, 0xffffff, 0x3);
  break;
 case 14:
  FUNC_0(VAR_1, VAR_2, 0x5fff5fff,
        0x5ada5ada, 0xffffff, 0x3);
  break;
 case 15:
  FUNC_0(VAR_1, VAR_2, 0x55dd55dd,
        0xaaaaaaaa, 0xffffff, 0x3);
  break;
 default:
  break;
 }
}
