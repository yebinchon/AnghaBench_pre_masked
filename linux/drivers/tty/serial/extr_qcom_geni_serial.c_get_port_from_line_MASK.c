
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_geni_serial_port {int dummy; } ;


 int VAR_0 ;
 struct qcom_geni_serial_port* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct qcom_geni_serial_port VAR_3 ;
 struct qcom_geni_serial_port* VAR_4 ;

__attribute__((used)) static struct qcom_geni_serial_port *FUNC_1(int VAR_5, bool VAR_6)
{
 struct qcom_geni_serial_port *VAR_7;
 int VAR_8 = VAR_6 ? VAR_1 : VAR_2;

 if (VAR_5 < 0 || VAR_5 >= VAR_8)
  return FUNC_0(-VAR_0);

 VAR_7 = VAR_6 ? &VAR_3 : &VAR_4[VAR_5];
 return VAR_7;
}
