
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_page_actor {int length; void** page; int pages; scalar_t__ next_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct squashfs_page_actor* FUNC_0 (int,int ) ;

__attribute__((used)) static inline struct squashfs_page_actor *FUNC_1(void **VAR_2,
 int VAR_3, int VAR_4)
{
 struct squashfs_page_actor *VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);

 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->length = VAR_4 ? : VAR_3 * VAR_1;
 VAR_5->page = VAR_2;
 VAR_5->pages = VAR_3;
 VAR_5->next_page = 0;
 return VAR_5;
}
