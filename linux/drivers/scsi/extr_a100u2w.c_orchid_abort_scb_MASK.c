
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_scb {unsigned char scbidx; } ;
struct orc_host {scalar_t__ base; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 scalar_t__ FUNC_2 (struct orc_host*) ;
 scalar_t__ FUNC_3 (struct orc_host*,unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct orc_host * VAR_5, struct orc_scb * VAR_6)
{
 unsigned char VAR_7, VAR_8;

 FUNC_1(VAR_1, VAR_5->base + VAR_3);
 FUNC_1(VAR_0, VAR_5->base + VAR_2);
 if (FUNC_2(VAR_5) == 0)
  return 0;

 FUNC_1(VAR_6->scbidx, VAR_5->base + VAR_3);
 FUNC_1(VAR_0, VAR_5->base + VAR_2);
 if (FUNC_2(VAR_5) == 0)
  return 0;

 if (FUNC_3(VAR_5, &VAR_7) == 0)
  return 0;
 VAR_8 = FUNC_0(VAR_5->base + VAR_3);
 FUNC_1(VAR_7, VAR_5->base + VAR_4);

 if (VAR_8 == 1)
  return 0;
 return 1;
}
