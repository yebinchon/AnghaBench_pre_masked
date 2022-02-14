
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_usb {int diag_resp_buffer; int diag_cmd_buffer; int interface; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 struct ath10k_usb* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ath10k *VAR_0)
{
 struct ath10k_usb *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_4(VAR_1->interface, ((void*)0));

 FUNC_3(VAR_1->diag_cmd_buffer);
 FUNC_3(VAR_1->diag_resp_buffer);
}
