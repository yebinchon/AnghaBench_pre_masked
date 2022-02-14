
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct usbtv {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbtv*,int) ;
 struct usbtv* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, v4l2_std_id VAR_4)
{
 int VAR_5 = -VAR_0;
 struct usbtv *VAR_6 = FUNC_1(VAR_2);

 if (VAR_4 & VAR_1)
  VAR_5 = FUNC_0(VAR_6, VAR_4);

 return VAR_5;
}
