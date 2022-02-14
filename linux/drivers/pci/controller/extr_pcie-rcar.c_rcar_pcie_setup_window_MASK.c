
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int flags; int start; } ;
struct rcar_pcie {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rcar_pcie*,int,int ) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(int VAR_4, struct rcar_pcie *VAR_5,
       struct resource *VAR_6)
{

 resource_size_t VAR_7;
 resource_size_t VAR_8;
 u32 VAR_9;

 FUNC_6(VAR_5, 0x00000000, FUNC_3(VAR_4));





 VAR_7 = FUNC_7(VAR_6);
 VAR_9 = (FUNC_8(VAR_7) / VAR_3) - 1;
 FUNC_6(VAR_5, VAR_9 << 7, FUNC_1(VAR_4));

 if (VAR_6->flags & VAR_0)
  VAR_8 = FUNC_5(VAR_6->start);
 else
  VAR_8 = VAR_6->start;

 FUNC_6(VAR_5, FUNC_9(VAR_8), FUNC_2(VAR_4));
 FUNC_6(VAR_5, FUNC_4(VAR_8) & ~0x7F,
      FUNC_0(VAR_4));


 VAR_9 = VAR_2;
 if (VAR_6->flags & VAR_0)
  VAR_9 |= VAR_1;

 FUNC_6(VAR_5, VAR_9, FUNC_3(VAR_4));
}
