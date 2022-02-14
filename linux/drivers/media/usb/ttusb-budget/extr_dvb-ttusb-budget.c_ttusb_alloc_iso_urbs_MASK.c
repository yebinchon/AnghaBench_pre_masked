
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct ttusb {struct urb** iso_urb; int iso_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct ttusb*) ;
 struct urb* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct ttusb *VAR_6)
{
 int VAR_7;

 VAR_6->iso_buffer = FUNC_0(VAR_1 * VAR_4,
   VAR_5, VAR_3);
 if (!VAR_6->iso_buffer)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  struct urb *VAR_8;

  if (!
      (VAR_8 =
       FUNC_2(VAR_1, VAR_2))) {
   FUNC_1(VAR_6);
   return -VAR_0;
  }

  VAR_6->iso_urb[VAR_7] = VAR_8;
 }

 return 0;
}
