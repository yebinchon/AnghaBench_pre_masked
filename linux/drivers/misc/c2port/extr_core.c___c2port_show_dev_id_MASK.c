
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct c2port_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct c2port_device*,int*) ;
 int FUNC_1 (struct c2port_device*,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct c2port_device *VAR_1, char *VAR_2)
{
 u8 VAR_3;
 int VAR_4;


 FUNC_1(VAR_1, VAR_0);


 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_2(VAR_2, "%d\n", VAR_3);
}
