
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ audioroute; int gpio2; int gpio1; int gpio0; int gpio3; } ;
struct TYPE_4__ {TYPE_1__ radio; } ;
struct cx88_core {int tvaudio; TYPE_2__ board; scalar_t__ sd_wm8775; } ;
struct cx8800_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cx88_core*,int ,int ,...) ;
 int FUNC_1 (struct cx88_core*,int ,int) ;
 int FUNC_2 (struct cx88_core*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct file*) ;
 struct cx8800_dev* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_11)
{
 struct cx8800_dev *VAR_12 = FUNC_5(VAR_11);
 struct cx88_core *VAR_13 = VAR_12->core;
 int VAR_14 = FUNC_4(VAR_11);

 if (VAR_14)
  return VAR_14;

 FUNC_3(VAR_3, VAR_13->board.radio.gpio3);
 FUNC_3(VAR_0, VAR_13->board.radio.gpio0);
 FUNC_3(VAR_1, VAR_13->board.radio.gpio1);
 FUNC_3(VAR_2, VAR_13->board.radio.gpio2);
 if (VAR_13->board.radio.audioroute) {
  if (VAR_13->sd_wm8775) {
   FUNC_0(VAR_13, VAR_7, VAR_9,
     VAR_13->board.radio.audioroute, 0, 0);
  }

  VAR_13->tvaudio = VAR_6;
  FUNC_2(VAR_13);
 } else {

  VAR_13->tvaudio = VAR_5;
  FUNC_2(VAR_13);
  FUNC_1(VAR_13, VAR_4, 1);
 }
 FUNC_0(VAR_13, VAR_10, VAR_8);
 return 0;
}
