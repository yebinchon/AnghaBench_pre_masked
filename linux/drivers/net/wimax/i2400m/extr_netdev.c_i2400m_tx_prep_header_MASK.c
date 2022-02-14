
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m_pl_data_hdr {scalar_t__ reserved; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct i2400m_pl_data_hdr* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static
void FUNC_2(struct sk_buff *VAR_1)
{
 struct i2400m_pl_data_hdr *VAR_2;
 FUNC_0(VAR_1, VAR_0);
 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2));
 VAR_2->reserved = 0;
}
