
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int in_numargs; int out_numargs; int out_argvar; int force; int nocreds; int (* end ) (struct fuse_conn*,TYPE_6__*,int ) ;TYPE_5__* out_args; TYPE_3__* in_args; int opcode; } ;
struct TYPE_11__ {int max_readahead; int flags; int minor; int major; } ;
struct fuse_init_args {TYPE_6__ args; int out; TYPE_4__ in; } ;
struct fuse_conn {TYPE_2__* sb; } ;
struct TYPE_12__ {int size; int * value; } ;
struct TYPE_10__ {int size; TYPE_4__* value; } ;
struct TYPE_9__ {TYPE_1__* s_bdi; } ;
struct TYPE_8__ {int ra_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_0 (struct fuse_conn*,TYPE_6__*,int) ;
 struct fuse_init_args* FUNC_1 (int,int) ;
 int FUNC_2 (struct fuse_conn*,TYPE_6__*,int ) ;

void FUNC_3(struct fuse_conn *VAR_32)
{
 struct fuse_init_args *VAR_33;

 VAR_33 = FUNC_1(sizeof(*VAR_33), VAR_29 | VAR_31);

 VAR_33->in.major = VAR_17;
 VAR_33->in.minor = VAR_16;
 VAR_33->in.max_readahead = VAR_32->sb->s_bdi->ra_pages * VAR_30;
 VAR_33->in.flags |=
  VAR_3 | VAR_23 | VAR_4 |
  VAR_11 | VAR_6 | VAR_8 |
  VAR_27 | VAR_25 | VAR_26 |
  VAR_12 | VAR_14 | VAR_5 |
  VAR_9 | VAR_24 | VAR_2 |
  VAR_28 | VAR_20 |
  VAR_21 | VAR_13 | VAR_22 |
  VAR_1 | VAR_18 | VAR_7 |
  VAR_19 | VAR_10;
 VAR_33->args.opcode = VAR_15;
 VAR_33->args.in_numargs = 1;
 VAR_33->args.in_args[0].size = sizeof(VAR_33->in);
 VAR_33->args.in_args[0].value = &VAR_33->in;
 VAR_33->args.out_numargs = 1;



 VAR_33->args.out_argvar = 1;
 VAR_33->args.out_args[0].size = sizeof(VAR_33->out);
 VAR_33->args.out_args[0].value = &VAR_33->out;
 VAR_33->args.force = 1;
 VAR_33->args.nocreds = 1;
 VAR_33->args.end = FUNC_2;

 if (FUNC_0(VAR_32, &VAR_33->args, VAR_29) != 0)
  FUNC_2(VAR_32, &VAR_33->args, -VAR_0);
}
