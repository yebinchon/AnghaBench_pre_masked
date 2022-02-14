
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (struct rcar_pcie*,int,int ) ;
 int FUNC_5 (struct rcar_pcie*) ;
 int FUNC_6 (struct rcar_pcie*) ;
 int FUNC_7 (struct rcar_pcie*,scalar_t__,int,int) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct rcar_pcie *VAR_21)
{
 int VAR_22;


 FUNC_4(VAR_21, 0, VAR_6);


 FUNC_4(VAR_21, 1, VAR_5);

 VAR_22 = FUNC_6(VAR_21);
 if (VAR_22)
  return VAR_22;






 FUNC_4(VAR_21, VAR_8 << 16, VAR_2);





 FUNC_7(VAR_21, FUNC_1(VAR_18), 0xff, 1);
 FUNC_7(VAR_21, FUNC_1(VAR_19), 0xff, 1);


 FUNC_7(VAR_21, FUNC_2(0), 0xff, VAR_7);
 FUNC_7(VAR_21, FUNC_2(VAR_9),
  VAR_10, VAR_15 << 4);
 FUNC_7(VAR_21, FUNC_1(VAR_16), 0x7f,
  VAR_17);


 FUNC_7(VAR_21, FUNC_2(VAR_11), VAR_12,
  VAR_12);


 FUNC_7(VAR_21, FUNC_2(VAR_13), VAR_14, 0);


 FUNC_7(VAR_21, VAR_20 + 1, 0x3f, 50);


 FUNC_7(VAR_21, FUNC_3(0), 0xfff00000, 0);


 if (FUNC_0(VAR_1))
  FUNC_4(VAR_21, 0x801f0000, VAR_4);


 FUNC_4(VAR_21, VAR_0, VAR_6);


 VAR_22 = FUNC_5(VAR_21);
 if (VAR_22)
  return VAR_22;


 FUNC_7(VAR_21, VAR_3, 0, 0xF << 8);

 FUNC_8();

 return 0;
}
