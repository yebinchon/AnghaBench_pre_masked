
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl1273_device {scalar_t__ band; int dev; struct wl1273_core* core; } ;
struct wl1273_core {scalar_t__ mode; int (* read ) (struct wl1273_core*,int ,int*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wl1273_core*,int ,int*) ;
 int FUNC_2 (struct wl1273_core*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct wl1273_device *VAR_6)
{
 struct wl1273_core *VAR_7 = VAR_6->core;
 unsigned int VAR_8;
 u16 VAR_9;
 int VAR_10;

 if (VAR_7->mode == VAR_5) {
  VAR_10 = VAR_7->read(VAR_7, VAR_4, &VAR_9);
  if (VAR_10)
   return VAR_10;

  FUNC_0(VAR_6->dev, "Freq get: 0x%04x\n", VAR_9);
  if (VAR_6->band == VAR_0)
   VAR_8 = VAR_1 + 50 * VAR_9;
  else
   VAR_8 = VAR_2 + 50 * VAR_9;
 } else {
  VAR_10 = VAR_7->read(VAR_7, VAR_3, &VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_8 = VAR_9 * 10;
 }

 return VAR_8;
}
