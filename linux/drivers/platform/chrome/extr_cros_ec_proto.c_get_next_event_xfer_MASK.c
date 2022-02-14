
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cros_ec_device {int event_size; int event_data; } ;
struct cros_ec_command {int version; int data; scalar_t__ outsize; int insize; int command; } ;


 int VAR_0 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cros_ec_device *VAR_1,
          struct cros_ec_command *VAR_2,
          int VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 VAR_2->version = VAR_3;
 VAR_2->command = VAR_0;
 VAR_2->insize = VAR_4;
 VAR_2->outsize = 0;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 > 0) {
  VAR_1->event_size = VAR_5 - 1;
  FUNC_1(&VAR_1->event_data, VAR_2->data, VAR_5);
 }

 return VAR_5;
}
