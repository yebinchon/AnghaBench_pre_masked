
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qlen; } ;
struct usbnet {TYPE_1__ rxq; } ;
struct urb {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,struct urb*,int ) ;
 struct urb* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_1, gfp_t VAR_2)
{
 struct urb *VAR_3;
 int VAR_4;
 int VAR_5 = 0;


 for (VAR_4 = 0; VAR_4 < 10 && VAR_1->rxq.qlen < FUNC_0(VAR_1); VAR_4++) {
  VAR_3 = FUNC_2(0, VAR_2);
  if (VAR_3 != ((void*)0)) {
   VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_2);
   if (VAR_5)
    goto err;
  } else {
   VAR_5 = -VAR_0;
   goto err;
  }
 }
err:
 return VAR_5;
}
