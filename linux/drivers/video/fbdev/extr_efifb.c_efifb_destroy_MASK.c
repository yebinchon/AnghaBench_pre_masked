
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_info {int cmap; TYPE_2__* apertures; scalar_t__ screen_base; } ;
struct TYPE_4__ {TYPE_1__* ranges; } ;
struct TYPE_3__ {int size; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_4)
{
 if (VAR_4->screen_base) {
  if (VAR_2 & (VAR_0 | VAR_1))
   FUNC_1(VAR_4->screen_base);
  else
   FUNC_2(VAR_4->screen_base);
 }
 if (VAR_3)
  FUNC_3(VAR_4->apertures->ranges[0].base,
       VAR_4->apertures->ranges[0].size);
 FUNC_0(&VAR_4->cmap);
}
