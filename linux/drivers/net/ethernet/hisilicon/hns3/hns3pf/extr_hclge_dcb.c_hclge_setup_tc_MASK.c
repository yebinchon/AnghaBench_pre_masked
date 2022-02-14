
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (struct hclge_dev*,int,int*) ;
 struct hclge_vport* FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hclge_dev*) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hclge_dev*,int) ;
 int FUNC_6 (struct hclge_dev*,int*) ;
 int FUNC_7 (struct hclge_dev*,int) ;

__attribute__((used)) static int FUNC_8(struct hnae3_handle *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct hclge_vport *VAR_6 = FUNC_2(VAR_3);
 struct hclge_dev *VAR_7 = VAR_6->back;
 int VAR_8;

 if (VAR_7->flag & VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5);
 if (VAR_8)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_7(VAR_7, VAR_4);
 FUNC_6(VAR_7, VAR_5);

 VAR_8 = FUNC_5(VAR_7, 0);
 if (VAR_8)
  goto err_out;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  goto err_out;

 VAR_7->flag &= ~VAR_1;

 if (VAR_4 > 1)
  VAR_7->flag |= VAR_2;
 else
  VAR_7->flag &= ~VAR_2;

 return FUNC_4(VAR_7);

err_out:
 FUNC_4(VAR_7);

 return VAR_8;
}
