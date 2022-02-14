
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blogic_byte_count {unsigned int units; int billions; } ;



__attribute__((used)) static inline void FUNC_0(struct blogic_byte_count *VAR_0,
     unsigned int VAR_1)
{
 VAR_0->units += VAR_1;
 if (VAR_0->units > 999999999) {
  VAR_0->units -= 1000000000;
  VAR_0->billions++;
 }
}
