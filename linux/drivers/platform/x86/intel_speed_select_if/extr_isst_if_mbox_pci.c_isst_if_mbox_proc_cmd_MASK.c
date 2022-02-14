
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct isst_if_mbox_cmd {int req_data; int parameter; int logical_cpu; int sub_command; int command; } ;
struct isst_if_device {int mutex; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (struct pci_dev*,struct isst_if_mbox_cmd*) ;
 scalar_t__ FUNC_3 (struct isst_if_mbox_cmd*) ;
 scalar_t__ FUNC_4 (struct isst_if_mbox_cmd*) ;
 int FUNC_5 (int ,int ,int ,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct isst_if_device* FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static long FUNC_9(u8 *VAR_3, int *VAR_4, int VAR_5)
{
 struct isst_if_mbox_cmd *VAR_6;
 struct isst_if_device *VAR_7;
 struct pci_dev *VAR_8;
 int VAR_9;

 VAR_6 = (struct isst_if_mbox_cmd *)VAR_3;

 if (FUNC_3(VAR_6))
  return -VAR_1;

 if (FUNC_4(VAR_6) && !FUNC_0(VAR_0))
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_6->logical_cpu, 1, 30, 1);
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_8(VAR_8);
 if (!VAR_7)
  return -VAR_1;





 FUNC_6(&VAR_7->mutex);
 VAR_9 = FUNC_2(VAR_8, VAR_6);
 if (!VAR_9 && !VAR_5 && FUNC_4(VAR_6))
  VAR_9 = FUNC_5(VAR_6->command,
         VAR_6->sub_command,
         VAR_6->logical_cpu, 1,
         VAR_6->parameter,
         VAR_6->req_data);
 FUNC_7(&VAR_7->mutex);
 if (VAR_9)
  return VAR_9;

 *VAR_4 = 0;

 return 0;
}
