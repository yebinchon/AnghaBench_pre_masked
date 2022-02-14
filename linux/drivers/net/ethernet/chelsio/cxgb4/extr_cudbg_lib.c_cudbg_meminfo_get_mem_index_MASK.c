
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cudbg_meminfo {int avail_c; TYPE_1__* avail; } ;
struct TYPE_4__ {int chip; } ;
struct adapter {TYPE_2__ params; } ;
struct TYPE_3__ {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct adapter *VAR_7,
           struct cudbg_meminfo *VAR_8,
           u8 VAR_9, u8 *VAR_10)
{
 u8 VAR_11, VAR_12;

 switch (VAR_9) {
 case 132:
  VAR_12 = VAR_1;
  break;
 case 131:
  VAR_12 = VAR_2;
  break;
 case 129:

  VAR_12 = FUNC_0(VAR_7->params.chip) ? VAR_4 : VAR_6;
  break;
 case 128:
  VAR_12 = VAR_5;
  break;
 case 130:
  VAR_12 = VAR_3;
  break;
 default:
  return VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->avail_c; VAR_11++) {
  if (VAR_8->avail[VAR_11].idx == VAR_12) {
   *VAR_10 = VAR_11;
   return 0;
  }
 }

 return VAR_0;
}
