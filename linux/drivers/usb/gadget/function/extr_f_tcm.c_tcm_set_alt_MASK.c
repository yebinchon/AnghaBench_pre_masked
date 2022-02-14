
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct guas_setup_wq {unsigned int alt; int work; struct f_uas* fu; } ;
struct f_uas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct guas_setup_wq* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 struct f_uas* FUNC_3 (struct usb_function*) ;

__attribute__((used)) static int FUNC_4(struct usb_function *VAR_7, unsigned VAR_8, unsigned VAR_9)
{
 struct f_uas *VAR_10 = FUNC_3(VAR_7);

 if ((VAR_9 == VAR_4) || (VAR_9 == VAR_5)) {
  struct guas_setup_wq *VAR_11;

  VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_2);
  if (!VAR_11)
   return -VAR_0;
  FUNC_0(&VAR_11->work, VAR_6);
  VAR_11->fu = VAR_10;
  VAR_11->alt = VAR_9;
  FUNC_2(&VAR_11->work);
  return VAR_3;
 }
 return -VAR_1;
}
