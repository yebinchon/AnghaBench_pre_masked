
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lba_map_segment_multiplier; int lba_map_segment_size; } ;
struct se_device {TYPE_2__ t10_alua; TYPE_1__* transport; } ;
struct se_cmd {struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {unsigned char (* get_device_type ) (struct se_device*) ;} ;


 int FUNC_0 (int ,unsigned char*) ;
 unsigned char FUNC_1 (struct se_device*) ;

__attribute__((used)) static sense_reason_t
FUNC_2(struct se_cmd *VAR_0, unsigned char *VAR_1)
{
 struct se_device *VAR_2 = VAR_0->se_dev;

 VAR_1[0] = VAR_2->transport->get_device_type(VAR_2);
 VAR_1[3] = 0x0c;
 FUNC_0(VAR_2->t10_alua.lba_map_segment_size, &VAR_1[8]);
 FUNC_0(VAR_2->t10_alua.lba_map_segment_multiplier, &VAR_1[12]);

 return 0;
}
