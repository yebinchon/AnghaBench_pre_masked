
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct us_data {TYPE_2__* current_urb; TYPE_1__* cr; int pusb_dev; } ;
struct TYPE_4__ {int actual_length; } ;
struct TYPE_3__ {void* wLength; void* wIndex; void* wValue; void* bRequest; void* bRequestType; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned int,unsigned char*,void*,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct us_data*,char*,void*,void*,int ,int ,int ) ;
 int FUNC_3 (struct us_data*,int) ;

int FUNC_4(struct us_data *VAR_1, unsigned int VAR_2,
   u8 VAR_3, u8 VAR_4, u16 VAR_5, u16 VAR_6,
   void *VAR_7, u16 VAR_8, int VAR_9)
{
 int VAR_10;

 FUNC_2(VAR_1, "rq=%02x rqtype=%02x value=%04x index=%02x len=%u\n",
       VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);


 VAR_1->cr->bRequestType = VAR_4;
 VAR_1->cr->bRequest = VAR_3;
 VAR_1->cr->wValue = FUNC_0(VAR_5);
 VAR_1->cr->wIndex = FUNC_0(VAR_6);
 VAR_1->cr->wLength = FUNC_0(VAR_8);


 FUNC_1(VAR_1->current_urb, VAR_1->pusb_dev, VAR_2,
    (unsigned char*) VAR_1->cr, VAR_7, VAR_8,
    VAR_0, ((void*)0));
 VAR_10 = FUNC_3(VAR_1, VAR_9);


 if (VAR_10 == 0)
  VAR_10 = VAR_1->current_urb->actual_length;
 return VAR_10;
}
