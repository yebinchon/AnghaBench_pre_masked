
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct vimc_deb_device {unsigned int* src_frame; TYPE_1__ sink_fmt; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vimc_deb_device *VAR_0,
        unsigned int VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3[3])
{
 unsigned int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0->sink_fmt.width, 3);
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
  VAR_0->src_frame[VAR_5 + VAR_4] = VAR_3[VAR_4];
}
