
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int radio_rx_hw_seek_mode; int radio_rx_sig_qual; scalar_t__ radio_rx_freq; int radio_tx_subchans; int radio_rx_audmode; scalar_t__ radio_rx_rds_controls; scalar_t__ radio_rds_loop; scalar_t__ radio_rx_rds_enabled; scalar_t__ radio_rx_hw_seek_prog_lim; } ;
struct v4l2_tuner {scalar_t__ index; int capability; int signal; int afc; int rxsubchans; int audmode; int rangehigh; int rangelow; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 struct vivid_dev* FUNC_2 (struct file*) ;
 int FUNC_3 (struct vivid_dev*) ;

int FUNC_4(struct file *VAR_16, void *VAR_17, struct v4l2_tuner *VAR_18)
{
 struct vivid_dev *VAR_19 = FUNC_2(VAR_16);
 int VAR_20 = 800;
 int VAR_21;

 if (VAR_18->index > 0)
  return -VAR_1;

 FUNC_1(VAR_18->name, "AM/FM/SW Receiver", sizeof(VAR_18->name));
 VAR_18->capability = VAR_8 | VAR_12 |
    VAR_4 | VAR_9 |
    (VAR_19->radio_rx_rds_controls ?
    VAR_11 :
    VAR_10) |
    (VAR_19->radio_rx_hw_seek_prog_lim ?
    VAR_6 : 0);
 switch (VAR_19->radio_rx_hw_seek_mode) {
 case 129:
  VAR_18->capability |= VAR_5;
  break;
 case 128:
  VAR_18->capability |= VAR_7;
  break;
 case 130:
  VAR_18->capability |= VAR_7 |
      VAR_5;
  break;
 }
 VAR_18->rangelow = VAR_0;
 VAR_18->rangehigh = VAR_2;
 VAR_21 = VAR_19->radio_rx_sig_qual;
 VAR_18->signal = FUNC_0(VAR_21) > VAR_20 ? 0 :
       0xffff - ((unsigned)FUNC_0(VAR_21) * 0xffff) / VAR_20;
 VAR_18->afc = VAR_21 > VAR_20 ? 0 : VAR_21;
 if (FUNC_0(VAR_21) > VAR_20)
  VAR_18->rxsubchans = 0;
 else if (VAR_19->radio_rx_freq < VAR_3 || VAR_18->signal < 0x8000)
  VAR_18->rxsubchans = VAR_13;
 else if (VAR_19->radio_rds_loop && !(VAR_19->radio_tx_subchans & VAR_15))
  VAR_18->rxsubchans = VAR_13;
 else
  VAR_18->rxsubchans = VAR_15;
 if (VAR_19->radio_rx_rds_enabled &&
     (!VAR_19->radio_rds_loop || (VAR_19->radio_tx_subchans & VAR_14)) &&
     VAR_19->radio_rx_freq >= VAR_3 && VAR_18->signal >= 0xc000)
  VAR_18->rxsubchans |= VAR_14;
 if (VAR_19->radio_rx_rds_controls)
  FUNC_3(VAR_19);
 VAR_18->audmode = VAR_19->radio_rx_audmode;
 return 0;
}
