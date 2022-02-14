
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ec_response_host_event_mask {int mask; } ;
struct cros_ec_device {int dummy; } ;
struct cros_ec_command {int insize; scalar_t__ data; scalar_t__ outsize; scalar_t__ version; int command; } ;


 int VAR_0 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;

__attribute__((used)) static int FUNC_1(struct cros_ec_device *VAR_1,
         struct cros_ec_command *VAR_2,
         uint32_t *VAR_3)
{
 struct ec_response_host_event_mask *VAR_4;
 int VAR_5;

 VAR_2->command = VAR_0;
 VAR_2->version = 0;
 VAR_2->outsize = 0;
 VAR_2->insize = sizeof(*VAR_4);

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 > 0) {
  VAR_4 = (struct ec_response_host_event_mask *)VAR_2->data;
  *VAR_3 = VAR_4->mask;
 }

 return VAR_5;
}
