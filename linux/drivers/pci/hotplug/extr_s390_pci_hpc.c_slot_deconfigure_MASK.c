
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot {TYPE_1__* zdev; } ;
struct TYPE_2__ {int state; int fid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct slot *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->zdev->fid);

 FUNC_1(3, "deconf fid:%x, rc:%d\n", VAR_1->zdev->fid, VAR_2);
 if (!VAR_2)
  VAR_1->zdev->state = VAR_0;

 return VAR_2;
}
