
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sgi_20m; int sgi_40m; } ;
struct sta_info {int bw_mode; TYPE_1__ htpriv; } ;






u8 FUNC_0(struct sta_info *VAR_0)
{
 u8 VAR_1 = 0, VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;

 VAR_2 = VAR_0->htpriv.sgi_20m;
 VAR_3 = VAR_0->htpriv.sgi_40m;

 switch (VAR_0->bw_mode) {
 case 128:
  VAR_1 = VAR_4;
  break;
 case 129:
  VAR_1 = VAR_3;
  break;
 case 130:
 default:
  VAR_1 = VAR_2;
  break;
 }

 return VAR_1;
}
