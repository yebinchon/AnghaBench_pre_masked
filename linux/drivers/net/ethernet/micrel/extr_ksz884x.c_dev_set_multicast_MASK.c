
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_hw {int all_multi; } ;
struct dev_priv {int multicast; } ;


 int FUNC_0 (struct ksz_hw*,int) ;

__attribute__((used)) static void FUNC_1(struct dev_priv *VAR_0, struct ksz_hw *VAR_1,
 int VAR_2)
{
 if (VAR_2 != VAR_0->multicast) {
  u8 VAR_3 = VAR_1->all_multi;

  if (VAR_2)
   ++VAR_1->all_multi;
  else
   --VAR_1->all_multi;
  VAR_0->multicast = VAR_2;


  if (VAR_1->all_multi <= 1 && VAR_3 <= 1)
   FUNC_0(VAR_1, VAR_1->all_multi);
 }
}
