
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct fm10k_vf_info {int mac; } ;
struct fm10k_iov_data {int num_vfs; struct fm10k_vf_info* vf_info; } ;
struct fm10k_intfc {struct fm10k_iov_data* iov_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fm10k_intfc*,struct fm10k_vf_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fm10k_intfc* FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_1, int VAR_2, u8 *VAR_3)
{
 struct fm10k_intfc *VAR_4 = FUNC_4(VAR_1);
 struct fm10k_iov_data *VAR_5 = VAR_4->iov_data;
 struct fm10k_vf_info *VAR_6;


 if (!VAR_5 || VAR_2 >= VAR_5->num_vfs)
  return -VAR_0;


 if (!FUNC_3(VAR_3) && !FUNC_2(VAR_3))
  return -VAR_0;


 VAR_6 = &VAR_5->vf_info[VAR_2];
 FUNC_0(VAR_6->mac, VAR_3);

 FUNC_1(VAR_4, VAR_6);

 return 0;
}
