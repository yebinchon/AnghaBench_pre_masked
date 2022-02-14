
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsens_sensor {int offset; int slope; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(u32 VAR_1, const struct tsens_sensor *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = (VAR_1 * VAR_0) - VAR_2->offset;
 VAR_5 = VAR_2->slope;

 if (VAR_4 > 0)
  VAR_3 = VAR_4 + (VAR_5 / 2);
 else if (VAR_4 < 0)
  VAR_3 = VAR_4 - (VAR_5 / 2);
 else
  VAR_3 = VAR_4;

 VAR_3 /= VAR_5;

 return VAR_3;
}
