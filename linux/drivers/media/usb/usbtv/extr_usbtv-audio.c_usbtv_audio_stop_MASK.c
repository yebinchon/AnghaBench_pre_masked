
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_1; int member_0; } ;
typedef TYPE_1__ u16 ;
struct usbtv {TYPE_3__* snd_bulk_urb; } ;
struct TYPE_7__ {int transfer_buffer; } ;


 int FUNC_0 (TYPE_1__ const**) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct usbtv*,TYPE_1__ const**,int ) ;

__attribute__((used)) static int FUNC_5(struct usbtv *VAR_0)
{
 static const u16 VAR_1[][2] = {





  { 128 + 0x027d, 0x0000 },
  { 128 + 0x0280, 0x0010 },
  { 128 + 0x0282, 0x0010 },
 };

 if (VAR_0->snd_bulk_urb) {
  FUNC_3(VAR_0->snd_bulk_urb);
  FUNC_1(VAR_0->snd_bulk_urb->transfer_buffer);
  FUNC_2(VAR_0->snd_bulk_urb);
  VAR_0->snd_bulk_urb = ((void*)0);
 }

 FUNC_4(VAR_0, VAR_1, FUNC_0(VAR_1));

 return 0;
}
