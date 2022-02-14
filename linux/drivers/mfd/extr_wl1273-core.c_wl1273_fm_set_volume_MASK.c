
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1273_core {unsigned int volume; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl1273_core*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct wl1273_core *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_4 > VAR_1)
  return -VAR_0;

 if (VAR_3->volume == VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_3, VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->volume = VAR_4;
 return 0;
}
