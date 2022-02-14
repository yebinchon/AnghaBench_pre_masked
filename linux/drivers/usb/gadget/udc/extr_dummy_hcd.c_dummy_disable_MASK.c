
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int name; } ;
struct dummy_ep {scalar_t__ stream_en; int * desc; } ;
struct dummy {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 struct dummy* FUNC_1 (struct dummy_ep*) ;
 int FUNC_2 (struct dummy*,struct dummy_ep*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct dummy*) ;
 struct dummy_ep* FUNC_6 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_7(struct usb_ep *VAR_2)
{
 struct dummy_ep *VAR_3;
 struct dummy *VAR_4;
 unsigned long VAR_5;

 VAR_3 = FUNC_6(VAR_2);
 if (!VAR_2 || !VAR_3->desc || VAR_2->name == VAR_1)
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_3);

 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_3->desc = ((void*)0);
 VAR_3->stream_en = 0;
 FUNC_2(VAR_4, VAR_3);
 FUNC_4(&VAR_4->lock, VAR_5);

 FUNC_0(FUNC_5(VAR_4), "disabled %s\n", VAR_2->name);
 return 0;
}
