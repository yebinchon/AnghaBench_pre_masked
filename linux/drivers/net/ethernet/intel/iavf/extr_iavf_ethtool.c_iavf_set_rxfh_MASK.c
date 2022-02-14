
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct iavf_adapter {size_t rss_lut_size; scalar_t__* rss_lut; int rss_key_size; int rss_key; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (struct iavf_adapter*) ;
 int FUNC_1 (int ,scalar_t__ const*,int ) ;
 struct iavf_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, const u32 *VAR_4,
    const u8 *VAR_5, const u8 VAR_6)
{
 struct iavf_adapter *VAR_7 = FUNC_2(VAR_3);
 u16 VAR_8;


 if (VAR_5 ||
     (VAR_6 != VAR_1 && VAR_6 != VAR_2))
  return -VAR_0;
 if (!VAR_4)
  return 0;

 if (VAR_5)
  FUNC_1(VAR_7->rss_key, VAR_5, VAR_7->rss_key_size);


 for (VAR_8 = 0; VAR_8 < VAR_7->rss_lut_size; VAR_8++)
  VAR_7->rss_lut[VAR_8] = (u8)(VAR_4[VAR_8]);

 return FUNC_0(VAR_7);
}
