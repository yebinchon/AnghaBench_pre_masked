
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct cfv_info {scalar_t__ mru; scalar_t__ rx_hr; scalar_t__ rx_tr; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int *,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(int *VAR_3,
           struct cfv_info *VAR_4,
           u8 *VAR_5, u32 VAR_6)
{
 struct sk_buff *VAR_7;
 u32 VAR_8, VAR_9;

 *VAR_3 = 0;

 if (VAR_6 > VAR_4->mru || VAR_6 <= VAR_4->rx_hr + VAR_4->rx_tr) {
  FUNC_1(VAR_4->ndev,
      "Invalid frmlen:%u  mtu:%u hr:%d tr:%d\n",
      VAR_6, VAR_4->mru, VAR_4->rx_hr,
      VAR_4->rx_tr);
  *VAR_3 = -VAR_1;
  return ((void*)0);
 }

 VAR_8 = VAR_6 - (VAR_4->rx_hr + VAR_4->rx_tr);
 VAR_9 = (unsigned long)(VAR_5 + VAR_4->rx_hr) & (VAR_2 - 1);

 VAR_7 = FUNC_0(VAR_4->ndev, VAR_6 + VAR_9);
 if (!VAR_7) {
  *VAR_3 = -VAR_0;
  return ((void*)0);
 }

 FUNC_3(VAR_7, VAR_4->rx_hr + VAR_9);

 FUNC_2(VAR_7, VAR_5 + VAR_4->rx_hr, VAR_8);
 return VAR_7;
}
