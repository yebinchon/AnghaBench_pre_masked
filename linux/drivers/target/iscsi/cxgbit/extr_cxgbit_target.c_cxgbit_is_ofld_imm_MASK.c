
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct fw_ofld_tx_data_wr {int dummy; } ;
struct cpl_tx_data_iso {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct sk_buff *VAR_3)
{
 int VAR_4 = VAR_3->len;

 if (FUNC_1(FUNC_0(VAR_3) & VAR_2))
  VAR_4 += sizeof(struct fw_ofld_tx_data_wr);

 if (FUNC_1(FUNC_0(VAR_3) & VAR_1))
  VAR_4 += sizeof(struct cpl_tx_data_iso);


 return VAR_4 <= 256;
}
