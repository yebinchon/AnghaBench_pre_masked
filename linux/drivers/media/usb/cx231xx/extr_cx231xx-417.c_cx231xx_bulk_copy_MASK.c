
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct urb {unsigned char* transfer_buffer; int actual_length; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {unsigned char* ps_head; } ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,struct urb*,struct cx231xx_dmaqueue*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct cx231xx *VAR_2, struct urb *VAR_3)
{
 struct cx231xx_dmaqueue *VAR_4 = VAR_3->context;
 unsigned char *VAR_5, *VAR_6;
 u32 VAR_7 = 0;

 VAR_5 = VAR_3->transfer_buffer;
 VAR_7 = VAR_3->actual_length;

 VAR_6 = FUNC_2(VAR_7, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_6, VAR_4->ps_head, 3);
 FUNC_3(VAR_6+3, VAR_5, VAR_7-3);
 FUNC_3(VAR_4->ps_head, VAR_5+VAR_7-3, 3);

 VAR_5 = VAR_6;
 FUNC_0(VAR_5, VAR_7, VAR_3, VAR_4);

 FUNC_1(VAR_6);
 return 0;
}
