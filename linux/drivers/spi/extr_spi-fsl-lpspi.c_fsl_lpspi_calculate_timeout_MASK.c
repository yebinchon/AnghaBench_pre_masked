
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed_hz; } ;
struct fsl_lpspi_data {TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct fsl_lpspi_data *VAR_1,
           int VAR_2)
{
 unsigned long VAR_3 = 0;


 VAR_3 = (8 + 4) * VAR_2 / VAR_1->config.speed_hz;


 VAR_3 += 1;


 return FUNC_0(2 * VAR_3 * VAR_0);
}
