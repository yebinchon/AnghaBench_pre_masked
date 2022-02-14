
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct address_space*,int *,int ,int,struct page**) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static pgoff_t FUNC_2(struct address_space *VAR_3,
      pgoff_t VAR_4, int VAR_5)
{
 struct page *VAR_6;
 int VAR_7;

 if (VAR_5 != VAR_1)
  return 0;


 VAR_7 = FUNC_0(VAR_3, &VAR_4, VAR_0,
          1, &VAR_6);
 if (!VAR_7)
  return VAR_2;
 VAR_4 = VAR_6->index;
 FUNC_1(VAR_6);
 return VAR_4;
}
