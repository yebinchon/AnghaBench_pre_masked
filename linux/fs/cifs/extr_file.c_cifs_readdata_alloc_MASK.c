
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work_func_t ;
struct page {int dummy; } ;
struct cifs_readdata {int dummy; } ;


 int VAR_0 ;
 struct cifs_readdata* FUNC_0 (struct page**,int ) ;
 struct page** FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct page**) ;

__attribute__((used)) static struct cifs_readdata *
FUNC_3(unsigned int VAR_1, work_func_t VAR_2)
{
 struct page **VAR_3 =
  FUNC_1(VAR_1, sizeof(struct page *), VAR_0);
 struct cifs_readdata *VAR_4 = ((void*)0);

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  if (!VAR_4)
   FUNC_2(VAR_3);
 }

 return VAR_4;
}
