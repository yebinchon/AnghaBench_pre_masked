
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int flags; } ;
struct inode {int dummy; } ;
struct file {struct rtc_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct rtc_device*,int ) ;
 int FUNC_3 (struct rtc_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct rtc_device *VAR_4 = VAR_3->private_data;
 FUNC_1(VAR_3, VAR_1, 0);
 FUNC_3(VAR_4, 0);
 FUNC_2(VAR_4, 0);

 FUNC_0(VAR_0, &VAR_4->flags);
 return 0;
}
