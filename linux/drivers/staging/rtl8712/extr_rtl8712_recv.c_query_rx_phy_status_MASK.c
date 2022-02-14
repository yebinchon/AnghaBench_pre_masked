
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mcs_rate; int signal_qual; int* rx_mimo_signal_qual; int signal_strength; scalar_t__ htc; } ;
struct TYPE_8__ {TYPE_2__ attrib; scalar_t__ rx_head; } ;
struct TYPE_7__ {TYPE_4__ hdr; } ;
union recv_frame {TYPE_3__ u; } ;
typedef int u8 ;
typedef int u32 ;
struct recv_stat {int dummy; } ;
struct phy_stat {int phydw1; } ;
struct phy_cck_rx_status {int cck_agc_rpt; int sq_rpt; } ;
struct TYPE_5__ {int rf_config; } ;
struct _adapter {TYPE_1__ registrypriv; } ;
typedef int s8 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct _adapter *VAR_3,
    union recv_frame *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7;
 struct recv_stat *VAR_8 = (struct recv_stat *)VAR_4->u.hdr.rx_head;
 struct phy_stat *VAR_9 = (struct phy_stat *)(VAR_8 + 1);
 u8 *VAR_10 = (u8 *)(VAR_8 + 1);
 s8 VAR_11[4], VAR_12;
 u8 VAR_13;
 u32 VAR_14, VAR_15 = 0;
 u8 VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 struct phy_cck_rx_status *VAR_19;
 u8 VAR_20;


 VAR_16 = (VAR_4->u.hdr.attrib.mcs_rate <= 3 ? 1 : 0);
 if (VAR_16) {
  u8 VAR_21;


  VAR_19 = (struct phy_cck_rx_status *)VAR_9;




  if (!VAR_18) {
   VAR_21 = VAR_19->cck_agc_rpt & 0xc0;
   VAR_21 >>= 6;
   switch (VAR_21) {





   case 0x3:
    VAR_12 = -40 - (VAR_19->cck_agc_rpt &
          0x3e);
    break;
   case 0x2:
    VAR_12 = -20 - (VAR_19->cck_agc_rpt &
          0x3e);
    break;
   case 0x1:
    VAR_12 = -2 - (VAR_19->cck_agc_rpt &
          0x3e);
    break;
   case 0x0:
    VAR_12 = 14 - (VAR_19->cck_agc_rpt &
          0x3e);
    break;
   }
  } else {
   VAR_21 = ((u8)(FUNC_1(VAR_9->phydw1) >> 8)) &
     0x60;
   VAR_21 >>= 5;
   switch (VAR_21) {
   case 0x3:
    VAR_12 = -40 - ((VAR_19->cck_agc_rpt &
          0x1f) << 1);
    break;
   case 0x2:
    VAR_12 = -20 - ((VAR_19->cck_agc_rpt &
          0x1f) << 1);
    break;
   case 0x1:
    VAR_12 = -2 - ((VAR_19->cck_agc_rpt &
          0x1f) << 1);
    break;
   case 0x0:
    VAR_12 = 14 - ((VAR_19->cck_agc_rpt &
          0x1f) << 1);
    break;
   }
  }
  VAR_13 = FUNC_2(VAR_12);


  VAR_13 += 6;
  if (VAR_13 > 100)
   VAR_13 = 100;

  if (VAR_13 > 34 && VAR_13 <= 42)
   VAR_13 -= 2;
  else if (VAR_13 > 26 && VAR_13 <= 34)
   VAR_13 -= 6;
  else if (VAR_13 > 14 && VAR_13 <= 26)
   VAR_13 -= 8;
  else if (VAR_13 > 4 && VAR_13 <= 14)
   VAR_13 -= 4;



  if (VAR_13 > 40) {
   VAR_20 = 100;
  } else {
   VAR_20 = VAR_19->sq_rpt;
   if (VAR_19->sq_rpt > 64)
    VAR_20 = 0;
   else if (VAR_19->sq_rpt < 20)
    VAR_20 = 100;
   else
    VAR_20 = ((64 - VAR_20) * 100) / 44;
  }
  VAR_4->u.hdr.attrib.signal_qual = VAR_20;
  VAR_4->u.hdr.attrib.rx_mimo_signal_qual[0] = VAR_20;
  VAR_4->u.hdr.attrib.rx_mimo_signal_qual[1] = -1;
 } else {

  for (VAR_5 = 0; VAR_5 < ((VAR_3->registrypriv.rf_config) &
       0x0f); VAR_5++) {
   VAR_17++;
   VAR_11[VAR_5] = ((VAR_10[VAR_0 + VAR_5]
        & 0x3F) * 2) - 110;

   VAR_14 = FUNC_2(VAR_11[VAR_5]);
   VAR_15 += VAR_14;
  }



  VAR_12 = (((VAR_10[VAR_1]) >> 1) & 0x7f)
        - 106;
  VAR_13 = FUNC_2(VAR_12);

  {

   if (VAR_4->u.hdr.attrib.htc &&
       VAR_4->u.hdr.attrib.mcs_rate >= 20 &&
       VAR_4->u.hdr.attrib.mcs_rate <= 27) {

    VAR_6 = 2;
   } else {

    VAR_6 = 1;
   }
   for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
    VAR_7 = FUNC_0((VAR_10
          [VAR_2 + VAR_5]));
    VAR_4->u.hdr.attrib.signal_qual =
      (u8)(VAR_7 & 0xff);
    VAR_4->u.hdr.attrib.rx_mimo_signal_qual[VAR_5] =
      (u8)(VAR_7 & 0xff);
   }
  }
 }




 if (VAR_16) {
  VAR_4->u.hdr.attrib.signal_strength =
    (u8)FUNC_3(VAR_13);
 } else {
  if (VAR_17 != 0)
   VAR_4->u.hdr.attrib.signal_strength =
     (u8)(FUNC_3(VAR_15 /=
     VAR_17));
 }
}
