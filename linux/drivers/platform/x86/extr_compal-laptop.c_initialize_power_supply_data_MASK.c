
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compal_data {int bat_serial_number; scalar_t__* bat_model_name; scalar_t__* bat_manufacturer_name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct compal_data *VAR_6)
{
 FUNC_0(VAR_0,
     VAR_6->bat_manufacturer_name,
     VAR_1);
 VAR_6->bat_manufacturer_name[VAR_1] = 0;

 FUNC_0(VAR_2,
     VAR_6->bat_model_name,
     VAR_3);
 VAR_6->bat_model_name[VAR_3] = 0;

 FUNC_2(VAR_6->bat_serial_number, VAR_5 + 1, "%d",
    FUNC_1(VAR_4));
}
