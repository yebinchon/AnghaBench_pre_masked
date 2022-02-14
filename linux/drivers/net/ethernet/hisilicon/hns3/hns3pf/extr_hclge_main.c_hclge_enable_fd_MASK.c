
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int fd_en; scalar_t__ fd_active_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hnae3_handle*,int) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_3(struct hnae3_handle *VAR_1, bool VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_1(VAR_1);
 struct hclge_dev *VAR_4 = VAR_3->back;
 bool VAR_5;

 VAR_4->fd_en = VAR_2;
 VAR_5 = VAR_4->fd_active_type == VAR_0;
 if (!VAR_2)
  FUNC_0(VAR_1, VAR_5);
 else
  FUNC_2(VAR_1);
}
