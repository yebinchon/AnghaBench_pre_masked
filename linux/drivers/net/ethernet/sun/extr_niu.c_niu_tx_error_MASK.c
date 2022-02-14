
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct tx_ring_info {int tx_channel; } ;
struct niu {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_4 (struct niu*,struct tx_ring_info*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct niu *VAR_1, struct tx_ring_info *VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_5(FUNC_0(VAR_2->tx_channel));
 VAR_4 = FUNC_5(FUNC_1(VAR_2->tx_channel));
 VAR_5 = FUNC_5(FUNC_2(VAR_2->tx_channel));

 FUNC_3(VAR_1->dev, "TX channel %u error, cs[%llx] logh[%llx] logl[%llx]\n",
     VAR_2->tx_channel,
     (unsigned long long)VAR_3,
     (unsigned long long)VAR_4,
     (unsigned long long)VAR_5);

 FUNC_4(VAR_1, VAR_2, VAR_3);

 return -VAR_0;
}
