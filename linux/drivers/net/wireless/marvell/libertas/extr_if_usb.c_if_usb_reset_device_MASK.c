
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_usb_card {int udev; struct cmd_header* ep_out_buf; } ;
struct cmd_header {void* seqnum; void* result; void* size; void* command; } ;
typedef int cmd ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct if_usb_card*,struct cmd_header*,int) ;

__attribute__((used)) static int FUNC_7(struct if_usb_card *VAR_2)
{
 struct cmd_header *VAR_3 = VAR_2->ep_out_buf + 4;
 int VAR_4;

 *(__le32 *)VAR_2->ep_out_buf = FUNC_1(VAR_1);

 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size = FUNC_0(sizeof(VAR_3));
 VAR_3->result = FUNC_0(0);
 VAR_3->seqnum = FUNC_0(0x5a5a);
 FUNC_6(VAR_2, VAR_2->ep_out_buf, 4 + sizeof(struct cmd_header));

 FUNC_4(100);
 VAR_4 = FUNC_5(VAR_2->udev);
 FUNC_4(100);






 return VAR_4;
}
