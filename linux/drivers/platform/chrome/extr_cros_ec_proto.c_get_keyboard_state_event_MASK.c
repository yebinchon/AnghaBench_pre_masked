
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int data; int event_type; } ;
struct cros_ec_device {int event_size; TYPE_1__ event_data; } ;
struct cros_ec_command {int insize; int data; scalar_t__ outsize; int command; scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cros_ec_device *VAR_2)
{
 u8 VAR_3[sizeof(struct cros_ec_command) +
    sizeof(VAR_2->event_data.data)];
 struct cros_ec_command *VAR_4 = (struct cros_ec_command *)&VAR_3;

 VAR_4->version = 0;
 VAR_4->command = VAR_0;
 VAR_4->insize = sizeof(VAR_2->event_data.data);
 VAR_4->outsize = 0;

 VAR_2->event_size = FUNC_0(VAR_2, VAR_4);
 VAR_2->event_data.event_type = VAR_1;
 FUNC_1(&VAR_2->event_data.data, VAR_4->data,
        sizeof(VAR_2->event_data.data));

 return VAR_2->event_size;
}
