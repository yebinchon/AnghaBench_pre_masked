
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct wusbhc {scalar_t__ ports_max; int mutex; } ;
typedef int __le16 ;
struct TYPE_2__ {int change; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct wusbhc*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct wusbhc *VAR_1, u16 VAR_2,
         u32 *VAR_3, u16 VAR_4)
{
 __le16 *VAR_5 = (__le16 *)VAR_3;

 if (VAR_2 > VAR_1->ports_max)
  return -VAR_0;

 FUNC_1(&VAR_1->mutex);
 VAR_5[0] = FUNC_0(FUNC_3(VAR_1, VAR_2)->status);
 VAR_5[1] = FUNC_0(FUNC_3(VAR_1, VAR_2)->change);
 FUNC_2(&VAR_1->mutex);

 return 0;
}
