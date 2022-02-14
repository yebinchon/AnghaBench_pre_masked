
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* release ) (struct igc_hw*) ;scalar_t__ (* acquire ) (struct igc_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct igc_hw {TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct igc_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct igc_hw*) ;
 int FUNC_2 (struct igc_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct igc_hw *VAR_1, u16 VAR_2, u16 VAR_3,
      u16 *VAR_4)
{
 s32 VAR_5 = 0;
 u16 VAR_6, VAR_7;





 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += VAR_0) {
  VAR_7 = (VAR_3 - VAR_6) / VAR_0 > 0 ?
   VAR_0 : (VAR_3 - VAR_6);

  VAR_5 = VAR_1->nvm.ops.acquire(VAR_1);
  if (VAR_5)
   break;

  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_7, VAR_4 + VAR_6);
  VAR_1->nvm.ops.release(VAR_1);
  if (VAR_5)
   break;
 }

 return VAR_5;
}
