
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct dsaf_device {TYPE_1__** mac_cb; } ;
struct TYPE_2__ {int mc_mask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t*) ;
 int FUNC_1 (size_t*,int ,int ) ;
 int FUNC_2 (size_t*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct dsaf_device *VAR_1,
       u8 VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 if (FUNC_0(VAR_4))
  FUNC_2(VAR_3, 0xff, VAR_0);
 else
  FUNC_1(VAR_3, VAR_1->mac_cb[VAR_2]->mc_mask, VAR_0);
}
