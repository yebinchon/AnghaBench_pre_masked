
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int slice_mode; int slice_max_mb; int slice_max_bits; } ;
struct coda_ctx {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




__attribute__((used)) static u32 FUNC_0(struct coda_ctx *VAR_6)
{
 int VAR_7, VAR_8;

 switch (VAR_6->params.slice_mode) {
 case 128:
 default:
  return 0;
 case 129:
  VAR_7 = VAR_6->params.slice_max_mb;
  VAR_8 = 1;
  break;
 case 130:
  VAR_7 = VAR_6->params.slice_max_bits;
  VAR_8 = 0;
  break;
 }

 return ((VAR_7 & VAR_2) << VAR_3) |
        ((VAR_8 & VAR_4) << VAR_5) |
        ((1 & VAR_0) << VAR_1);
}
