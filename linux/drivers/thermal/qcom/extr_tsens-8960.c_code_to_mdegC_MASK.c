
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsens_sensor {int offset; int tzd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(u32 VAR_1, const struct tsens_sensor *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2->tzd);
 VAR_4 = VAR_0 - VAR_3 * VAR_2->offset;

 return VAR_1 * VAR_3 + VAR_4;
}
