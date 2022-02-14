
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl1273_device {unsigned int preemphasis; struct wl1273_core* core; } ;
struct wl1273_core {scalar_t__ mode; int (* write ) (struct wl1273_core*,int ,int) ;int lock; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wl1273_core*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct wl1273_device *VAR_5,
         unsigned int VAR_6)
{
 struct wl1273_core *VAR_7 = VAR_5->core;
 int VAR_8;
 u16 VAR_9;

 if (VAR_7->mode == VAR_2 ||
     VAR_7->mode == VAR_3)
  return -VAR_1;

 FUNC_0(&VAR_7->lock);

 switch (VAR_6) {
 case 128:
  VAR_9 = 1;
  break;
 case 130:
  VAR_9 = 0;
  break;
 case 129:
  VAR_9 = 2;
  break;
 default:
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_8 = VAR_7->write(VAR_7, VAR_4, VAR_9);
 if (VAR_8)
  goto out;

 VAR_5->preemphasis = VAR_6;

out:
 FUNC_1(&VAR_7->lock);
 return VAR_8;
}
