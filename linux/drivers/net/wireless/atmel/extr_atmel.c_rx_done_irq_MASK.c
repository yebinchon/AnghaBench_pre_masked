
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;
struct TYPE_9__ {int rx_desc_count; } ;
struct TYPE_6__ {int nwid; } ;
struct TYPE_7__ {TYPE_1__ discard; } ;
struct atmel_private {int rx_desc_head; TYPE_4__ host_info; TYPE_5__* dev; int * rx_buf; void* do_rx_crc; int frag_source; int wep_is_on; scalar_t__ probe_crc; int crc_ko_cnt; int crc_ok_cnt; TYPE_2__ wstats; } ;
struct TYPE_8__ {int rx_crc_errors; int rx_errors; } ;
struct TYPE_10__ {TYPE_3__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_5__*,...) ;
 int FUNC_1 (struct atmel_private*,struct ieee80211_hdr*,int,scalar_t__) ;
 int FUNC_2 (struct atmel_private*,int ) ;
 scalar_t__ FUNC_3 (struct atmel_private*,int ) ;
 int FUNC_4 (struct atmel_private*,int ,int) ;
 int FUNC_5 (struct atmel_private*,int ,int ) ;
 int FUNC_6 (int,unsigned char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct atmel_private*,struct ieee80211_hdr*,int,int,int) ;
 int FUNC_9 (struct atmel_private*,struct ieee80211_hdr*,int,int,int,int,int,int) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (struct atmel_private*,int,int) ;

__attribute__((used)) static void FUNC_12(struct atmel_private *VAR_15)
{
 int VAR_16;
 struct ieee80211_hdr VAR_17;

 for (VAR_16 = 0;
      FUNC_3(VAR_15, FUNC_4(VAR_15, VAR_7, VAR_15->rx_desc_head)) == VAR_9 &&
       VAR_16 < VAR_15->host_info.rx_desc_count;
      VAR_16++) {

  u16 VAR_18, VAR_19, VAR_20, VAR_21;
  u8 VAR_22 = FUNC_3(VAR_15, FUNC_4(VAR_15, VAR_13, VAR_15->rx_desc_head));
  u32 VAR_23 = 0xffffffff;

  if (VAR_22 != VAR_14) {
   if (VAR_22 == 0xc1)
    VAR_15->wstats.discard.nwid++;
   else
    VAR_15->dev->stats.rx_errors++;
   goto next;
  }

  VAR_18 = FUNC_2(VAR_15, FUNC_4(VAR_15, VAR_11, VAR_15->rx_desc_head));
  VAR_19 = FUNC_2(VAR_15, FUNC_4(VAR_15, VAR_10, VAR_15->rx_desc_head));

  if (VAR_18 < 30) {
   VAR_15->dev->stats.rx_errors++;
   goto next;
  }


  FUNC_0(VAR_15->dev, (char *)&VAR_17, VAR_19, 24);
  VAR_20 = FUNC_10(VAR_17.frame_control);
  VAR_21 = FUNC_10(VAR_17.seq_ctrl);




  if (VAR_15->probe_crc) {
   if (!VAR_15->wep_is_on || !(VAR_20 & VAR_2)) {
    VAR_15->do_rx_crc = FUNC_11(VAR_15, VAR_19, VAR_18);
   } else {
    VAR_15->do_rx_crc = FUNC_11(VAR_15, VAR_19 + 24, VAR_18 - 24);
   }
   if (VAR_15->do_rx_crc) {
    if (VAR_15->crc_ok_cnt++ > 5)
     VAR_15->probe_crc = 0;
   } else {
    if (VAR_15->crc_ko_cnt++ > 5)
     VAR_15->probe_crc = 0;
   }
  }


  if (VAR_15->do_rx_crc && (!VAR_15->wep_is_on || !(VAR_20 & VAR_2))) {
   VAR_23 = FUNC_6(0xffffffff, (unsigned char *)&VAR_17, 24);
  }
  VAR_18 -= 24;

  if ((VAR_20 & VAR_0) == VAR_3) {
   int VAR_24 = VAR_20 & VAR_1;
   u8 VAR_25 = VAR_21 & VAR_5;
   u16 VAR_26 = (VAR_21 & VAR_6) >> 4;

   if (!VAR_24 && VAR_25 == 0) {
    FUNC_8(VAR_15, &VAR_17, VAR_18, VAR_19, VAR_23);
   } else {
    FUNC_9(VAR_15, &VAR_17, VAR_18, VAR_19, VAR_23,
          VAR_26, VAR_25, VAR_24);
   }
  }

  if ((VAR_20 & VAR_0) == VAR_4) {

   FUNC_0(VAR_15->dev, (unsigned char *)&VAR_15->rx_buf, VAR_19 + 24, VAR_18);


   FUNC_7(VAR_15->frag_source);

   if (VAR_15->do_rx_crc) {

    VAR_18 -= 4;
    VAR_23 = FUNC_6(VAR_23, (unsigned char *)&VAR_15->rx_buf, VAR_18);
    if ((VAR_23 ^ 0xffffffff) != (*((u32 *)&VAR_15->rx_buf[VAR_18]))) {
     VAR_15->dev->stats.rx_crc_errors++;
     goto next;
    }
   }

   FUNC_1(VAR_15, &VAR_17, VAR_18,
            FUNC_3(VAR_15, FUNC_4(VAR_15, VAR_12, VAR_15->rx_desc_head)));
  }

next:

  FUNC_5(VAR_15, FUNC_4(VAR_15, VAR_7, VAR_15->rx_desc_head), VAR_8);

  if (VAR_15->rx_desc_head < (VAR_15->host_info.rx_desc_count - 1))
   VAR_15->rx_desc_head++;
  else
   VAR_15->rx_desc_head = 0;
 }
}
