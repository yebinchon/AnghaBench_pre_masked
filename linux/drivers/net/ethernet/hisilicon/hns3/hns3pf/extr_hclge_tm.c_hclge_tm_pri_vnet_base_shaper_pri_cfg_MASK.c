
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hclge_vport {int vport_id; int bw_limit; struct hclge_dev* back; } ;
struct hclge_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct hclge_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hclge_vport *VAR_5)
{
 struct hclge_dev *VAR_6 = VAR_5->back;
 u8 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_5->bw_limit, VAR_2,
         &VAR_8, &VAR_7, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_1(0, 0, 0,
       VAR_1,
       VAR_0);
 VAR_11 = FUNC_2(VAR_6, VAR_3,
     VAR_5->vport_id, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_1(VAR_8, VAR_7, VAR_9,
       VAR_1,
       VAR_0);
 VAR_11 = FUNC_2(VAR_6, VAR_4,
     VAR_5->vport_id, VAR_10);
 if (VAR_11)
  return VAR_11;

 return 0;
}
