
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int cec_events; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct cros_ec_device {TYPE_2__ event_data; } ;
struct cros_ec_cec {int adap; struct cros_ec_device* cros_ec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct cros_ec_cec *VAR_5)
{
 struct cros_ec_device *VAR_6 = VAR_5->cros_ec;
 uint32_t VAR_7 = VAR_6->event_data.data.cec_events;

 if (VAR_7 & VAR_4)
  FUNC_0(VAR_5->adap,
       VAR_2);


 if (VAR_7 & VAR_3)
  FUNC_0(VAR_5->adap,
       VAR_0 |
       VAR_1);
}
