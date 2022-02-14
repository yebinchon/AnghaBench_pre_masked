
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct fd {TYPE_2__* file; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_11__ {int f_mode; scalar_t__ f_pos; int f_flags; } ;
struct TYPE_10__ {int s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_2__*,scalar_t__*,TYPE_2__*,scalar_t__*,size_t,int) ;
 struct fd FUNC_3 (int) ;
 int FUNC_4 (struct fd) ;
 int FUNC_5 (TYPE_2__*) ;
 struct inode* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,TYPE_2__*,scalar_t__*,size_t) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static ssize_t FUNC_15(int VAR_12, int VAR_13, loff_t *VAR_14,
        size_t VAR_15, loff_t VAR_16)
{
 struct fd VAR_17, VAR_18;
 struct inode *VAR_19, *VAR_20;
 loff_t VAR_21;
 loff_t VAR_22;
 ssize_t VAR_23;
 int VAR_24;




 VAR_23 = -VAR_0;
 VAR_17 = FUNC_3(VAR_13);
 if (!VAR_17.file)
  goto out;
 if (!(VAR_17.file->f_mode & VAR_4))
  goto fput_in;
 VAR_23 = -VAR_2;
 if (!VAR_14) {
  VAR_21 = VAR_17.file->f_pos;
 } else {
  VAR_21 = *VAR_14;
  if (!(VAR_17.file->f_mode & VAR_3))
   goto fput_in;
 }
 VAR_23 = FUNC_13(VAR_8, VAR_17.file, &VAR_21, VAR_15);
 if (VAR_23 < 0)
  goto fput_in;
 if (VAR_15 > VAR_6)
  VAR_15 = VAR_6;




 VAR_23 = -VAR_0;
 VAR_18 = FUNC_3(VAR_12);
 if (!VAR_18.file)
  goto fput_in;
 if (!(VAR_18.file->f_mode & VAR_5))
  goto fput_out;
 VAR_19 = FUNC_6(VAR_17.file);
 VAR_20 = FUNC_6(VAR_18.file);
 VAR_22 = VAR_18.file->f_pos;
 VAR_23 = FUNC_13(VAR_10, VAR_18.file, &VAR_22, VAR_15);
 if (VAR_23 < 0)
  goto fput_out;

 if (!VAR_16)
  VAR_16 = FUNC_12(VAR_19->i_sb->s_maxbytes, VAR_20->i_sb->s_maxbytes);

 if (FUNC_14(VAR_21 + VAR_15 > VAR_16)) {
  VAR_23 = -VAR_1;
  if (VAR_21 >= VAR_16)
   goto fput_out;
  VAR_15 = VAR_16 - VAR_21;
 }

 VAR_24 = 0;
 FUNC_7(VAR_18.file);
 VAR_23 = FUNC_2(VAR_17.file, &VAR_21, VAR_18.file, &VAR_22, VAR_15, VAR_24);
 FUNC_5(VAR_18.file);

 if (VAR_23 > 0) {
  FUNC_0(VAR_11, VAR_23);
  FUNC_1(VAR_11, VAR_23);
  FUNC_8(VAR_17.file);
  FUNC_9(VAR_18.file);
  VAR_18.file->f_pos = VAR_22;
  if (VAR_14)
   *VAR_14 = VAR_21;
  else
   VAR_17.file->f_pos = VAR_21;
 }

 FUNC_10(VAR_11);
 FUNC_11(VAR_11);
 if (VAR_21 > VAR_16)
  VAR_23 = -VAR_1;

fput_out:
 FUNC_4(VAR_18);
fput_in:
 FUNC_4(VAR_17);
out:
 return VAR_23;
}
