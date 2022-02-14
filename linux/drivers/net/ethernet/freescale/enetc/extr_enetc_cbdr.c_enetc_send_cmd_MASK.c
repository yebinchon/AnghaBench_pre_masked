
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_cbdr {int next_to_use; int bd_count; int cir; int pir; int bd_base; } ;
struct enetc_si {struct enetc_cbdr cbd_ring; } ;
struct enetc_cbd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct enetc_cbd* FUNC_0 (struct enetc_cbdr,int) ;
 int VAR_2 ;
 int FUNC_1 (struct enetc_cbdr*) ;
 int FUNC_2 (struct enetc_si*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct enetc_si *VAR_3, struct enetc_cbd *VAR_4)
{
 struct enetc_cbdr *VAR_5 = &VAR_3->cbd_ring;
 int VAR_6 = VAR_2;
 struct enetc_cbd *VAR_7;
 int VAR_8;

 if (FUNC_6(!VAR_5->bd_base))
  return -VAR_1;

 if (FUNC_6(!FUNC_1(VAR_5)))
  FUNC_2(VAR_3);

 VAR_8 = VAR_5->next_to_use;
 VAR_7 = FUNC_0(*VAR_5, VAR_8);


 *VAR_7 = *VAR_4;
 VAR_8 = (VAR_8 + 1) % VAR_5->bd_count;

 VAR_5->next_to_use = VAR_8;

 FUNC_4(VAR_5->pir, VAR_8);

 do {
  if (FUNC_3(VAR_5->cir) == VAR_8)
   break;
  FUNC_5(10);
  VAR_6 -= 10;
 } while (VAR_6);

 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_3);

 return 0;
}
