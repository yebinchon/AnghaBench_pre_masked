
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4740_rtc {scalar_t__ type; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct jz4740_rtc*) ;
 int FUNC_1 (struct jz4740_rtc*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct jz4740_rtc *VAR_1, size_t VAR_2,
 uint32_t VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1->type >= VAR_0)
  VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == 0)
  FUNC_2(VAR_3, VAR_1->base + VAR_2);

 return VAR_4;
}
