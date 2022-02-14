
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct net_device {int dummy; } ;
struct iavf_priv_flags {int flag; } ;
struct iavf_adapter {int flags; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 struct iavf_priv_flags* VAR_1 ;
 struct iavf_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_2)
{
 struct iavf_adapter *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  const struct iavf_priv_flags *VAR_6;

  VAR_6 = &VAR_1[VAR_4];

  if (VAR_6->flag & VAR_3->flags)
   VAR_5 |= FUNC_0(VAR_4);
 }

 return VAR_5;
}
