
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ican3_msg {int* data; void* len; void* spec; } ;
struct ican3_dev {int dummy; } ;
typedef int msg ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_2 (struct ican3_msg*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ican3_dev *VAR_3, bool VAR_4)
{
 struct ican3_msg VAR_5;
 int VAR_6;


 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.spec = VAR_0;
 VAR_5.len = FUNC_0(5);
 VAR_5.data[0] = 0x00;
 VAR_5.data[1] = 0x00;
 VAR_5.data[2] = 0xff;
 VAR_5.data[3] = 0x07;


 VAR_5.data[4] = VAR_4 ? VAR_1 : VAR_2;

 VAR_6 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;


 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.spec = VAR_0;
 VAR_5.len = FUNC_0(13);
 VAR_5.data[0] = 0;
 VAR_5.data[1] = 0x00;
 VAR_5.data[2] = 0x00;
 VAR_5.data[3] = 0x00;
 VAR_5.data[4] = 0x20;
 VAR_5.data[5] = 0xff;
 VAR_5.data[6] = 0xff;
 VAR_5.data[7] = 0xff;
 VAR_5.data[8] = 0x3f;


 VAR_5.data[9] = VAR_4 ? VAR_1 : VAR_2;

 return FUNC_1(VAR_3, &VAR_5);
}
