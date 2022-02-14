
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct isci_remote_device {int dummy; } ;
struct isci_host {struct isci_remote_device** device_table; int available_remote_nodes; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isci_remote_device*) ;
 size_t FUNC_1 (int *,int ) ;

enum sci_status FUNC_2(struct isci_host *VAR_3,
           struct isci_remote_device *VAR_4,
           u16 *VAR_5)
{
 u16 VAR_6;
 u32 VAR_7 = FUNC_0(VAR_4);

 VAR_6 = FUNC_1(
  &VAR_3->available_remote_nodes, VAR_7
  );

 if (VAR_6 != VAR_0) {
  VAR_3->device_table[VAR_6] = VAR_4;

  *VAR_5 = VAR_6;

  return VAR_2;
 }

 return VAR_1;
}
