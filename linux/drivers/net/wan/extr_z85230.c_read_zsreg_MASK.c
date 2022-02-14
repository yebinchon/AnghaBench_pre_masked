
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct z8530_channel {int ctrlio; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_2(struct z8530_channel *VAR_0, u8 VAR_1)
{
 if(VAR_1)
  FUNC_1(VAR_0->ctrlio, VAR_1);
 return FUNC_0(VAR_0->ctrlio);
}
