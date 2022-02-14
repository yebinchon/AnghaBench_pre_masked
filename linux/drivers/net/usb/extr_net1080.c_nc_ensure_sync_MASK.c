
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int frame_errors; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usbnet*,int ,int ,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct usbnet*,int ,int,int,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_8)
{
 if (++VAR_8->frame_errors <= 5)
  return;

 if (FUNC_1(VAR_8, VAR_1,
     VAR_4 | VAR_6 |
     VAR_5,
     VAR_3 |
     VAR_2,
     VAR_0, ((void*)0), 0))
  return;

 FUNC_0(VAR_8, VAR_7, VAR_8->net,
    "flush net1080; too many framing errors\n");
 VAR_8->frame_errors = 0;
}
