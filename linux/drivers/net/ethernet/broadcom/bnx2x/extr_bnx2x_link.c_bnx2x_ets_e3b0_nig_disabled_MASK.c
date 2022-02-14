
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct link_vars {int dummy; } ;
struct link_params {scalar_t__ port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct bnx2x*,int ,int) ;
 int FUNC_1 (struct link_params const*,int const) ;
 int FUNC_2 (struct link_vars const*) ;

__attribute__((used)) static void FUNC_3(const struct link_params *VAR_29,
     const struct link_vars *VAR_30)
{
 struct bnx2x *VAR_31 = VAR_29->bp;
 const u8 VAR_32 = VAR_29->port;
 const u32 VAR_33 = FUNC_2(VAR_30);





 if (VAR_32) {
  FUNC_0(VAR_31, VAR_27, 0x543210);
  FUNC_0(VAR_31, VAR_28, 0x0);
 } else {
  FUNC_0(VAR_31, VAR_14, 0x76543210);
  FUNC_0(VAR_31, VAR_15, 0x8);
 }



 FUNC_0(VAR_31, (VAR_32) ? VAR_26 :
     VAR_13, 0x100);



 if (VAR_32) {

  FUNC_0(VAR_31, VAR_16, 0x210543);
  FUNC_0(VAR_31, VAR_17, 0x0);
 } else {

  FUNC_0(VAR_31, VAR_0,
         0x43210876);
  FUNC_0(VAR_31, VAR_1, 0x5);
 }
 if (VAR_32)
  FUNC_0(VAR_31, VAR_18, 0x3f);
 else
  FUNC_0(VAR_31, VAR_2, 0x1ff);

 FUNC_0(VAR_31, (VAR_32) ? VAR_19 :
     VAR_3, 0);







 FUNC_0(VAR_31, (VAR_32) ? VAR_20 :
     VAR_4, 0x0);
 FUNC_0(VAR_31, (VAR_32) ? VAR_21 :
     VAR_5, 0x0);
 FUNC_0(VAR_31, (VAR_32) ? VAR_22 :
     VAR_6, 0x0);
 FUNC_0(VAR_31, (VAR_32) ? VAR_23 :
     VAR_7, 0x0);
 FUNC_0(VAR_31, (VAR_32) ? VAR_24 :
     VAR_8, 0x0);
 FUNC_0(VAR_31, (VAR_32) ? VAR_25 :
     VAR_9, 0x0);
 if (!VAR_32) {
  FUNC_0(VAR_31, VAR_10, 0x0);
  FUNC_0(VAR_31, VAR_11, 0x0);
  FUNC_0(VAR_31, VAR_12, 0x0);
 }

 FUNC_1(VAR_29, VAR_33);
}
