
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct fm10k_hw {int dummy; } ;
struct fm10k_intfc {scalar_t__* rssrk; struct fm10k_hw hw; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,scalar_t__ const*) ;
 int FUNC_2 (struct fm10k_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct fm10k_intfc* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, const u32 *VAR_5,
     const u8 *VAR_6, const u8 VAR_7)
{
 struct fm10k_intfc *VAR_8 = FUNC_4(VAR_4);
 struct fm10k_hw *VAR_9 = &VAR_8->hw;
 int VAR_10, VAR_11;


 if (VAR_7 != VAR_1 && VAR_7 != VAR_2)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_4, VAR_5);
 if (VAR_11 || !VAR_6)
  return VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++, VAR_6 += 4) {
  u32 VAR_12 = FUNC_3(*(__le32 *)VAR_6);

  if (VAR_8->rssrk[VAR_10] == VAR_12)
   continue;

  VAR_8->rssrk[VAR_10] = VAR_12;
  FUNC_2(VAR_9, FUNC_0(0, VAR_10), VAR_12);
 }

 return 0;
}
