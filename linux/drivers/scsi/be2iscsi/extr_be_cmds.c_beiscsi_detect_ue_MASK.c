
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct beiscsi_hba {int state; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct beiscsi_hba*,int ,char*,...) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct beiscsi_hba *VAR_8)
{
 uint32_t VAR_9 = 0, VAR_10 = 0;
 uint32_t VAR_11 = 0, VAR_12 = 0;
 uint8_t VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_1(VAR_8->pcidev,
         VAR_3, &VAR_12);
 FUNC_1(VAR_8->pcidev,
         VAR_5,
         &VAR_10);
 FUNC_1(VAR_8->pcidev,
         VAR_2,
         &VAR_11);
 FUNC_1(VAR_8->pcidev,
         VAR_4,
         &VAR_9);

 VAR_12 = (VAR_12 & ~VAR_10);
 VAR_11 = (VAR_11 & ~VAR_9);


 if (VAR_12 || VAR_11) {
  FUNC_2(VAR_0, &VAR_8->state);
  FUNC_0(VAR_8, VAR_1,
         "BC_%d : HBA error detected\n");
  VAR_14 = 1;
 }

 if (VAR_12) {
  for (VAR_13 = 0; VAR_12; VAR_12 >>= 1, VAR_13++) {
   if (VAR_12 & 1)
    FUNC_0(VAR_8, VAR_1,
           "BC_%d : UE_LOW %s bit set\n",
           VAR_7[VAR_13]);
  }
 }

 if (VAR_11) {
  for (VAR_13 = 0; VAR_11; VAR_11 >>= 1, VAR_13++) {
   if (VAR_11 & 1)
    FUNC_0(VAR_8, VAR_1,
           "BC_%d : UE_HIGH %s bit set\n",
           VAR_6[VAR_13]);
  }
 }
 return VAR_14;
}
