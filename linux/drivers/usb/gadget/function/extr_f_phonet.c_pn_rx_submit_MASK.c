
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {struct page* context; int length; int buf; } ;
struct page {int dummy; } ;
struct f_phonet {int out_ep; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,struct usb_request*,int) ;

__attribute__((used)) static int
FUNC_5(struct f_phonet *VAR_3, struct usb_request *VAR_4, gfp_t VAR_5)
{
 struct page *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5 | VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->buf = FUNC_1(VAR_6);
 VAR_4->length = VAR_1;
 VAR_4->context = VAR_6;

 VAR_7 = FUNC_4(VAR_3->out_ep, VAR_4, VAR_5);
 if (FUNC_3(VAR_7))
  FUNC_2(VAR_6);
 return VAR_7;
}
