
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fc_lport {int host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,int*) ;
 struct fc_lport* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct fc_lport *VAR_4 = FUNC_4(FUNC_0(VAR_1));
 u32 VAR_5;
 u8 VAR_6[3];
 u8 VAR_7[6];

 VAR_5 = FUNC_2(VAR_4->host);
 VAR_6[2] = (VAR_5 & 0x000000FF);
 VAR_6[1] = (VAR_5 & 0x0000FF00) >> 8;
 VAR_6[0] = (VAR_5 & 0x00FF0000) >> 16;
 FUNC_1(VAR_7, VAR_6);

 return FUNC_3(VAR_3, VAR_0, "%pM\n", VAR_7);
}
