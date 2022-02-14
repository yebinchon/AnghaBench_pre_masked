
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_v4l2_fh {int rhp; int wait_data; scalar_t__ fw_mode_flag; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_v4l2_fh*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_3, poll_table *VAR_4)
{
 __poll_t VAR_5 = 0;
 struct pvr2_v4l2_fh *VAR_6 = VAR_3->private_data;
 int VAR_7;

 if (VAR_6->fw_mode_flag) {
  VAR_5 |= VAR_1 | VAR_2;
  return VAR_5;
 }

 if (!VAR_6->rhp) {
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7) return VAR_0;
 }

 FUNC_0(VAR_3,&VAR_6->wait_data,VAR_4);

 if (FUNC_1(VAR_6->rhp) >= 0) {
  VAR_5 |= VAR_1 | VAR_2;
 }

 return VAR_5;
}
