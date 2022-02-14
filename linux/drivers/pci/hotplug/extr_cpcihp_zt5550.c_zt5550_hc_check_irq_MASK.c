
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {void* dev_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_3 = 0;
 if (VAR_2 == VAR_1.dev_id) {
  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4)
   VAR_3 = 1;
 }
 return VAR_3;
}
