
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct qcaspi {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (size_t*,int ,int) ;
 struct qcaspi* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qcaspi*,int,size_t*) ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_2, struct ethtool_regs *VAR_3, void *VAR_4)
{
 struct qcaspi *VAR_5 = FUNC_2(VAR_2);
 u32 *VAR_6 = VAR_4;
 unsigned int VAR_7;

 VAR_3->version = 1;
 FUNC_1(VAR_6, 0, sizeof(u32) * VAR_0);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  u16 VAR_8, VAR_9;

  FUNC_3(VAR_5, VAR_1[VAR_7], &VAR_9);
  VAR_8 = VAR_1[VAR_7] >> 8;
  VAR_6[VAR_8] = VAR_9;
 }
}
