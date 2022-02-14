
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct max17042_chip {TYPE_1__* pdata; } ;
struct TYPE_4__ {int cell_char_tbl; } ;
struct TYPE_3__ {TYPE_2__* config_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct max17042_chip*) ;
 int FUNC_4 (struct max17042_chip*,int ,int *,int) ;
 int FUNC_5 (struct max17042_chip*,int ,int *,int) ;
 int FUNC_6 (struct max17042_chip*) ;
 int FUNC_7 (struct max17042_chip*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct max17042_chip *VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_3->pdata->config_data->cell_char_tbl);
 u16 *VAR_6;

 VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(VAR_3);
 FUNC_7(VAR_3, VAR_2,
    VAR_5);
 FUNC_5(VAR_3, VAR_2, VAR_6,
    VAR_5);

 VAR_4 = FUNC_4(
  VAR_3,
  VAR_3->pdata->config_data->cell_char_tbl,
  VAR_6,
  VAR_5);

 FUNC_3(VAR_3);
 FUNC_2(VAR_6);

 return VAR_4;
}
