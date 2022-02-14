
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef size_t u_char ;
struct vc_data {int dummy; } ;
struct TYPE_2__ {short mask; } ;


 short VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 size_t VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (size_t) ;
 short* VAR_8 ;
 int FUNC_1 (int ) ;
 int * VAR_9 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct vc_data *VAR_10, u_char VAR_11, u_char VAR_12, u_short VAR_13)
{
 short VAR_14 = VAR_7->mask, VAR_15 = VAR_8[VAR_12];

 if (VAR_11 != VAR_1 || (VAR_15 & VAR_0) || VAR_12 < VAR_6)
  return -1;
 if (VAR_12 == VAR_6) {
  FUNC_2("%s\n", FUNC_1(VAR_2));
  VAR_9 = ((void*)0);
  return 1;
 }
 if (VAR_14 < VAR_5 && !(VAR_15 & VAR_5))
  return -1;
 VAR_8[VAR_12] ^= VAR_14;
 FUNC_0(VAR_12);
 FUNC_2(" %s\n",
       (VAR_8[VAR_12] & VAR_14) ? FUNC_1(VAR_4) :
       FUNC_1(VAR_3));
 return 1;
}
