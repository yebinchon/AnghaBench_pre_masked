
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct extent_buffer {TYPE_2__** pages; } ;
struct TYPE_6__ {int io_tree; } ;
struct TYPE_5__ {TYPE_1__* mapping; } ;
struct TYPE_4__ {struct inode* host; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (int *,struct extent_buffer*,int ,int) ;

int FUNC_3(struct extent_buffer *VAR_1, u64 VAR_2,
     int VAR_3)
{
 int VAR_4;
 struct inode *VAR_5 = VAR_1->pages[0]->mapping->host;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(&FUNC_0(VAR_5)->io_tree, VAR_1,
        VAR_2, VAR_3);
 if (VAR_4 == -VAR_0)
  return VAR_4;
 return !VAR_4;
}
