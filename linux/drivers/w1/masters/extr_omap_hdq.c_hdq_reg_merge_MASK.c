
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct hdq_data {scalar_t__ hdq_base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_2(struct hdq_data *VAR_0, u32 VAR_1,
   u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = (FUNC_0(VAR_0->hdq_base + VAR_1) & ~VAR_3)
   | (VAR_2 & VAR_3);
 FUNC_1(VAR_4, VAR_0->hdq_base + VAR_1);

 return VAR_4;
}
