
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks8842_adapter {int conf_flags; scalar_t__ hw_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ks8842_adapter*) ;
 int VAR_3 ;
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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct ks8842_adapter*,int,int,int ) ;
 int FUNC_3 (struct ks8842_adapter*) ;
 int FUNC_4 (struct ks8842_adapter*) ;
 int FUNC_5 (struct ks8842_adapter*) ;
 int FUNC_6 (struct ks8842_adapter*,int,int,int ) ;

__attribute__((used)) static void FUNC_7(struct ks8842_adapter *VAR_17)
{

 FUNC_5(VAR_17);


 FUNC_6(VAR_17, 16, 0x000E, VAR_15);



 FUNC_6(VAR_17, 16, 0x8 | 0x20 | 0x40 | 0x80 | 0x400,
  VAR_9);


 FUNC_6(VAR_17, 17, 0x4000, VAR_16);


 FUNC_6(VAR_17, 17, 0x4000, VAR_10);


 FUNC_6(VAR_17, 0, 0x1000, VAR_8);


 FUNC_2(VAR_17, 32, 1 << 8, VAR_11);


 FUNC_2(VAR_17, 32, 1 << 3, VAR_12);


 FUNC_6(VAR_17, 48, 0x1E07, VAR_6);


 FUNC_2(VAR_17, 49, 1 << 13, VAR_7);


 FUNC_4(VAR_17);


 FUNC_3(VAR_17);


 FUNC_6(VAR_17, 18, 0xffff, VAR_5);


 if (FUNC_0(VAR_17)) {




  FUNC_1(VAR_2, VAR_17->hw_addr + VAR_14);
  FUNC_6(VAR_17, 18, VAR_1, VAR_4);
 } else {
  if (!(VAR_17->conf_flags & VAR_3))
   FUNC_1(VAR_0,
    VAR_17->hw_addr + VAR_14);
  FUNC_6(VAR_17, 18, VAR_0, VAR_4);
 }

 FUNC_6(VAR_17, 32, 0x1, VAR_13);
}
