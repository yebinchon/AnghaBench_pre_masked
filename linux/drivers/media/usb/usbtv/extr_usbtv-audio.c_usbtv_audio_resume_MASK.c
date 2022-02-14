
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtv {scalar_t__ snd_bulk_urb; int snd_stream; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct usbtv *VAR_1)
{
 if (FUNC_0(&VAR_1->snd_stream) && VAR_1->snd_bulk_urb)
  FUNC_1(VAR_1->snd_bulk_urb, VAR_0);
}
