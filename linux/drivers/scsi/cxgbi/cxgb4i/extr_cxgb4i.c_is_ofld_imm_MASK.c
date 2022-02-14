
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct fw_ofld_tx_data_wr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff const*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct sk_buff *VAR_2)
{
 int VAR_3 = VAR_2->len;

 if (FUNC_1(FUNC_0(VAR_2, VAR_1)))
  VAR_3 += sizeof(struct fw_ofld_tx_data_wr);

 return VAR_3 <= VAR_0;
}
