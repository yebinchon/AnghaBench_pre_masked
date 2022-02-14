
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
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct macb *VAR_7)
{
 u32 VAR_8;
 unsigned long VAR_9 = FUNC_1(VAR_7->pclk);

 if (VAR_9 <= 20000000)
  VAR_8 = FUNC_0(VAR_0, VAR_5);
 else if (VAR_9 <= 40000000)
  VAR_8 = FUNC_0(VAR_0, VAR_1);
 else if (VAR_9 <= 80000000)
  VAR_8 = FUNC_0(VAR_0, VAR_2);
 else if (VAR_9 <= 120000000)
  VAR_8 = FUNC_0(VAR_0, VAR_3);
 else if (VAR_9 <= 160000000)
  VAR_8 = FUNC_0(VAR_0, VAR_4);
 else
  VAR_8 = FUNC_0(VAR_0, VAR_6);

 return VAR_8;
}
