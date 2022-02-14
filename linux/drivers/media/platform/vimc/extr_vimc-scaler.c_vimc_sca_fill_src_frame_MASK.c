
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int height; unsigned int width; } ;
struct vimc_sca_device {TYPE_1__ sink_fmt; } ;


 int FUNC_0 (struct vimc_sca_device const* const,unsigned int,unsigned int,int const* const) ;

__attribute__((used)) static void FUNC_1(const struct vimc_sca_device *const VAR_0,
        const u8 *const VAR_1)
{
 unsigned int VAR_2, VAR_3;



 for (VAR_2 = 0; VAR_2 < VAR_0->sink_fmt.height; VAR_2++)
  for (VAR_3 = 0; VAR_3 < VAR_0->sink_fmt.width; VAR_3++)
   FUNC_0(VAR_0, VAR_2, VAR_3, VAR_1);
}
