
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8400 {int dev; } ;
struct mfd_cell {char* name; int pdata_size; struct wm8400* platform_data; } ;


 int FUNC_0 (int ,int,struct mfd_cell const*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct wm8400 *VAR_0)
{
 const struct mfd_cell VAR_1 = {
  .name = "wm8400-codec",
  .platform_data = VAR_0,
  .pdata_size = sizeof(*VAR_0),
 };

 return FUNC_0(VAR_0->dev, -1, &VAR_1, 1, ((void*)0), 0, ((void*)0));
}
