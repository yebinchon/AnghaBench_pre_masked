
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_ctx {int rotation; scalar_t__ vflip; scalar_t__ hflip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct fimc_ctx *VAR_4)
{
 u32 VAR_5 = VAR_1;

 if (VAR_4->hflip)
  VAR_5 = VAR_3;
 if (VAR_4->vflip)
  VAR_5 = VAR_2;

 if (VAR_4->rotation <= 90)
  return VAR_5;

 return (VAR_5 ^ VAR_0) & VAR_0;
}
