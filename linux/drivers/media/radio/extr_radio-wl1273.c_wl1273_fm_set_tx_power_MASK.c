
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wl1273_device {scalar_t__ tx_power; struct wl1273_core* core; } ;
struct wl1273_core {scalar_t__ mode; int (* write ) (struct wl1273_core*,int ,scalar_t__) ;int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wl1273_core*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct wl1273_device *VAR_4, u16 VAR_5)
{
 struct wl1273_core *VAR_6 = VAR_4->core;
 int VAR_7;

 if (VAR_6->mode == VAR_1 ||
     VAR_6->mode == VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_6->lock);


 VAR_7 = VAR_6->write(VAR_6, VAR_3, 122 - VAR_5);
 if (VAR_7)
  goto out;

 VAR_4->tx_power = VAR_5;

out:
 FUNC_1(&VAR_6->lock);
 return VAR_7;
}
