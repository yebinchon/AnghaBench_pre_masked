
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hal_com_data {scalar_t__ sdio_himr; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct adapter *VAR_2)
{
 struct hal_com_data *VAR_3;


 VAR_3 = FUNC_0(VAR_2);
 VAR_3->sdio_himr = (u32)( VAR_1 |

        VAR_0 |
        0);
}
