
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct i40e_fdir_filter {int flow_type; int ip4_proto; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i40e_vsi*,struct i40e_fdir_filter*,int) ;
 int FUNC_2 (struct i40e_vsi*,struct i40e_fdir_filter*,int) ;
 int FUNC_3 (struct i40e_vsi*,struct i40e_fdir_filter*,int) ;
 int FUNC_4 (struct i40e_vsi*,struct i40e_fdir_filter*,int) ;

int FUNC_5(struct i40e_vsi *VAR_2,
        struct i40e_fdir_filter *VAR_3, bool VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_2->back;
 int VAR_6;

 switch (VAR_3->flow_type & ~VAR_1) {
 case 129:
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
  break;
 case 130:
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
 case 131:
  switch (VAR_3->ip4_proto) {
  case 133:
   VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
   break;
  case 132:
   VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
   break;
  case 134:
   VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
   break;
  case 135:
   VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
   break;
  default:

   FUNC_0(&VAR_5->pdev->dev, "Unsupported IPv4 protocol 0x%02x\n",
     VAR_3->ip4_proto);
   return -VAR_0;
  }
  break;
 default:
  FUNC_0(&VAR_5->pdev->dev, "Unsupported flow type 0x%02x\n",
    VAR_3->flow_type);
  return -VAR_0;
 }







 return VAR_6;
}
