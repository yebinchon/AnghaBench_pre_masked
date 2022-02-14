
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int transfer_buffer_length; int * complete; void* transfer_buffer; int pipe; } ;
struct oxu_murb {int last; struct urb* main; } ;
struct oxu_hcd {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct usb_hcd*,struct urb*,int ) ;
 struct oxu_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct urb*,struct urb*,int) ;
 scalar_t__ FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_0, struct urb *VAR_1,
    gfp_t VAR_2)
{
 struct oxu_hcd *VAR_3 = FUNC_1(VAR_0);
 int VAR_4, VAR_5;
 void *VAR_6;
 struct urb *VAR_7;
 int VAR_8, VAR_9;


 if (!FUNC_5(VAR_1->pipe))
  return FUNC_0(VAR_0, VAR_1, VAR_2);


 VAR_6 = VAR_1->transfer_buffer;

 VAR_4 = VAR_1->transfer_buffer_length / 4096;
 VAR_5 = VAR_1->transfer_buffer_length % 4096;
 if (VAR_5 != 0)
  VAR_4++;


 if (VAR_4 == 1)
  return FUNC_0(VAR_0, VAR_1, VAR_2);



 for (VAR_8 = 0; VAR_8 < VAR_4 - 1; VAR_8++) {


  do {
   VAR_7 = (struct urb *) FUNC_3(VAR_3);
   if (!VAR_7)
    FUNC_4();
  } while (!VAR_7);


  FUNC_2(VAR_7, VAR_1, sizeof(struct urb));

  VAR_7->transfer_buffer_length = 4096;
  VAR_7->transfer_buffer = VAR_6 + VAR_8 * 4096;


  VAR_7->complete = ((void*)0);

  ((struct oxu_murb *) VAR_7)->main = VAR_1;
  ((struct oxu_murb *) VAR_7)->last = 0;




  do {
   VAR_9 = FUNC_0(VAR_0, VAR_7, VAR_2);
   if (VAR_9)
    FUNC_4();
  } while (VAR_9);
 }




 do {
  VAR_7 = (struct urb *) FUNC_3(VAR_3);
  if (!VAR_7)
   FUNC_4();
 } while (!VAR_7);


 FUNC_2(VAR_7, VAR_1, sizeof(struct urb));

 VAR_7->transfer_buffer_length = VAR_5 > 0 ? VAR_5 : 4096;
 VAR_7->transfer_buffer = VAR_6 + (VAR_4 - 1) * 4096;


 VAR_7->complete = ((void*)0);

 ((struct oxu_murb *) VAR_7)->main = VAR_1;
 ((struct oxu_murb *) VAR_7)->last = 1;

 do {
  VAR_9 = FUNC_0(VAR_0, VAR_7, VAR_2);
  if (VAR_9)
   FUNC_4();
 } while (VAR_9);

 return VAR_9;
}
