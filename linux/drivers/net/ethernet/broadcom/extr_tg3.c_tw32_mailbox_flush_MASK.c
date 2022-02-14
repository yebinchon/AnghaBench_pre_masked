
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int (* read32_mbox ) (struct tg3*,int ) ;int (* write32_mbox ) (struct tg3*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tg3*,int ,int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct tg3 *VAR_3, u32 VAR_4, u32 VAR_5)
{
 VAR_3->write32_mbox(VAR_3, VAR_4, VAR_5);
 if (FUNC_2(VAR_3, VAR_0) ||
     (!FUNC_2(VAR_3, VAR_2) &&
      !FUNC_2(VAR_3, VAR_1)))
  VAR_3->read32_mbox(VAR_3, VAR_4);
}
