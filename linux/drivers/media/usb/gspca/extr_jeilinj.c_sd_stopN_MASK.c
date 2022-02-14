
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gspca_dev {TYPE_1__** urb; int dev; } ;
struct TYPE_2__ {int* transfer_buffer; int pipe; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int*) ;
 int FUNC_2 (int ,int ,int*,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 int VAR_3;
 u8 *VAR_4;
 static u8 VAR_5[][2] = {
  {0x71, 0x00},
  {0x70, 0x09},
  {0x71, 0x80},
  {0x70, 0x05}
 };

 for (;;) {

  FUNC_2(VAR_2->dev,
    VAR_2->urb[0]->pipe,
    VAR_2->urb[0]->transfer_buffer,
    VAR_1, ((void*)0),
    VAR_0);


  VAR_3 = 0;
  VAR_4 = VAR_2->urb[0]->transfer_buffer;
  while ((VAR_3 < (VAR_1 - 1)) &&
   ((VAR_4[VAR_3] != 0xff) || (VAR_4[VAR_3+1] != 0xd9)))
   VAR_3++;

  if (VAR_3 != (VAR_1 - 1))

   break;
  }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_5); VAR_3++)
  FUNC_1(VAR_2, VAR_5[VAR_3]);
}
