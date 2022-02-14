
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netxen_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (struct netxen_adapter*,int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct netxen_adapter*) ;
 int FUNC_3 (struct netxen_adapter*) ;

int
FUNC_4(struct netxen_adapter *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = -VAR_0;

 if (FUNC_2(VAR_7))
  return VAR_9;

 VAR_8 = FUNC_0(VAR_7, VAR_2);

 if (VAR_8 == VAR_6 || VAR_8 == VAR_3)
  VAR_9 = 0;
 else if (VAR_8 != VAR_4 && VAR_8 != VAR_5) {
  FUNC_1(VAR_7, VAR_2, VAR_6);
  VAR_7->flags |= VAR_1;
  VAR_9 = 0;
 }

 FUNC_3(VAR_7);

 return VAR_9;
}
