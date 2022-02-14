
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_page_actor {int length; void** buffer; int pages; int squashfs_finish_page; int squashfs_next_page; int squashfs_first_page; scalar_t__ next_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct squashfs_page_actor* FUNC_0 (int,int ) ;

struct squashfs_page_actor *FUNC_1(void **VAR_5,
 int VAR_6, int VAR_7)
{
 struct squashfs_page_actor *VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_0);

 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->length = VAR_7 ? : VAR_6 * VAR_1;
 VAR_8->buffer = VAR_5;
 VAR_8->pages = VAR_6;
 VAR_8->next_page = 0;
 VAR_8->squashfs_first_page = VAR_3;
 VAR_8->squashfs_next_page = VAR_4;
 VAR_8->squashfs_finish_page = VAR_2;
 return VAR_8;
}
