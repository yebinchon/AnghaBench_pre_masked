
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_ring_info {int rx_channel; } ;
struct niu {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,unsigned long long) ;
 int FUNC_2 (struct niu*,struct rx_ring_info*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_4, struct rx_ring_info *VAR_5)
{
 u64 VAR_6 = FUNC_3(FUNC_0(VAR_5->rx_channel));
 int VAR_7 = 0;


 if (VAR_6 & (VAR_1 |
      VAR_2))
  VAR_7 = -VAR_0;

 if (VAR_7) {
  FUNC_1(VAR_4->dev, "RX channel %u error, stat[%llx]\n",
      VAR_5->rx_channel,
      (unsigned long long) VAR_6);

  FUNC_2(VAR_4, VAR_5, VAR_6);
 }

 FUNC_4(FUNC_0(VAR_5->rx_channel),
      VAR_6 & VAR_3);

 return VAR_7;
}
