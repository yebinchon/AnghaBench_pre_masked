
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclgevf_dev {int dummy; } ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,unsigned long*) ;
 scalar_t__ FUNC_1 (int,unsigned long*) ;

__attribute__((used)) static enum hnae3_reset_type FUNC_2(struct hclgevf_dev *VAR_6,
           unsigned long *VAR_7)
{
 enum hnae3_reset_type VAR_8 = VAR_1;


 if (FUNC_1(VAR_5, VAR_7)) {
  VAR_8 = VAR_5;
  FUNC_0(VAR_5, VAR_7);
  FUNC_0(VAR_4, VAR_7);
  FUNC_0(VAR_3, VAR_7);
 } else if (FUNC_1(VAR_2, VAR_7)) {
  VAR_8 = VAR_2;
  FUNC_0(VAR_2, VAR_7);
  FUNC_0(VAR_3, VAR_7);
 } else if (FUNC_1(VAR_4, VAR_7)) {
  VAR_8 = VAR_4;
  FUNC_0(VAR_4, VAR_7);
  FUNC_0(VAR_3, VAR_7);
 } else if (FUNC_1(VAR_3, VAR_7)) {
  VAR_8 = VAR_3;
  FUNC_0(VAR_3, VAR_7);
 } else if (FUNC_1(VAR_0, VAR_7)) {
  VAR_8 = VAR_0;
  FUNC_0(VAR_0, VAR_7);
 }

 return VAR_8;
}
