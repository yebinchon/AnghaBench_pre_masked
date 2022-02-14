
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iavf_hw {int dummy; } ;
struct iavf_adapter {int rss_key_size; int rss_lut_size; scalar_t__ rss_lut; scalar_t__ rss_key; struct iavf_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iavf_hw*) ;
 int FUNC_3 (struct iavf_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct iavf_adapter *VAR_0)
{
 struct iavf_hw *VAR_1 = &VAR_0->hw;
 u32 *VAR_2;
 u16 VAR_3;

 VAR_2 = (u32 *)VAR_0->rss_key;
 for (VAR_3 = 0; VAR_3 <= VAR_0->rss_key_size / 4; VAR_3++)
  FUNC_3(VAR_1, FUNC_0(VAR_3), VAR_2[VAR_3]);

 VAR_2 = (u32 *)VAR_0->rss_lut;
 for (VAR_3 = 0; VAR_3 <= VAR_0->rss_lut_size / 4; VAR_3++)
  FUNC_3(VAR_1, FUNC_1(VAR_3), VAR_2[VAR_3]);

 FUNC_2(VAR_1);

 return 0;
}
