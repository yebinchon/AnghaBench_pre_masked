
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct orc_host {scalar_t__ base; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char,scalar_t__) ;
 scalar_t__ FUNC_1 (struct orc_host*) ;

__attribute__((used)) static u8 FUNC_2(struct orc_host * VAR_4, unsigned char VAR_5, unsigned char VAR_6)
{
 FUNC_0(VAR_1, VAR_4->base + VAR_3);
 FUNC_0(VAR_0, VAR_4->base + VAR_2);
 if (FUNC_1(VAR_4) == 0)
  return 0;

 FUNC_0(VAR_5, VAR_4->base + VAR_3);
 FUNC_0(VAR_0, VAR_4->base + VAR_2);
 if (FUNC_1(VAR_4) == 0)
  return 0;

 FUNC_0(VAR_6, VAR_4->base + VAR_3);
 FUNC_0(VAR_0, VAR_4->base + VAR_2);
 if (FUNC_1(VAR_4) == 0)
  return 0;

 return 1;
}
