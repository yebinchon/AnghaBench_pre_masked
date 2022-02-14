
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;
struct ath_common {TYPE_1__* ops; scalar_t__ ah; } ;
struct TYPE_2__ {int (* read ) (struct ath_hw*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,scalar_t__,int,int ,int ) ;
 int FUNC_2 (struct ath_hw*,scalar_t__) ;
 int FUNC_3 (struct ath_hw*,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct ath_common *VAR_7, u32 VAR_8, u16 *VAR_9)
{
 struct ath_hw *VAR_10 = (struct ath_hw *) VAR_7->ah;

 VAR_7->ops->read(VAR_10, VAR_1 + (VAR_8 << VAR_2));

 if (!FUNC_1(VAR_10,
    VAR_3,
    VAR_4 |
    VAR_5, 0,
    VAR_0)) {
  return 0;
 }

 *VAR_9 = FUNC_0(VAR_7->ops->read(VAR_10, VAR_3),
   VAR_6);

 return 1;
}
