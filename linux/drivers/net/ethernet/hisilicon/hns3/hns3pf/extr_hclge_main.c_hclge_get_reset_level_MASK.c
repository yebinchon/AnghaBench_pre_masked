
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_ae_dev {struct hclge_dev* priv; } ;
struct hclge_dev {scalar_t__ reset_type; int misc_vector; } ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct hclge_dev*,unsigned long*) ;
 scalar_t__ FUNC_3 (int,unsigned long*) ;

__attribute__((used)) static enum hnae3_reset_type FUNC_4(struct hnae3_ae_dev *VAR_6,
         unsigned long *VAR_7)
{
 enum hnae3_reset_type VAR_8 = VAR_4;
 struct hclge_dev *VAR_9 = VAR_6->priv;


 if (FUNC_3(VAR_5, VAR_7)) {



  FUNC_2(VAR_9, VAR_7);
  FUNC_0(VAR_5, VAR_7);







  FUNC_1(&VAR_9->misc_vector, 1);
 }


 if (FUNC_3(VAR_3, VAR_7)) {
  VAR_8 = VAR_3;
  FUNC_0(VAR_3, VAR_7);
  FUNC_0(VAR_2, VAR_7);
  FUNC_0(VAR_1, VAR_7);
 } else if (FUNC_3(VAR_2, VAR_7)) {
  VAR_8 = VAR_2;
  FUNC_0(VAR_2, VAR_7);
  FUNC_0(VAR_1, VAR_7);
 } else if (FUNC_3(VAR_1, VAR_7)) {
  VAR_8 = VAR_1;
  FUNC_0(VAR_1, VAR_7);
 } else if (FUNC_3(VAR_0, VAR_7)) {
  VAR_8 = VAR_0;
  FUNC_0(VAR_0, VAR_7);
 }

 if (VAR_9->reset_type != VAR_4 &&
     VAR_8 < VAR_9->reset_type)
  return VAR_4;

 return VAR_8;
}
