
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int card; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ tuner_type; TYPE_1__ radio; int name; } ;
struct cx88_core {TYPE_2__ board; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct file *VAR_9, struct cx88_core *VAR_10,
    struct v4l2_capability *VAR_11)
{
 FUNC_0(VAR_11->card, VAR_10->board.name, sizeof(VAR_11->card));
 VAR_11->capabilities = VAR_4 | VAR_5 |
       VAR_8 | VAR_7 |
       VAR_2;
 if (VAR_10->board.tuner_type != VAR_1)
  VAR_11->capabilities |= VAR_6;
 if (VAR_10->board.radio.type == VAR_0)
  VAR_11->capabilities |= VAR_3;
 return 0;
}
