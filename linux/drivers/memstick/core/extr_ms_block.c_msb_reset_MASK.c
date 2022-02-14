
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int system; } ;
struct TYPE_4__ {TYPE_1__ param; } ;
struct msb_data {int read_only; TYPE_2__ regs; struct memstick_dev* card; } ;
struct memstick_host {int (* set_param ) (struct memstick_host*,int ,int ) ;} ;
struct memstick_dev {struct memstick_host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 int FUNC_1 (struct msb_data*) ;
 int FUNC_2 (struct msb_data*,int ) ;
 int FUNC_3 (struct msb_data*) ;
 int FUNC_4 (struct memstick_host*,int ,int ) ;
 int FUNC_5 (struct memstick_host*,int ,int ) ;
 int FUNC_6 (struct memstick_host*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct msb_data *VAR_10, bool VAR_11)
{

 bool VAR_12 = VAR_10->regs.param.system & VAR_8;
 struct memstick_dev *VAR_13 = VAR_10->card;
 struct memstick_host *VAR_14 = VAR_13->host;
 int VAR_15;


 VAR_10->regs.param.system = VAR_7;

 if (VAR_11) {
  VAR_15 = VAR_14->set_param(VAR_14,
     VAR_3, VAR_4);
  if (VAR_15)
   goto out_error;

  FUNC_1(VAR_10);

  VAR_15 = VAR_14->set_param(VAR_14,
     VAR_3, VAR_5);
  if (VAR_15)
   goto out_error;

  VAR_15 = VAR_14->set_param(VAR_14,
     VAR_2, VAR_6);
  if (VAR_15) {
out_error:
   FUNC_0("Failed to reset the host controller");
   VAR_10->read_only = 1;
   return -VAR_0;
  }
 }

 VAR_15 = FUNC_2(VAR_10, VAR_9);
 if (VAR_15) {
  FUNC_0("Failed to reset the card");
  VAR_10->read_only = 1;
  return -VAR_1;
 }


 if (VAR_12)
  FUNC_3(VAR_10);
 return 0;
}
