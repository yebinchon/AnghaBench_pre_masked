
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (short,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct asus_laptop *VAR_2, int VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long long VAR_7;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_1(VAR_2->handle, VAR_4, ((void*)0), &VAR_7);







  VAR_6 = FUNC_0(VAR_3 - (short)VAR_7);
  if (VAR_6 < 128 && !(VAR_7 & ~0xffff))
   break;
 }
 return FUNC_2((short)VAR_7, -VAR_0, VAR_0);
}
