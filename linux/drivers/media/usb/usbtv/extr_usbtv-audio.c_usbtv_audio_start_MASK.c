
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int member_1; } ;
typedef TYPE_1__ u16 ;
struct usbtv {TYPE_3__* snd_bulk_urb; int udev; } ;
struct TYPE_9__ {int * transfer_buffer; } ;


 int FUNC_0 (TYPE_1__ const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int * FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (TYPE_3__*,int ,unsigned int,int *,int ,int ,struct usbtv*) ;
 int FUNC_5 (TYPE_3__*) ;
 unsigned int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct usbtv*,TYPE_1__ const**,int ) ;

__attribute__((used)) static int FUNC_9(struct usbtv *VAR_6)
{
 unsigned int VAR_7;
 static const u16 VAR_8[][2] = {

  { 128 + 0x0008, 0x0001 },
  { 128 + 0x01d0, 0x00ff },
  { 128 + 0x01d9, 0x0002 },

  { 128 + 0x01da, 0x0013 },
  { 128 + 0x01db, 0x0012 },
  { 128 + 0x01e9, 0x0002 },
  { 128 + 0x01ec, 0x006c },
  { 128 + 0x0294, 0x0020 },
  { 128 + 0x0255, 0x00cf },
  { 128 + 0x0256, 0x0020 },
  { 128 + 0x01eb, 0x0030 },
  { 128 + 0x027d, 0x00a6 },
  { 128 + 0x0280, 0x0011 },
  { 128 + 0x0281, 0x0040 },
  { 128 + 0x0282, 0x0011 },
  { 128 + 0x0283, 0x0040 },
  { 0xf891, 0x0010 },


  { 128 + 0x0284, 0x00aa },
 };

 VAR_6->snd_bulk_urb = FUNC_2(0, VAR_2);
 if (VAR_6->snd_bulk_urb == ((void*)0))
  goto err_alloc_urb;

 VAR_7 = FUNC_6(VAR_6->udev, VAR_3);

 VAR_6->snd_bulk_urb->transfer_buffer = FUNC_1(
  VAR_4, VAR_2);
 if (VAR_6->snd_bulk_urb->transfer_buffer == ((void*)0))
  goto err_transfer_buffer;

 FUNC_4(VAR_6->snd_bulk_urb, VAR_6->udev, VAR_7,
  VAR_6->snd_bulk_urb->transfer_buffer, VAR_4,
  VAR_5, VAR_6);


 FUNC_8(VAR_6, VAR_8, FUNC_0(VAR_8));

 FUNC_3(VAR_6->udev, VAR_7);
 FUNC_7(VAR_6->snd_bulk_urb, VAR_1);

 return 0;

err_transfer_buffer:
 FUNC_5(VAR_6->snd_bulk_urb);
 VAR_6->snd_bulk_urb = ((void*)0);

err_alloc_urb:
 return -VAR_0;
}
