
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlan_id ;
typedef int u8 ;
typedef int u16 ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int vlan_del_fail_bmap; int state; } ;
typedef int proto ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int*,int,int,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hnae3_handle *VAR_9,
       __be16 VAR_10, u16 VAR_11,
       bool VAR_12)
{

 struct hclgevf_dev *VAR_13 = FUNC_0(VAR_9);
 u8 VAR_14[5];
 int VAR_15;

 if (VAR_11 > VAR_4)
  return -VAR_1;

 if (VAR_10 != FUNC_2(VAR_3))
  return -VAR_2;





 if (FUNC_5(VAR_5, &VAR_13->state) && VAR_12) {
  FUNC_4(VAR_11, VAR_13->vlan_del_fail_bmap);
  return -VAR_0;
 }

 VAR_14[0] = VAR_12;
 FUNC_3(&VAR_14[1], &VAR_11, sizeof(VAR_11));
 FUNC_3(&VAR_14[3], &VAR_10, sizeof(VAR_10));
 VAR_15 = FUNC_1(VAR_13, VAR_7,
       VAR_8, VAR_14,
       5, 0, ((void*)0), 0);





 if (VAR_12 && VAR_15)
  FUNC_4(VAR_11, VAR_13->vlan_del_fail_bmap);

 return VAR_15;
}
