
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1273_device {scalar_t__ rd_index; scalar_t__ wr_index; int read_queue; struct file* owner; struct wl1273_core* core; } ;
struct wl1273_core {scalar_t__ mode; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (struct file*) ;
 struct wl1273_device* FUNC_2 (int ) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_7,
     struct poll_table_struct *VAR_8)
{
 struct wl1273_device *VAR_9 = FUNC_2(FUNC_1(VAR_7));
 struct wl1273_core *VAR_10 = VAR_9->core;

 if (VAR_9->owner && VAR_9->owner != VAR_7)
  return VAR_0;

 VAR_9->owner = VAR_7;

 if (VAR_10->mode == VAR_5) {
  FUNC_0(VAR_7, &VAR_9->read_queue, VAR_8);

  if (VAR_9->rd_index != VAR_9->wr_index)
   return VAR_1 | VAR_3;

 } else if (VAR_10->mode == VAR_6) {
  return VAR_2 | VAR_4;
 }

 return 0;
}
