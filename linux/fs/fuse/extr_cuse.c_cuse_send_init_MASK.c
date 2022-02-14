
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_10__ {int in_numargs; int out_numargs; int out_argvar; int out_pages; int end; TYPE_4__* out_args; TYPE_1__* in_args; int opcode; } ;
struct fuse_args_pages {int num_pages; TYPE_5__ args; TYPE_3__* descs; struct page** pages; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_7__ {int flags; int minor; int major; } ;
struct cuse_init_args {TYPE_3__ desc; struct page* page; int out; TYPE_2__ in; struct fuse_args_pages ap; } ;
struct cuse_conn {struct fuse_conn fc; } ;
struct TYPE_9__ {int size; int * value; } ;
struct TYPE_6__ {int size; TYPE_2__* value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (struct fuse_conn*,TYPE_5__*,int) ;
 int FUNC_4 (struct cuse_init_args*) ;
 struct cuse_init_args* FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct cuse_conn *VAR_10)
{
 int VAR_11;
 struct page *VAR_12;
 struct fuse_conn *VAR_13 = &VAR_10->fc;
 struct cuse_init_args *VAR_14;
 struct fuse_args_pages *VAR_15;

 FUNC_0(VAR_1 > VAR_7);

 VAR_11 = -VAR_3;
 VAR_12 = FUNC_2(VAR_6 | VAR_8);
 if (!VAR_12)
  goto err;

 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  goto err_free_page;

 VAR_15 = &VAR_14->ap;
 VAR_14->in.major = VAR_5;
 VAR_14->in.minor = VAR_4;
 VAR_14->in.flags |= VAR_2;
 VAR_15->args.opcode = VAR_0;
 VAR_15->args.in_numargs = 1;
 VAR_15->args.in_args[0].size = sizeof(VAR_14->in);
 VAR_15->args.in_args[0].value = &VAR_14->in;
 VAR_15->args.out_numargs = 2;
 VAR_15->args.out_args[0].size = sizeof(VAR_14->out);
 VAR_15->args.out_args[0].value = &VAR_14->out;
 VAR_15->args.out_args[1].size = VAR_1;
 VAR_15->args.out_argvar = 1;
 VAR_15->args.out_pages = 1;
 VAR_15->num_pages = 1;
 VAR_15->pages = &VAR_14->page;
 VAR_15->descs = &VAR_14->desc;
 VAR_14->page = VAR_12;
 VAR_14->desc.length = VAR_15->args.out_args[1].size;
 VAR_15->args.end = VAR_9;

 VAR_11 = FUNC_3(VAR_13, &VAR_15->args, VAR_6);
 if (VAR_11) {
  FUNC_4(VAR_14);
err_free_page:
  FUNC_1(VAR_12);
 }
err:
 return VAR_11;
}
