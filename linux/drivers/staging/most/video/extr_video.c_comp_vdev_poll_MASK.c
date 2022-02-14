
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_video_dev {int wait_data; } ;
struct file {struct comp_fh* private_data; } ;
struct comp_fh {struct most_video_dev* mdev; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct most_video_dev*) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_2, poll_table *VAR_3)
{
 struct comp_fh *VAR_4 = VAR_2->private_data;
 struct most_video_dev *VAR_5 = VAR_4->mdev;
 __poll_t VAR_6 = 0;


 if (!FUNC_0(VAR_5))
  FUNC_1(VAR_2, &VAR_5->wait_data, VAR_3);
 if (FUNC_0(VAR_5))
  VAR_6 |= VAR_0 | VAR_1;

 return VAR_6;
}
