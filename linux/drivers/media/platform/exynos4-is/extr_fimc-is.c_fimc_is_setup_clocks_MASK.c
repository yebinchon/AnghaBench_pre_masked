
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {int * clocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct fimc_is *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_0(VAR_10->clocks[VAR_2],
     VAR_10->clocks[VAR_3]);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_10->clocks[VAR_4],
     VAR_10->clocks[VAR_5]);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_10->clocks[VAR_6], VAR_0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_10->clocks[VAR_7], VAR_0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_10->clocks[VAR_8],
     VAR_1);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_1(VAR_10->clocks[VAR_9],
     VAR_1);
}
