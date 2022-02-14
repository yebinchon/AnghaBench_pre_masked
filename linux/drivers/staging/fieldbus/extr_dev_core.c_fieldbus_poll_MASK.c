
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct fb_open_file* private_data; } ;
struct fieldbus_dev {scalar_t__ dc_event; int dc_wq; } ;
struct fb_open_file {scalar_t__ dc_event; struct fieldbus_dev* fbdev; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_6, poll_table *VAR_7)
{
 struct fb_open_file *VAR_8 = VAR_6->private_data;
 struct fieldbus_dev *VAR_9 = VAR_8->fbdev;
 __poll_t VAR_10 = VAR_1 | VAR_4 | VAR_2 | VAR_5;

 FUNC_0(VAR_6, &VAR_9->dc_wq, VAR_7);

 if (VAR_9->dc_event != VAR_8->dc_event)
  VAR_10 |= VAR_3 | VAR_0;
 return VAR_10;
}
