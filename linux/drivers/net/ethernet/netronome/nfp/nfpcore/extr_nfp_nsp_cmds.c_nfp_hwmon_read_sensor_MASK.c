
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_sensors {int assembly_3v3_power; int assembly_12v_power; int assembly_power; int chip_temp; } ;
struct nfp_nsp {int dummy; } ;
struct nfp_cpp {int dummy; } ;
typedef int s ;
typedef enum nfp_nsp_sensor_id { ____Placeholder_nfp_nsp_sensor_id } nfp_nsp_sensor_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct nfp_nsp*) ;




 int FUNC_2 (struct nfp_nsp*) ;
 long FUNC_3 (int ) ;
 int FUNC_4 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_5 (struct nfp_cpp*) ;
 int FUNC_6 (struct nfp_nsp*,int ,struct nfp_sensors*,int) ;

int FUNC_7(struct nfp_cpp *VAR_1, enum nfp_nsp_sensor_id VAR_2,
     long *VAR_3)
{
 struct nfp_sensors VAR_4;
 struct nfp_nsp *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_1);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_6(VAR_5, FUNC_0(VAR_2), &VAR_4, sizeof(VAR_4));
 FUNC_4(VAR_5);

 if (VAR_6 < 0)
  return VAR_6;

 switch (VAR_2) {
 case 128:
  *VAR_3 = FUNC_3(VAR_4.chip_temp);
  break;
 case 129:
  *VAR_3 = FUNC_3(VAR_4.assembly_power);
  break;
 case 131:
  *VAR_3 = FUNC_3(VAR_4.assembly_12v_power);
  break;
 case 130:
  *VAR_3 = FUNC_3(VAR_4.assembly_3v3_power);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
