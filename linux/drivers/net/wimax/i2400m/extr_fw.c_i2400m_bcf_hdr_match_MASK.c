
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i2400m_bcf_hdr {int module_id; } ;
struct i2400m {TYPE_1__* barker; } ;
struct TYPE_2__ {int * data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static
unsigned FUNC_1(struct i2400m *VAR_1,
         const struct i2400m_bcf_hdr *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1->barker->data[0])
  & 0x7fffffff;
 u32 VAR_4 = FUNC_0(VAR_2->module_id)
  & 0x7fffffff;


 if (VAR_3 == VAR_0 && VAR_4 == 0)
  return 1;
 if (VAR_4 == VAR_3)
  return 1;
 return 0;
}
