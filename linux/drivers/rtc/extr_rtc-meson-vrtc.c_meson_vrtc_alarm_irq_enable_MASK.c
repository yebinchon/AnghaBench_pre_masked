
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_vrtc_data {unsigned int enabled; } ;
struct device {int dummy; } ;


 struct meson_vrtc_data* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, unsigned int VAR_1)
{
 struct meson_vrtc_data *VAR_2 = FUNC_0(VAR_0);

 VAR_2->enabled = VAR_1;
 return 0;
}
