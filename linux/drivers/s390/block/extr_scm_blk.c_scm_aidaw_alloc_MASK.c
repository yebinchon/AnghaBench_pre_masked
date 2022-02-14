
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct aidaw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ,int ) ;
 struct aidaw* FUNC_1 (struct page*) ;

__attribute__((used)) static inline struct aidaw *FUNC_2(void)
{
 struct page *VAR_2 = FUNC_0(VAR_1, VAR_0);

 return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}
