
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 struct adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct adapter*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (struct adapter*,int ,int) ;
 int FUNC_8 () ;

int FUNC_9(struct net_device *VAR_1, u16 VAR_2, u16 VAR_3,
   u16 VAR_4)
{
 struct adapter *VAR_5 = FUNC_5(VAR_1);
 u16 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_5, VAR_2, &VAR_6, &VAR_7);
 if (VAR_8)
  goto out;

 if (VAR_3 != VAR_6) {
  u16 VAR_9;
  u32 VAR_10;

  if (VAR_3 >= VAR_6)
   VAR_9 = VAR_3 - VAR_6;
  else
   VAR_9 = VAR_4 - VAR_6 + VAR_3;

  if (FUNC_4(VAR_5->params.chip))
   VAR_10 = FUNC_2(VAR_9);
  else
   VAR_10 = FUNC_1(VAR_9);
  FUNC_8();
  FUNC_7(VAR_5, FUNC_0(VAR_0),
        FUNC_3(VAR_2) | VAR_10);
 }
out:
 return VAR_8;
}
