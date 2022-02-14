
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5p_jpeg_ctx {int subsampling; TYPE_2__* jpeg; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {unsigned int version; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static bool FUNC_0(struct s5p_jpeg_ctx *VAR_8,
     unsigned int VAR_9)
{
 unsigned int VAR_10;

 switch (VAR_9) {
 case 0x11:
  VAR_8->subsampling = VAR_6;
  break;
 case 0x21:
  VAR_8->subsampling = VAR_5;
  break;
 case 0x22:
  VAR_8->subsampling = VAR_4;
  break;
 case 0x33:
  VAR_8->subsampling = VAR_7;
  break;
 case 0x41:




  VAR_10 = VAR_8->jpeg->variant->version;
  if (VAR_10 != VAR_0 &&
      VAR_10 != VAR_1 &&
      VAR_10 != VAR_2)
   return 0;

  VAR_8->subsampling = VAR_3;
  break;
 default:
  return 0;
 }

 return 1;
}
