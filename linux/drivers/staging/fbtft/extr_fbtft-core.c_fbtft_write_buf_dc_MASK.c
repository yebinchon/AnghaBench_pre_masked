
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* write ) (struct fbtft_par*,void*,size_t) ;} ;
struct TYPE_4__ {scalar_t__ dc; } ;
struct fbtft_par {TYPE_3__* info; TYPE_2__ fbtftops; TYPE_1__ gpio; } ;
struct TYPE_6__ {int device; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct fbtft_par*,void*,size_t) ;

int FUNC_3(struct fbtft_par *VAR_0, void *VAR_1, size_t VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_0->gpio.dc)
  FUNC_1(VAR_0->gpio.dc, VAR_3);

 VAR_4 = VAR_0->fbtftops.write(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  FUNC_0(VAR_0->info->device,
   "write() failed and returned %d\n", VAR_4);
 return VAR_4;
}
