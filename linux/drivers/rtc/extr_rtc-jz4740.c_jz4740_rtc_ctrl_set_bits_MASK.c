
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4740_rtc {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jz4740_rtc*,int ) ;
 int FUNC_1 (struct jz4740_rtc*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct jz4740_rtc *VAR_3, uint32_t VAR_4,
 bool VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 uint32_t VAR_8;

 FUNC_2(&VAR_3->lock, VAR_7);

 VAR_8 = FUNC_0(VAR_3, VAR_0);


 VAR_8 |= VAR_1 | VAR_2;

 if (VAR_5)
  VAR_8 |= VAR_4;
 else
  VAR_8 &= ~VAR_4;

 VAR_6 = FUNC_1(VAR_3, VAR_0, VAR_8);

 FUNC_3(&VAR_3->lock, VAR_7);

 return VAR_6;
}
