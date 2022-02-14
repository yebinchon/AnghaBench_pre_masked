
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {int dummy; } ;
struct TYPE_2__ {int carrier; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct rc_dev *VAR_2, u32 VAR_3)
{
 if (VAR_3 > 500000 || VAR_3 < 20000)
  return -VAR_0;

 VAR_1.carrier = VAR_3;
 return 0;
}
