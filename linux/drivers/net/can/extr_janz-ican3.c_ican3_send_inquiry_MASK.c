
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ican3_msg {int* data; int len; int spec; } ;
struct ican3_dev {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_2 (struct ican3_msg*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ican3_dev *VAR_1, u8 VAR_2)
{
 struct ican3_msg VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.spec = VAR_0;
 VAR_3.len = FUNC_0(2);
 VAR_3.data[0] = VAR_2;
 VAR_3.data[1] = 0x00;

 return FUNC_1(VAR_1, &VAR_3);
}
