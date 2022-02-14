
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct iavf_adapter {size_t rss_lut_size; scalar_t__* rss_lut; int rss_key_size; int rss_key; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct iavf_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3,
    u8 *VAR_4)
{
 struct iavf_adapter *VAR_5 = FUNC_1(VAR_1);
 u16 VAR_6;

 if (VAR_4)
  *VAR_4 = VAR_0;
 if (!VAR_2)
  return 0;

 FUNC_0(VAR_3, VAR_5->rss_key, VAR_5->rss_key_size);


 for (VAR_6 = 0; VAR_6 < VAR_5->rss_lut_size; VAR_6++)
  VAR_2[VAR_6] = (u32)VAR_5->rss_lut[VAR_6];

 return 0;
}
