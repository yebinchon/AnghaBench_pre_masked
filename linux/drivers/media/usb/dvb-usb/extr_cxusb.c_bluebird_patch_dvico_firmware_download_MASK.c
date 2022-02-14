
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int idProduct; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct firmware {int size; int* data; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (struct usb_device*,struct firmware*,int ) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_5,
        const struct firmware *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  int VAR_8 = VAR_4[VAR_7];

  if (VAR_6->size < VAR_8 + 4)
   continue;

  if (VAR_6->data[VAR_8] == (VAR_3 & 0xff) &&
      VAR_6->data[VAR_8 + 1] == VAR_3 >> 8) {
   struct firmware VAR_9;
   u8 *VAR_10 = FUNC_5(VAR_6->size);
   int VAR_11;

   if (!VAR_10)
    return -VAR_2;

   FUNC_2(VAR_10, VAR_6->data, VAR_6->size);
   VAR_9.size = VAR_6->size;
   VAR_9.data = VAR_10;

   VAR_10[VAR_8 + 2] =
    FUNC_1(VAR_5->descriptor.idProduct) + 1;
   VAR_10[VAR_8 + 3] =
    FUNC_1(VAR_5->descriptor.idProduct) >> 8;

   VAR_11 = FUNC_3(VAR_5, &VAR_9,
       VAR_0);
   FUNC_4(VAR_10);
   return VAR_11;
  }
 }

 return -VAR_1;
}
