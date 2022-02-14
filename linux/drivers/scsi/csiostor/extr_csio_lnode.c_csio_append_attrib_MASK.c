
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct fc_fdmi_attr_entry {scalar_t__ value; void* len; void* type; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,void*,size_t) ;
 int FUNC_3 (scalar_t__,int ,int) ;

__attribute__((used)) static inline void
FUNC_4(uint8_t **VAR_1, uint16_t VAR_2, void *VAR_3, size_t VAR_4)
{
 uint16_t VAR_5;
 struct fc_fdmi_attr_entry *VAR_6 = (struct fc_fdmi_attr_entry *)*VAR_1;

 if (FUNC_0(VAR_4 > VAR_0))
  return;

 VAR_5 = VAR_4;

 VAR_6->type = FUNC_1(VAR_2);
 VAR_5 += 4;
 VAR_5 = (VAR_5 + 3) & ~3;
 VAR_6->len = FUNC_1(VAR_5);
 FUNC_2(VAR_6->value, VAR_3, VAR_4);
 if (VAR_5 > VAR_4)
  FUNC_3(VAR_6->value + VAR_4, 0, VAR_5 - VAR_4);
 *VAR_1 += VAR_5;
}
