
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int iq; int oq; } ;
struct octeon_device {TYPE_1__ io_qmask; } ;
struct net_device {int dummy; } ;
struct lio {int netdev; struct octeon_device* oct_dev; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;


 struct lio* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (struct octeon_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct lio*,int *) ;
 int FUNC_6 (struct lio*,int ,int ,char*) ;
 char** VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 int FUNC_7 (int *,char*,...) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct lio *VAR_8 = FUNC_2(VAR_5);
 struct octeon_device *VAR_9 = VAR_8->oct_dev;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 switch (VAR_6) {
 case 128:
  VAR_14 = FUNC_0(VAR_4);
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   FUNC_7(VAR_7, "%s", VAR_4[VAR_13]);
   VAR_7 += VAR_0;
  }

  VAR_10 = FUNC_0(VAR_3);
  for (VAR_12 = 0; VAR_12 < FUNC_3(VAR_9); VAR_12++) {
   if (!(VAR_9->io_qmask.iq & FUNC_1(VAR_12)))
    continue;
   for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
    FUNC_7(VAR_7, "tx-%d-%s", VAR_12,
     VAR_3[VAR_13]);
    VAR_7 += VAR_0;
   }
  }

  VAR_11 = FUNC_0(VAR_2);
  for (VAR_12 = 0; VAR_12 < FUNC_4(VAR_9); VAR_12++) {
   if (!(VAR_9->io_qmask.oq & FUNC_1(VAR_12)))
    continue;
   for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
    FUNC_7(VAR_7, "rx-%d-%s", VAR_12,
     VAR_2[VAR_13]);
    VAR_7 += VAR_0;
   }
  }
  break;

 case 129:
  FUNC_5(VAR_8, VAR_7);
  break;
 default:
  FUNC_6(VAR_8, VAR_1, VAR_8->netdev, "Unknown Stringset !!\n");
  break;
 }
}
