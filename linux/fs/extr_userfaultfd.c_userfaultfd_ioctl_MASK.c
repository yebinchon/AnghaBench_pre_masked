
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userfaultfd_ctx {scalar_t__ state; } ;
struct file {struct userfaultfd_ctx* private_data; } ;


 long VAR_0 ;






 scalar_t__ VAR_1 ;
 int FUNC_0 (struct userfaultfd_ctx*,unsigned long) ;
 int FUNC_1 (struct userfaultfd_ctx*,unsigned long) ;
 int FUNC_2 (struct userfaultfd_ctx*,unsigned long) ;
 int FUNC_3 (struct userfaultfd_ctx*,unsigned long) ;
 int FUNC_4 (struct userfaultfd_ctx*,unsigned long) ;
 int FUNC_5 (struct userfaultfd_ctx*,unsigned long) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_2, unsigned VAR_3,
         unsigned long VAR_4)
{
 int VAR_5 = -VAR_0;
 struct userfaultfd_ctx *VAR_6 = VAR_2->private_data;

 if (VAR_3 != 133 && VAR_6->state == VAR_1)
  return -VAR_0;

 switch(VAR_3) {
 case 133:
  VAR_5 = FUNC_0(VAR_6, VAR_4);
  break;
 case 131:
  VAR_5 = FUNC_2(VAR_6, VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_3(VAR_6, VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_4(VAR_6, VAR_4);
  break;
 case 132:
  VAR_5 = FUNC_1(VAR_6, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_5(VAR_6, VAR_4);
  break;
 }
 return VAR_5;
}
