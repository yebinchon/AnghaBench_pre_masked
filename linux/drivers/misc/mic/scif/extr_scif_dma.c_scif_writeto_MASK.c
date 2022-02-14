
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int scif_epd_t ;
typedef size_t off_t ;
struct TYPE_3__ {int this_device; } ;
struct TYPE_4__ {TYPE_1__ mdev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int ,size_t,size_t,size_t,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ,size_t,int,size_t,size_t,int,int ,int) ;
 scalar_t__ FUNC_2 (size_t,size_t) ;

int FUNC_3(scif_epd_t VAR_3, off_t VAR_4, size_t VAR_5,
   off_t VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_2.mdev.this_device,
  "SCIFAPI writeto: ep %p loffset 0x%lx len 0x%lx roffset 0x%lx flags 0x%x\n",
  VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (FUNC_2(VAR_4, VAR_6)) {
  while (VAR_5 > VAR_1) {
   VAR_8 = FUNC_1(VAR_3, VAR_4, 0x0,
         VAR_1,
         VAR_6, VAR_7,
         VAR_0, 0);
   if (VAR_8)
    goto writeto_err;
   VAR_4 += VAR_1;
   VAR_6 += VAR_1;
   VAR_5 -= VAR_1;
  }
 }
 VAR_8 = FUNC_1(VAR_3, VAR_4, 0x0, VAR_5,
       VAR_6, VAR_7, VAR_0, 1);
writeto_err:
 return VAR_8;
}
