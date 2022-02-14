
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int radio_tx_subchans; scalar_t__ radio_tx_rds_controls; } ;
struct v4l2_modulator {scalar_t__ index; int capability; int txsubchans; int rangehigh; int rangelow; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 struct vivid_dev* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_9, void *VAR_10, struct v4l2_modulator *VAR_11)
{
 struct vivid_dev *VAR_12 = FUNC_1(VAR_9);

 if (VAR_11->index > 0)
  return -VAR_1;

 FUNC_0(VAR_11->name, "AM/FM/SW Transmitter", sizeof(VAR_11->name));
 VAR_11->capability = VAR_4 | VAR_8 |
   VAR_3 | VAR_5 |
   (VAR_12->radio_tx_rds_controls ?
    VAR_7 :
    VAR_6);
 VAR_11->rangelow = VAR_0;
 VAR_11->rangehigh = VAR_2;
 VAR_11->txsubchans = VAR_12->radio_tx_subchans;
 return 0;
}
