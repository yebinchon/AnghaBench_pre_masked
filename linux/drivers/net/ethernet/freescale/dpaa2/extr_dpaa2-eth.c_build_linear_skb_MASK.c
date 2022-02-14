
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct dpaa2_fd {int dummy; } ;
struct dpaa2_eth_channel {int buf_count; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (void*,int ) ;
 int FUNC_1 (struct dpaa2_fd const*) ;
 int FUNC_2 (struct dpaa2_fd const*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct dpaa2_eth_channel *VAR_1,
     const struct dpaa2_fd *VAR_2,
     void *VAR_3)
{
 struct sk_buff *VAR_4 = ((void*)0);
 u16 VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6 = FUNC_1(VAR_2);

 VAR_1->buf_count--;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (FUNC_5(!VAR_4))
  return ((void*)0);

 FUNC_4(VAR_4, VAR_5);
 FUNC_3(VAR_4, VAR_6);

 return VAR_4;
}
