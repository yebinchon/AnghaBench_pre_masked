
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sih {int bytes_ixr; TYPE_1__* mask; int module; } ;
struct TYPE_2__ {int isr_offset; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(const struct sih *VAR_1)
{
 int VAR_2;
 union {
  u8 bytes[4];
  u32 word;
 } VAR_3;



 VAR_3.word = 0;
 VAR_2 = FUNC_1(VAR_1->module, VAR_3.bytes,
   VAR_1->mask[VAR_0].isr_offset, VAR_1->bytes_ixr);

 return (VAR_2 < 0) ? VAR_2 : FUNC_0(VAR_3.word);
}
