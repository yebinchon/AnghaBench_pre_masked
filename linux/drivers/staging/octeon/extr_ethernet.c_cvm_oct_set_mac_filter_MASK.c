
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cvmx_gmxx_prtx_cfg {unsigned long long u64; } ;
typedef int u8 ;
typedef int u64 ;
struct octeon_ethernet {int port; } ;
struct net_device {int* dev_addr; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (int) ;
 unsigned long long FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 struct octeon_ethernet* FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_1)
{
 struct octeon_ethernet *VAR_2 = FUNC_14(VAR_1);
 union cvmx_gmxx_prtx_cfg VAR_3;
 int VAR_4 = FUNC_9(VAR_2->port);

 if ((VAR_4 < 2) &&
     (FUNC_11(VAR_4) !=
  VAR_0)) {
  int VAR_5;
  u8 *VAR_6 = VAR_1->dev_addr;
  u64 VAR_7 = 0;
  int VAR_8 = FUNC_8(VAR_2->port);

  for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
   VAR_7 = (VAR_7 << 8) | (u64)VAR_6[VAR_5];

  VAR_3.u64 =
      FUNC_12(FUNC_0(VAR_8, VAR_4));
  FUNC_13(FUNC_0(VAR_8, VAR_4),
          VAR_3.u64 & ~1ull);

  FUNC_13(FUNC_7(VAR_8, VAR_4), VAR_7);
  FUNC_13(FUNC_1(VAR_8, VAR_4),
          VAR_6[0]);
  FUNC_13(FUNC_2(VAR_8, VAR_4),
          VAR_6[1]);
  FUNC_13(FUNC_3(VAR_8, VAR_4),
          VAR_6[2]);
  FUNC_13(FUNC_4(VAR_8, VAR_4),
          VAR_6[3]);
  FUNC_13(FUNC_5(VAR_8, VAR_4),
          VAR_6[4]);
  FUNC_13(FUNC_6(VAR_8, VAR_4),
          VAR_6[5]);
  FUNC_10(VAR_1);
  FUNC_13(FUNC_0(VAR_8, VAR_4),
          VAR_3.u64);
 }
 return 0;
}
