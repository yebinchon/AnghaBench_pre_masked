
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ican3_msg {int* data; int len; int spec; } ;
struct ican3_dev {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_2 (struct ican3_msg*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ican3_dev *VAR_3, bool VAR_4)
{
 struct ican3_msg VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.spec = VAR_2;
 VAR_5.len = FUNC_0(2);
 VAR_5.data[0] = 0x00;
 VAR_5.data[1] = VAR_4 ? VAR_1 : VAR_0;

 return FUNC_1(VAR_3, &VAR_5);
}
