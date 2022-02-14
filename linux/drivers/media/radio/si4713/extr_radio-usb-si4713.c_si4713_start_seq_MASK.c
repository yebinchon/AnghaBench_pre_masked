
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct si4713_usb_device {int* buffer; } ;
struct TYPE_3__ {int len; int * payload; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct si4713_usb_device*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct si4713_usb_device *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 VAR_2->buffer[0] = 0x3f;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  int VAR_5 = VAR_1[VAR_4].len;
  const u8 *VAR_6 = VAR_1[VAR_4].payload;

  FUNC_1(VAR_2->buffer + 1, VAR_6, VAR_5);
  FUNC_2(VAR_2->buffer + VAR_5 + 1, 0, VAR_0 - 1 - VAR_5);
  VAR_3 = FUNC_3(VAR_2);
 }

 return VAR_3;
}
