
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct romfs_inode_info {unsigned long i_metasize; unsigned long i_dataoffset; } ;
struct romfs_inode {int spec; int size; int next; } ;
struct TYPE_8__ {int * a_ops; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct inode {int i_state; unsigned long i_size; int i_mode; TYPE_4__ i_data; int * i_op; int * i_fop; TYPE_3__ i_ctime; TYPE_2__ i_atime; TYPE_1__ i_mtime; } ;
typedef int ri ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int,unsigned int) ;

 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;

 unsigned long VAR_7 ;

 unsigned int VAR_8 ;
 struct romfs_inode_info* FUNC_3 (struct inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long FUNC_4 (int ) ;
 struct inode* FUNC_5 (struct super_block*,unsigned long) ;
 int FUNC_6 (struct inode*,int ,int ) ;
 int FUNC_7 (struct inode*) ;
 int VAR_12 ;
 int FUNC_8 (char*,unsigned long) ;
 int VAR_13 ;
 int FUNC_9 (struct super_block*,unsigned long,struct romfs_inode*,int) ;
 unsigned long FUNC_10 (struct super_block*,unsigned long,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_13(struct super_block *VAR_18, unsigned long VAR_19)
{
 struct romfs_inode_info *VAR_20;
 struct romfs_inode VAR_21;
 struct inode *VAR_22;
 unsigned long VAR_23;
 unsigned VAR_24;
 int VAR_25;
 umode_t VAR_26;



 for (;;) {
  VAR_25 = FUNC_9(VAR_18, VAR_19, &VAR_21, sizeof(VAR_21));
  if (VAR_25 < 0)
   goto error;



  VAR_24 = FUNC_4(VAR_21.next);
  if ((VAR_24 & VAR_8) != VAR_4)
   break;

  VAR_19 = FUNC_4(VAR_21.spec) & VAR_5;
 }


 VAR_23 = FUNC_10(VAR_18, VAR_19 + VAR_7, VAR_9);
 if (FUNC_1(VAR_23))
  goto eio;


 VAR_22 = FUNC_5(VAR_18, VAR_19);
 if (!VAR_22)
  return FUNC_0(-VAR_1);

 if (!(VAR_22->i_state & VAR_2))
  return VAR_22;


 VAR_20 = FUNC_3(VAR_22);
 VAR_20->i_metasize = (VAR_7 + VAR_23 + 1 + VAR_6) & VAR_5;
 VAR_20->i_dataoffset = VAR_19 + VAR_20->i_metasize;

 FUNC_11(VAR_22, 1);
 VAR_22->i_size = FUNC_4(VAR_21.size);
 VAR_22->i_mtime.tv_sec = VAR_22->i_atime.tv_sec = VAR_22->i_ctime.tv_sec = 0;
 VAR_22->i_mtime.tv_nsec = VAR_22->i_atime.tv_nsec = VAR_22->i_ctime.tv_nsec = 0;


 VAR_26 = VAR_16[VAR_24 & VAR_8];

 switch (VAR_24 & VAR_8) {
 case 130:
  VAR_22->i_size = FUNC_3(VAR_22)->i_metasize;
  VAR_22->i_op = &VAR_14;
  VAR_22->i_fop = &VAR_15;
  if (VAR_24 & VAR_3)
   VAR_26 |= VAR_11;
  break;
 case 129:
  VAR_22->i_fop = &VAR_17;
  VAR_22->i_data.a_ops = &VAR_13;
  if (VAR_24 & VAR_3)
   VAR_26 |= VAR_11;
  break;
 case 128:
  VAR_22->i_op = &VAR_12;
  FUNC_7(VAR_22);
  VAR_22->i_data.a_ops = &VAR_13;
  VAR_26 |= VAR_10;
  break;
 default:

  VAR_24 = FUNC_4(VAR_21.spec);
  FUNC_6(VAR_22, VAR_26, FUNC_2(VAR_24 >> 16,
        VAR_24 & 0xffff));
  break;
 }

 VAR_22->i_mode = VAR_26;

 FUNC_12(VAR_22);
 return VAR_22;

eio:
 VAR_25 = -VAR_0;
error:
 FUNC_8("read error for inode 0x%lx\n", VAR_19);
 return FUNC_0(VAR_25);
}
