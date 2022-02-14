
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath6kl {scalar_t__ target_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline u32 FUNC_0(struct ath6kl *VAR_4,
       u32 VAR_5)
{
 u32 VAR_6 = 0;

 if (VAR_4->target_type == VAR_2)
  VAR_6 = VAR_0 + VAR_5;
 else if (VAR_4->target_type == VAR_3)
  VAR_6 = VAR_1 + VAR_5;

 return VAR_6;
}
