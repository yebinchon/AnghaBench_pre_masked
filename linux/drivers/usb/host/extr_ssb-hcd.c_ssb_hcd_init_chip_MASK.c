
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ coreid; } ;
struct ssb_device {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ssb_device*,int ) ;
 int FUNC_1 (struct ssb_device*) ;

__attribute__((used)) static u32 FUNC_2(struct ssb_device *VAR_2)
{
 u32 VAR_3 = 0;

 if (VAR_2->id.coreid == VAR_0)

  VAR_3 |= VAR_1;

 FUNC_0(VAR_2, VAR_3);

 FUNC_1(VAR_2);

 return VAR_3;
}
