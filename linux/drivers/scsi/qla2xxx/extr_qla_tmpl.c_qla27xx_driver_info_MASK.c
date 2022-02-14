
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qla27xx_fwdt_template {int* driver_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static void
FUNC_2(struct qla27xx_fwdt_template *VAR_1)
{
 uint8_t VAR_2[] = { 0, 0, 0, 0, 0, 0 };

 FUNC_0(FUNC_1(VAR_0,
       "%hhu.%hhu.%hhu.%hhu.%hhu.%hhu",
       VAR_2+0, VAR_2+1, VAR_2+2, VAR_2+3, VAR_2+4, VAR_2+5) != 6);

 VAR_1->driver_info[0] = VAR_2[3] << 24 | VAR_2[2] << 16 | VAR_2[1] << 8 | VAR_2[0];
 VAR_1->driver_info[1] = VAR_2[5] << 8 | VAR_2[4];
 VAR_1->driver_info[2] = 0x12345678;
}
