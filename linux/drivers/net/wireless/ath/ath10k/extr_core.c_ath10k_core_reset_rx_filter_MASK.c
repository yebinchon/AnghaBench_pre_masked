
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath10k {int * mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ) ;
 int FUNC_3 (struct ath10k*,int,int,int,int const*) ;
 int FUNC_4 (struct ath10k*,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 const u8 *VAR_7;

 VAR_4 = 0;
 VAR_5 = VAR_1;
 VAR_6 = FUNC_2(VAR_2, VAR_0);
 VAR_7 = VAR_2->mac_addr;

 VAR_3 = FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6,
         VAR_7);
 if (VAR_3) {
  FUNC_0(VAR_2, "failed to create dummy vdev: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_2, VAR_4);
 if (VAR_3) {
  FUNC_0(VAR_2, "failed to delete dummy vdev: %d\n", VAR_3);
  return VAR_3;
 }
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2, "failed to ping firmware: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
