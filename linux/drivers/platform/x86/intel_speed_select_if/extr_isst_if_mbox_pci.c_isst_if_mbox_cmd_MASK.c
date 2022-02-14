
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct isst_if_mbox_cmd {int req_data; int parameter; int sub_command; int command; int resp_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_6,
       struct isst_if_mbox_cmd *VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10;


 VAR_8 = VAR_2;
 do {
  VAR_10 = FUNC_2(VAR_6, VAR_5,
         &VAR_9);
  if (VAR_10)
   return VAR_10;

  if (VAR_9 & FUNC_0(VAR_3)) {
   VAR_10 = -VAR_0;
   continue;
  }
  VAR_10 = 0;
  break;
 } while (--VAR_8);

 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_6, VAR_4,
         VAR_7->req_data);
 if (VAR_10)
  return VAR_10;


 VAR_9 = FUNC_0(VAR_3) |
        (VAR_7->parameter & FUNC_1(13, 0)) << 16 |
        (VAR_7->sub_command << 8) |
        VAR_7->command;

 VAR_10 = FUNC_3(VAR_6, VAR_5, VAR_9);
 if (VAR_10)
  return VAR_10;


 VAR_8 = VAR_2;
 do {
  VAR_10 = FUNC_2(VAR_6, VAR_5,
         &VAR_9);
  if (VAR_10)
   return VAR_10;

  if (VAR_9 & FUNC_0(VAR_3)) {
   VAR_10 = -VAR_0;
   continue;
  }

  if (VAR_9 & 0xff)
   return -VAR_1;

  VAR_10 = FUNC_2(VAR_6, VAR_4, &VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_7->resp_data = VAR_9;
  VAR_10 = 0;
  break;
 } while (--VAR_8);

 return VAR_10;
}
