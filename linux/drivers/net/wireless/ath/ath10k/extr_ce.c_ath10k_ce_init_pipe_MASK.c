
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ce_attr {scalar_t__ dest_nentries; scalar_t__ src_nentries; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,unsigned int,struct ce_attr const*) ;
 int FUNC_1 (struct ath10k*,unsigned int,struct ce_attr const*) ;
 int FUNC_2 (struct ath10k*,char*,unsigned int,int) ;

int FUNC_3(struct ath10k *VAR_0, unsigned int VAR_1,
   const struct ce_attr *VAR_2)
{
 int VAR_3;

 if (VAR_2->src_nentries) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "Failed to initialize CE src ring for ID: %d (%d)\n",
       VAR_1, VAR_3);
   return VAR_3;
  }
 }

 if (VAR_2->dest_nentries) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_2(VAR_0, "Failed to initialize CE dest ring for ID: %d (%d)\n",
       VAR_1, VAR_3);
   return VAR_3;
  }
 }

 return 0;
}
