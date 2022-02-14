
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int r_offset; int r_length; } ;
struct msb_data {int addr_valid; TYPE_2__ reg_addr; TYPE_1__* card; } ;
struct memstick_request {int dummy; } ;
struct TYPE_3__ {struct memstick_request current_mrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct memstick_request*,int ,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(struct msb_data *VAR_2, int VAR_3, int VAR_4)
{
 struct memstick_request *VAR_5 = &VAR_2->card->current_mrq;

 if (VAR_2->reg_addr.r_offset != VAR_3 ||
     VAR_2->reg_addr.r_length != VAR_4 || !VAR_2->addr_valid) {

  VAR_2->reg_addr.r_offset = VAR_3;
  VAR_2->reg_addr.r_length = VAR_4;
  VAR_2->addr_valid = 1;

  FUNC_0(VAR_5, VAR_1,
   &VAR_2->reg_addr, sizeof(VAR_2->reg_addr));
  return 0;
 }

 FUNC_0(VAR_5, VAR_0, ((void*)0), VAR_4);
 return 1;
}
