
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revision_number_major; } ;
struct smiapp_sensor {int frame_skip; TYPE_1__ minfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smiapp_sensor*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct smiapp_sensor *VAR_2)
{
 if (VAR_2->minfo.revision_number_major < 0x03)
  VAR_2->frame_skip = 1;



 FUNC_0(VAR_2, VAR_1, 59);
 FUNC_0(
  VAR_2, VAR_0, 6000);

 return 0;
}
