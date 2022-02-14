
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * cec_message; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct cros_ec_device {unsigned int event_size; TYPE_2__ event_data; } ;
struct TYPE_6__ {unsigned int len; int msg; } ;
struct cros_ec_cec {TYPE_3__ rx_msg; int adap; struct cros_ec_device* cros_ec; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct cros_ec_cec *VAR_0)
{
 struct cros_ec_device *VAR_1 = VAR_0->cros_ec;
 uint8_t *VAR_2 = VAR_1->event_data.data.cec_message;
 unsigned int VAR_3 = VAR_1->event_size;

 VAR_0->rx_msg.len = VAR_3;
 FUNC_1(VAR_0->rx_msg.msg, VAR_2, VAR_3);

 FUNC_0(VAR_0->adap, &VAR_0->rx_msg);
}
