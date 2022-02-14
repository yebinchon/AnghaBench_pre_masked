
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct airo_info {int dummy; } ;
typedef scalar_t__ __le16 ;
struct TYPE_3__ {scalar_t__ kindex; int* mac; } ;
typedef TYPE_1__ WepKeyRid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct airo_info*,TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_2(struct airo_info *VAR_1)
{
 WepKeyRid VAR_2;
 int VAR_3;
 __le16 VAR_4;

 VAR_3 = FUNC_1(VAR_1, &VAR_2, 1, 1);
 if (VAR_3 != VAR_0)
  return -1;
 do {
  VAR_4 = VAR_2.kindex;
  if (VAR_2.kindex == FUNC_0(0xffff))
   return VAR_2.mac[0];
  VAR_3 = FUNC_1(VAR_1, &VAR_2, 0, 1);
  if (VAR_3 != VAR_0)
   return -1;
 } while (VAR_4 != VAR_2.kindex);
 return -1;
}
