
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_6__ {int page_index; TYPE_1__* file; } ;
typedef TYPE_2__ nfs_readdir_descriptor_t ;
struct TYPE_5__ {int f_mapping; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static
struct page *FUNC_1(nfs_readdir_descriptor_t *VAR_1)
{
 return FUNC_0(VAR_1->file->f_mapping, VAR_1->page_index,
   VAR_0, VAR_1);
}
