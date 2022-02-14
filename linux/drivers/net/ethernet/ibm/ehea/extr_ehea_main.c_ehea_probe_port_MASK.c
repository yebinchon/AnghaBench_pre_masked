
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ehea_port {int netdev; } ;
struct ehea_adapter {struct ehea_port** port; } ;
struct device_node {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ehea_adapter* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct ehea_adapter*) ;
 struct device_node* FUNC_2 (struct ehea_adapter*,int ) ;
 struct ehea_port* FUNC_3 (struct ehea_adapter*,int ) ;
 int FUNC_4 (struct ehea_adapter*) ;
 struct ehea_port* FUNC_5 (struct ehea_adapter*,int ,struct device_node*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char const*,char*,int *) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct ehea_adapter *VAR_7 = FUNC_0(VAR_3);
 struct ehea_port *VAR_8;
 struct device_node *VAR_9 = ((void*)0);
 int VAR_10;

 u32 VAR_11;

 FUNC_10(VAR_5, "%d", &VAR_11);

 VAR_8 = FUNC_3(VAR_7, VAR_11);

 if (VAR_8) {
  FUNC_6(VAR_8->netdev, "adding port with logical port id=%d failed: port already configured\n",
       VAR_11);
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_11);

 if (!VAR_9) {
  FUNC_9("no logical port with id %d found\n", VAR_11);
  return -VAR_1;
 }

 if (FUNC_1(VAR_7)) {
  FUNC_8("creating MR failed\n");
  FUNC_7(VAR_9);
  return -VAR_2;
 }

 VAR_8 = FUNC_5(VAR_7, VAR_11, VAR_9);

 FUNC_7(VAR_9);

 if (VAR_8) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   if (!VAR_7->port[VAR_10]) {
    VAR_7->port[VAR_10] = VAR_8;
    break;
   }

  FUNC_6(VAR_8->netdev, "added: (logical port id=%d)\n",
       VAR_11);
 } else {
  FUNC_4(VAR_7);
  return -VAR_2;
 }

 return (ssize_t) VAR_6;
}
