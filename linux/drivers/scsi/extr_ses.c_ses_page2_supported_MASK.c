
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ses_device {int * page2; } ;
struct enclosure_device {struct ses_device* scratch; } ;



__attribute__((used)) static bool FUNC_0(struct enclosure_device *VAR_0)
{
 struct ses_device *VAR_1 = VAR_0->scratch;

 return (VAR_1->page2 != ((void*)0));
}
