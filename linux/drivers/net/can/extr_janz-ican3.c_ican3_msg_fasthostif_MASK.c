
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ican3_msg {unsigned int* data; int len; int spec; } ;
struct ican3_dev {int iftype; int fasttx_start; int fastrx_start; } ;
typedef int msg ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_4 (struct ican3_msg*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ican3_dev *VAR_1)
{
 struct ican3_msg VAR_2;
 unsigned int VAR_3;

 FUNC_4(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.spec = VAR_0;
 VAR_2.len = FUNC_2(8);


 VAR_3 = FUNC_0(VAR_1->fastrx_start);
 VAR_2.data[0] = VAR_3 & 0xff;
 VAR_2.data[1] = (VAR_3 >> 8) & 0xff;
 VAR_2.data[2] = (VAR_3 >> 16) & 0xff;
 VAR_2.data[3] = (VAR_3 >> 24) & 0xff;


 VAR_3 = FUNC_0(VAR_1->fasttx_start);
 VAR_2.data[4] = VAR_3 & 0xff;
 VAR_2.data[5] = (VAR_3 >> 8) & 0xff;
 VAR_2.data[6] = (VAR_3 >> 16) & 0xff;
 VAR_2.data[7] = (VAR_3 >> 24) & 0xff;


 FUNC_1(VAR_1->iftype != 1);

 return FUNC_3(VAR_1, &VAR_2);
}
