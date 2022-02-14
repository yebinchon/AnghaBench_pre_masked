
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aat2870_data {scalar_t__ en_pin; scalar_t__ is_enable; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_1(struct aat2870_data *VAR_0)
{
 if (VAR_0->en_pin >= 0)
  FUNC_0(VAR_0->en_pin, 0);

 VAR_0->is_enable = 0;
}
