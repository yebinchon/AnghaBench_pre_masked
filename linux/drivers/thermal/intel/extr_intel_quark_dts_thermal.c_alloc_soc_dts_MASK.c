
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct soc_sensor_entry {int locked; int store_dts_enable; int store_ptps; int tzone; } ;


 int VAR_0 ;
 struct soc_sensor_entry* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (struct soc_sensor_entry*) ;
 struct soc_sensor_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int,struct soc_sensor_entry*,int *,int *,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_13 ;

__attribute__((used)) static struct soc_sensor_entry *FUNC_11(void)
{
 struct soc_sensor_entry *VAR_14;
 int VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_1);
 if (!VAR_14) {
  VAR_15 = -VAR_0;
  return FUNC_0(-VAR_0);
 }


 VAR_15 = FUNC_3(VAR_10, VAR_2,
       VAR_5, &VAR_16);
 if (VAR_15)
  goto err_ret;

 if (VAR_16 & VAR_3) {
  VAR_14->locked = 1;
  VAR_17 = VAR_7;
 } else {
  VAR_14->locked = 0;
  VAR_17 = VAR_8;
 }


 if (!VAR_14->locked) {

  VAR_15 = FUNC_3(VAR_10, VAR_2,
        VAR_4,
        &VAR_14->store_dts_enable);
  if (VAR_15)
   goto err_ret;


  VAR_15 = FUNC_3(VAR_10, VAR_2,
        VAR_6,
        &VAR_14->store_ptps);
  if (VAR_15)
   goto err_ret;
 }

 VAR_14->tzone = FUNC_9("quark_dts",
   VAR_9,
   VAR_17,
   VAR_14, &VAR_13, ((void*)0), 0, VAR_12);
 if (FUNC_1(VAR_14->tzone)) {
  VAR_15 = FUNC_2(VAR_14->tzone);
  goto err_ret;
 }

 FUNC_6(&VAR_11);
 VAR_15 = FUNC_8(VAR_14->tzone);
 FUNC_7(&VAR_11);
 if (VAR_15)
  goto err_aux_status;

 return VAR_14;

err_aux_status:
 FUNC_10(VAR_14->tzone);
err_ret:
 FUNC_4(VAR_14);
 return FUNC_0(VAR_15);
}
