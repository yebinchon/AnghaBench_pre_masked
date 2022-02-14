
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; } ;
struct TYPE_7__ {TYPE_1__ win; } ;
struct TYPE_9__ {unsigned int width; } ;
struct TYPE_8__ {TYPE_4__ win; } ;
struct TYPE_10__ {scalar_t__ if_type; scalar_t__ data_pack; TYPE_2__ ycbcr; TYPE_3__ bayer; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 unsigned int VAR_4;

 if (VAR_3.if_type == VAR_2) {
  if (VAR_3.data_pack == VAR_1)
   VAR_4 = ((VAR_3.bayer.win.width));
  else if (VAR_3.data_pack == VAR_0)
   VAR_4 = (((VAR_3.bayer.win.width * 2) +
     (VAR_3.bayer.win.width >> 2)));
  else
   VAR_4 = (((VAR_3.bayer.win.width * 2)));
 } else
  VAR_4 = (((VAR_3.ycbcr.win.width * 2)));
 return FUNC_0(VAR_4, 32);
}
