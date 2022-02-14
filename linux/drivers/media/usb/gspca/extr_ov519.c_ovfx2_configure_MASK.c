
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int stopped; } ;
struct ov_regvals {int member_0; int member_1; } ;


 int FUNC_0 (struct ov_regvals const*) ;
 int FUNC_1 (struct sd*,struct ov_regvals const*,int ) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_0)
{
 static const struct ov_regvals VAR_1[] = {
  { 0x00, 0x60 },
  { 0x02, 0x01 },
  { 0x0f, 0x1d },
  { 0xe9, 0x82 },
  { 0xea, 0xc7 },
  { 0xeb, 0x10 },
  { 0xec, 0xf6 },
 };

 VAR_0->stopped = 1;

 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1));
}
