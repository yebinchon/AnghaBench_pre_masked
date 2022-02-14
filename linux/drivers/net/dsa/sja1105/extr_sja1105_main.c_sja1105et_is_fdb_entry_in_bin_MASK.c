
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sja1105_private {int dummy; } ;
struct sja1105_l2_lookup_entry {scalar_t__ macaddr; scalar_t__ vlanid; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (struct sja1105_private*,int ,int,struct sja1105_l2_lookup_entry*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct sja1105_private *VAR_2, int VAR_3,
      const u8 *VAR_4, u16 VAR_5,
      struct sja1105_l2_lookup_entry *VAR_6,
      int *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  struct sja1105_l2_lookup_entry VAR_9 = {0};
  int VAR_10 = FUNC_2(VAR_3, VAR_8);




  if (FUNC_1(VAR_2, VAR_0,
      VAR_10, &VAR_9)) {
   if (VAR_7)
    *VAR_7 = VAR_8;
   continue;
  }

  if (VAR_9.macaddr == FUNC_0(VAR_4) &&
      VAR_9.vlanid == VAR_5) {
   if (VAR_6)
    *VAR_6 = VAR_9;
   return VAR_8;
  }
 }

 return -1;
}
