
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbtv {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct usbtv *VAR_4, const u16 VAR_5[][2], int VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_4->udev, 0);
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  u16 VAR_10 = VAR_5[VAR_9][0];
  u16 VAR_11 = VAR_5[VAR_9][1];

  VAR_7 = FUNC_0(VAR_4->udev, VAR_8, VAR_0,
   VAR_1 | VAR_3 | VAR_2,
   VAR_11, VAR_10, ((void*)0), 0, 0);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
