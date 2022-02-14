
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int bRequestType; int bRequest; void* wLength; void* wIndex; void* wValue; } ;
typedef int req ;
struct TYPE_2__ {int pids; int address; int control; } ;


 int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (unsigned int,int ,void*,int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct usb_ctrlrequest*,int) ;
 int FUNC_6 (int ,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(unsigned VAR_8, int VAR_9,
 int VAR_10, int VAR_11, int VAR_12, void *VAR_13, int VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;
 struct usb_ctrlrequest VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_19 = (VAR_9 & VAR_4) != 0;
 if (VAR_14 > (VAR_19 ? VAR_2 : 0))
  return -1;


 VAR_18.bRequestType = VAR_9;
 VAR_18.bRequest = VAR_10;
 VAR_18.wValue = FUNC_2(VAR_11);
 VAR_18.wIndex = FUNC_2(VAR_12);
 VAR_18.wLength = FUNC_2(VAR_14);

 VAR_15 = FUNC_1(VAR_5, VAR_6);
 VAR_16 = FUNC_0(VAR_8, 0);

 VAR_17 = FUNC_7(&VAR_7->control);
 VAR_17 = FUNC_4(VAR_17, sizeof(VAR_18));
 VAR_17 |= VAR_3;
 VAR_17 |= VAR_0;


 FUNC_5(&VAR_18, sizeof(VAR_18));
 FUNC_8(VAR_16, &VAR_7->address);
 FUNC_8(VAR_15, &VAR_7->pids);
 VAR_20 = FUNC_6(VAR_17, VAR_1);
 if (VAR_20 < 0)
  return VAR_20;


 return FUNC_3(VAR_8, 0, VAR_13, VAR_14, VAR_1);
}
