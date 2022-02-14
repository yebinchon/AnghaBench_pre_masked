
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int index; } ;
struct TYPE_4__ {unsigned int index; } ;
struct ptp_clock_request {TYPE_1__ perout; int type; TYPE_2__ extts; } ;
struct ptp_clock_info {int (* enable ) (struct ptp_clock_info*,struct ptp_clock_request*,int ) ;} ;
typedef int rq ;
typedef enum ptp_pin_function { ____Placeholder_ptp_pin_function } ptp_pin_function ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct ptp_clock_request*,int ,int) ;
 int FUNC_1 (struct ptp_clock_info*,struct ptp_clock_request*,int ) ;
 int FUNC_2 (struct ptp_clock_info*,struct ptp_clock_request*,int ) ;

__attribute__((used)) static int FUNC_3(struct ptp_clock_info *VAR_3,
          enum ptp_pin_function VAR_4, unsigned int VAR_5)
{
 struct ptp_clock_request VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));

 switch (VAR_4) {
 case 130:
  break;
 case 131:
  VAR_6.type = VAR_1;
  VAR_6.extts.index = VAR_5;
  VAR_7 = VAR_3->enable(VAR_3, &VAR_6, 0);
  break;
 case 129:
  VAR_6.type = VAR_2;
  VAR_6.perout.index = VAR_5;
  VAR_7 = VAR_3->enable(VAR_3, &VAR_6, 0);
  break;
 case 128:
  break;
 default:
  return -VAR_0;
 }

 return VAR_7;
}
