
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct macb {int pclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct macb*) ;
 scalar_t__ FUNC_3 (struct macb*) ;

__attribute__((used)) static u32 FUNC_4(struct macb *VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7;

 if (FUNC_3(VAR_5))
  return FUNC_2(VAR_5);

 VAR_7 = FUNC_1(VAR_5->pclk);
 if (VAR_7 <= 20000000)
  VAR_6 = FUNC_0(VAR_0, VAR_4);
 else if (VAR_7 <= 40000000)
  VAR_6 = FUNC_0(VAR_0, VAR_1);
 else if (VAR_7 <= 80000000)
  VAR_6 = FUNC_0(VAR_0, VAR_2);
 else
  VAR_6 = FUNC_0(VAR_0, VAR_3);

 return VAR_6;
}
