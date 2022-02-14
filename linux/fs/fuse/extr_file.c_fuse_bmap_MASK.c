
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct fuse_conn {int no_bmap; } ;
struct fuse_bmap_out {int block; } ;
struct fuse_bmap_in {int blocksize; int block; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;
typedef int outarg ;
typedef int inarg ;
struct TYPE_10__ {int in_numargs; int out_numargs; TYPE_3__* out_args; TYPE_2__* in_args; int nodeid; int opcode; } ;
struct TYPE_9__ {int size; struct fuse_bmap_out* value; } ;
struct TYPE_8__ {int size; struct fuse_bmap_in* value; } ;
struct TYPE_7__ {int s_blocksize; int s_bdev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (struct fuse_conn*,TYPE_4__*) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct fuse_bmap_in*,int ,int) ;

__attribute__((used)) static sector_t FUNC_5(struct address_space *VAR_3, sector_t VAR_4)
{
 struct inode *VAR_5 = VAR_3->host;
 struct fuse_conn *VAR_6 = FUNC_2(VAR_5);
 FUNC_0(VAR_2);
 struct fuse_bmap_in VAR_7;
 struct fuse_bmap_out VAR_8;
 int VAR_9;

 if (!VAR_5->i_sb->s_bdev || VAR_6->no_bmap)
  return 0;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.block = VAR_4;
 VAR_7.blocksize = VAR_5->i_sb->s_blocksize;
 VAR_2.opcode = VAR_1;
 VAR_2.nodeid = FUNC_3(VAR_5);
 VAR_2.in_numargs = 1;
 VAR_2.in_args[0].size = sizeof(VAR_7);
 VAR_2.in_args[0].value = &VAR_7;
 VAR_2.out_numargs = 1;
 VAR_2.out_args[0].size = sizeof(VAR_8);
 VAR_2.out_args[0].value = &VAR_8;
 VAR_9 = FUNC_1(VAR_6, &VAR_2);
 if (VAR_9 == -VAR_0)
  VAR_6->no_bmap = 1;

 return VAR_9 ? 0 : VAR_8.block;
}
