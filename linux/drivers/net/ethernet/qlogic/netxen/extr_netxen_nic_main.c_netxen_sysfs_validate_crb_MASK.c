
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {int flags; TYPE_1__ ahw; } ;
typedef size_t loff_t ;


 scalar_t__ FUNC_0 (size_t,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct netxen_adapter *VAR_6,
  loff_t VAR_7, size_t VAR_8)
{
 size_t VAR_9 = 4;

 if (!(VAR_6->flags & VAR_2))
  return -VAR_1;

 if (VAR_7 < VAR_5) {
  if (FUNC_1(VAR_6->ahw.revision_id))
   return -VAR_0;

  if (FUNC_0(VAR_7, VAR_3,
      VAR_4))
   VAR_9 = 8;
  else
   return -VAR_0;
 }

 if ((VAR_8 != VAR_9) || (VAR_7 & (VAR_9-1)))
  return -VAR_0;

 return 0;
}
