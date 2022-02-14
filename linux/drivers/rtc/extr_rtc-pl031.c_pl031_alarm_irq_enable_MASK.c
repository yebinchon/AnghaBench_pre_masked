
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl031_local {scalar_t__ base; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pl031_local* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3,
 unsigned int VAR_4)
{
 struct pl031_local *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6;


 FUNC_2(VAR_0, VAR_5->base + VAR_1);

 VAR_6 = FUNC_1(VAR_5->base + VAR_2);

 if (VAR_4 == 1)
  FUNC_2(VAR_6 | VAR_0, VAR_5->base + VAR_2);
 else
  FUNC_2(VAR_6 & ~VAR_0, VAR_5->base + VAR_2);

 return 0;
}
