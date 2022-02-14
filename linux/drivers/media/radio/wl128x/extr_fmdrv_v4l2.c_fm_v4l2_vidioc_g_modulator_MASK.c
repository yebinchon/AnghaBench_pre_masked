
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_modulator {scalar_t__ index; int txsubchans; int capability; } ;
struct TYPE_4__ {scalar_t__ flag; } ;
struct TYPE_3__ {scalar_t__ aud_mode; TYPE_2__ rds; } ;
struct fmdev {scalar_t__ curr_fmmode; TYPE_1__ tx_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct fmdev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_11, void *VAR_12,
  struct v4l2_modulator *VAR_13)
{
 struct fmdev *VAR_14 = FUNC_0(VAR_11);

 if (VAR_13->index != 0)
  return -VAR_0;

 if (VAR_14->curr_fmmode != VAR_2)
  return -VAR_1;

 VAR_13->txsubchans = ((VAR_14->tx_data.aud_mode == VAR_4) ?
    VAR_10 : VAR_8) |
    ((VAR_14->tx_data.rds.flag == VAR_3) ?
    VAR_9 : 0);

 VAR_13->capability = VAR_7 | VAR_6 |
    VAR_5;

 return 0;
}
