
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; } ;
struct splice_desc {int len; TYPE_1__ u; int pos; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int offset; int page; } ;
typedef int loff_t ;


 int FUNC_0 (int ,void*,int ,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pipe_inode_info *VAR_0, struct pipe_buffer *VAR_1,
     struct splice_desc *VAR_2)
{
 int VAR_3;
 void *VAR_4;
 loff_t VAR_5 = VAR_2->pos;

 VAR_4 = FUNC_1(VAR_1->page);
 VAR_3 = FUNC_0(VAR_2->u.file, VAR_4 + VAR_1->offset, VAR_2->len, &VAR_5);
 FUNC_2(VAR_1->page);

 return VAR_3;
}
