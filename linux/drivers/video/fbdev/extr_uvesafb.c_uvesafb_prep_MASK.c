
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvesafb_ktask {void* done; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvesafb_ktask*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static struct uvesafb_ktask *FUNC_2(void)
{
 struct uvesafb_ktask *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (VAR_1) {
  VAR_1->done = FUNC_1(sizeof(*VAR_1->done), VAR_0);
  if (!VAR_1->done) {
   FUNC_0(VAR_1);
   VAR_1 = ((void*)0);
  }
 }
 return VAR_1;
}
