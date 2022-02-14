
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1271*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct wl1271 *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_2, VAR_0, 0x0);
 if (VAR_3 < 0)
  goto out;


 VAR_3 = FUNC_0(VAR_2, VAR_1, 0xffff);

out:
 return VAR_3;
}
