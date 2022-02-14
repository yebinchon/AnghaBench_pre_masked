
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iavf_hw {int dummy; } ;
struct iavf_adapter {int hena; int rss_key_size; scalar_t__ rss_key; TYPE_1__* vf_res; struct iavf_hw hw; } ;
struct TYPE_2__ {int vf_cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iavf_adapter*) ;
 int VAR_2 ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (struct iavf_adapter*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (struct iavf_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct iavf_adapter *VAR_3)
{
 struct iavf_hw *VAR_4 = &VAR_3->hw;
 int VAR_5;

 if (!FUNC_1(VAR_3)) {

  if (VAR_3->vf_res->vf_cap_flags &
      VAR_2)
   VAR_3->hena = VAR_1;
  else
   VAR_3->hena = VAR_0;

  FUNC_5(VAR_4, FUNC_0(0), (u32)VAR_3->hena);
  FUNC_5(VAR_4, FUNC_0(1), (u32)(VAR_3->hena >> 32));
 }

 FUNC_3(VAR_3);
 FUNC_4((void *)VAR_3->rss_key, VAR_3->rss_key_size);
 VAR_5 = FUNC_2(VAR_3);

 return VAR_5;
}
