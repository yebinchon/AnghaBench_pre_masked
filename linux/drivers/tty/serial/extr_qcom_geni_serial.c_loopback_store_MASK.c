
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qcom_geni_serial_port {scalar_t__ loopback; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct qcom_geni_serial_port* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int ,scalar_t__*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3, const char *VAR_4,
    size_t VAR_5)
{
 struct qcom_geni_serial_port *VAR_6 = FUNC_1(VAR_2);
 u32 VAR_7;

 if (FUNC_2(VAR_4, 0, &VAR_7) || VAR_7 > VAR_1) {
  FUNC_0(VAR_2, "Invalid input\n");
  return -VAR_0;
 }
 VAR_6->loopback = VAR_7;
 return VAR_5;
}
