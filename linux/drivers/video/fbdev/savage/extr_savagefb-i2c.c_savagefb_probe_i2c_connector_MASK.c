
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int adapter; scalar_t__ par; } ;
struct savagefb_par {TYPE_1__ chan; } ;
struct fb_info {int device; struct savagefb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int const*,int ,int ) ;

int FUNC_3(struct fb_info *VAR_2, u8 **VAR_3)
{
 struct savagefb_par *VAR_4 = VAR_2->par;
 u8 *VAR_5;

 if (VAR_4->chan.par)
  VAR_5 = FUNC_0(&VAR_4->chan.adapter);
 else
  VAR_5 = ((void*)0);

 if (!VAR_5) {

  const u8 *VAR_6 = FUNC_1(VAR_2->device);

  if (VAR_6)
   VAR_5 = FUNC_2(VAR_6, VAR_0, VAR_1);
 }

 *VAR_3 = VAR_5;

 return (VAR_5) ? 0 : 1;
}
