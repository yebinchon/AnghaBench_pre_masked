
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(const struct net_device *VAR_3)
{
 int VAR_4;
 size_t VAR_5 = 0;
 for (VAR_4 = VAR_1 + 1; VAR_4 < VAR_0; VAR_4++)
  VAR_5 += FUNC_0(VAR_2[VAR_4].len);
 return VAR_5;
}
