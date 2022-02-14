
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfa384x_usb_statusresp {int resp2; int resp1; int resp0; int status; } ;
struct hfa384x_cmdresult {int status; void* resp2; void* resp1; void* resp0; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,void*,void*,void*) ;

__attribute__((used)) static int
FUNC_2(const struct hfa384x_usb_statusresp *VAR_1,
     struct hfa384x_cmdresult *VAR_2)
{
 VAR_2->status = FUNC_0(VAR_1->status);
 VAR_2->resp0 = FUNC_0(VAR_1->resp0);
 VAR_2->resp1 = FUNC_0(VAR_1->resp1);
 VAR_2->resp2 = FUNC_0(VAR_1->resp2);

 FUNC_1("cmdresult:status=0x%04x resp0=0x%04x resp1=0x%04x resp2=0x%04x\n",
   VAR_2->status, VAR_2->resp0, VAR_2->resp1, VAR_2->resp2);

 return VAR_2->status & VAR_0;
}
