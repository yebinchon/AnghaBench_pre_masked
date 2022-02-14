
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_sensor_entry {int tzone; int store_ptps; int store_dts_enable; int locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct soc_sensor_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct soc_sensor_entry *VAR_5)
{
 if (VAR_5) {
  if (!VAR_5->locked) {
   FUNC_2(&VAR_4);
   FUNC_0(VAR_3, VAR_0,
           VAR_1,
           VAR_5->store_dts_enable);

   FUNC_0(VAR_3, VAR_0,
           VAR_2,
           VAR_5->store_ptps);
   FUNC_3(&VAR_4);
  }
  FUNC_4(VAR_5->tzone);
  FUNC_1(VAR_5);
 }
}
