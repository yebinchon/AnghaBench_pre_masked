
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ses_device {scalar_t__ page1; } ;
struct enclosure_device {struct ses_device* scratch; } ;


 unsigned long long FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,unsigned long long) ;

__attribute__((used)) static int FUNC_2(struct enclosure_device *VAR_0, char *VAR_1)
{
 struct ses_device *VAR_2 = VAR_0->scratch;
 unsigned long long VAR_3 = FUNC_0(VAR_2->page1+8+4);

 return FUNC_1(VAR_1, "%#llx\n", VAR_3);
}
