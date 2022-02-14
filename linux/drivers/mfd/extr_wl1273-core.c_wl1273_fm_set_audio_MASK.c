
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1273_core {scalar_t__ mode; unsigned int audio_mode; int i2s_mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct wl1273_core*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wl1273_core *VAR_16, unsigned int VAR_17)
{
 int VAR_18 = 0;

 if (VAR_16->mode == VAR_10 ||
     VAR_16->mode == VAR_12)
  return -VAR_0;

 if (VAR_16->mode == VAR_11 && VAR_17 == VAR_2) {
  VAR_18 = FUNC_0(VAR_16, VAR_15,
     VAR_14);
  if (VAR_18)
   goto out;

  VAR_18 = FUNC_0(VAR_16, VAR_9,
     VAR_16->i2s_mode);
  if (VAR_18)
   goto out;

  VAR_18 = FUNC_0(VAR_16, VAR_3,
     VAR_5);
  if (VAR_18)
   goto out;

 } else if (VAR_16->mode == VAR_11 &&
     VAR_17 == VAR_1) {
  VAR_18 = FUNC_0(VAR_16, VAR_3,
     VAR_4);
  if (VAR_18)
   goto out;

 } else if (VAR_16->mode == VAR_13 &&
     VAR_17 == VAR_2) {
  VAR_18 = FUNC_0(VAR_16, VAR_9,
     VAR_16->i2s_mode);
  if (VAR_18)
   goto out;

  VAR_18 = FUNC_0(VAR_16, VAR_6,
     VAR_8);
  if (VAR_18)
   goto out;

 } else if (VAR_16->mode == VAR_13 &&
     VAR_17 == VAR_1) {
  VAR_18 = FUNC_0(VAR_16, VAR_6,
     VAR_7);
  if (VAR_18)
   goto out;
 }

 VAR_16->audio_mode = VAR_17;
out:
 return VAR_18;
}
