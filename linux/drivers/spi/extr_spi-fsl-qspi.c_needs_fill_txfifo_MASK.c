
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_qspi {TYPE_1__* devtype_data; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct fsl_qspi *VAR_1)
{
 return VAR_1->devtype_data->quirks & VAR_0;
}
