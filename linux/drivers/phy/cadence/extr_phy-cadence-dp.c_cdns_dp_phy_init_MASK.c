
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct cdns_dp_phy {int num_lanes; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct cdns_dp_phy*) ;
 int FUNC_1 (struct cdns_dp_phy*) ;
 int FUNC_2 (struct cdns_dp_phy*) ;
 int FUNC_3 (struct cdns_dp_phy*) ;
 int FUNC_4 (struct cdns_dp_phy*) ;
 int FUNC_5 (struct cdns_dp_phy*,scalar_t__,int,int,int) ;
 struct cdns_dp_phy* FUNC_6 (struct phy*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_8)
{
 unsigned char VAR_9;

 struct cdns_dp_phy *VAR_10 = FUNC_6(VAR_8);

 FUNC_7(0x0003, VAR_10->base + VAR_0);


 FUNC_0(VAR_10);






 FUNC_5(VAR_10, VAR_2,
    VAR_3, 6, 0x0000);

 if (VAR_10->num_lanes >= 2) {
  FUNC_5(VAR_10,
     VAR_2,
     VAR_4, 6, 0x0000);

  if (VAR_10->num_lanes == 4) {
   FUNC_5(VAR_10,
      VAR_2,
      VAR_5, 6, 0);
   FUNC_5(VAR_10,
      VAR_2,
      VAR_6, 6, 0);
  }
 }

 FUNC_5(VAR_10, VAR_1,
    0, 1, 0x0000);

 if (VAR_10->num_lanes >= 2) {
  FUNC_5(VAR_10, VAR_1,
     1, 1, 0x0000);
  if (VAR_10->num_lanes == 4) {
   FUNC_5(VAR_10,
      VAR_1,
      2, 1, 0x0000);
   FUNC_5(VAR_10,
      VAR_1,
      3, 1, 0x0000);
  }
 }





 VAR_9 = (1 << VAR_10->num_lanes) - 1;
 FUNC_7(((0xF & ~VAR_9) << 4) | (0xF & VAR_9),
     VAR_10->base + VAR_7);


 FUNC_7(0x0001, VAR_10->base + VAR_1);


 FUNC_2(VAR_10);
 FUNC_1(VAR_10);


 FUNC_5(VAR_10, VAR_7, 8, 1, 1);
 FUNC_4(VAR_10);
 FUNC_3(VAR_10);

 return 0;
}
