
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iavf_mac_filter {int add; int remove; int list; int macaddr; } ;
struct iavf_adapter {int aq_required; int mac_filter_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;
 struct iavf_mac_filter* FUNC_1 (struct iavf_adapter*,int const*) ;
 struct iavf_mac_filter* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct
iavf_mac_filter *FUNC_4(struct iavf_adapter *VAR_2,
     const u8 *VAR_3)
{
 struct iavf_mac_filter *VAR_4;

 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
  if (!VAR_4)
   return VAR_4;

  FUNC_0(VAR_4->macaddr, VAR_3);

  FUNC_3(&VAR_4->list, &VAR_2->mac_filter_list);
  VAR_4->add = 1;
  VAR_2->aq_required |= VAR_1;
 } else {
  VAR_4->remove = 0;
 }

 return VAR_4;
}
