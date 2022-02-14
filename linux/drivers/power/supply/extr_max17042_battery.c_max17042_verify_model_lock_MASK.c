
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct max17042_chip {TYPE_2__* pdata; } ;
struct TYPE_4__ {TYPE_1__* config_data; } ;
struct TYPE_3__ {int cell_char_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct max17042_chip*,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(struct max17042_chip *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_4->pdata->config_data->cell_char_tbl);
 u16 *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_3(VAR_4, VAR_3, VAR_7,
    VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  if (VAR_7[VAR_5])
   VAR_8 = -VAR_0;

 FUNC_2(VAR_7);
 return VAR_8;
}
