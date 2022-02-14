
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {int ar_loccookie; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct gfs2_leaf {scalar_t__ lf_entries; int lf_next; scalar_t__ lf_depth; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_dirent {int dummy; } ;
struct dirent_gather {unsigned int offset; struct gfs2_dirent const** pdent; } ;
struct dir_context {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_size; scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 struct gfs2_sbd* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct gfs2_dirent*) ;
 int FUNC_4 (struct gfs2_dirent*) ;
 unsigned int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct gfs2_inode*,struct dir_context*,struct gfs2_dirent**,unsigned int,unsigned int,int*) ;
 int FUNC_9 (struct gfs2_sbd*,char*,unsigned long long,unsigned int,unsigned int) ;
 int FUNC_10 (struct gfs2_inode*,scalar_t__,struct buffer_head**) ;
 struct buffer_head** FUNC_11 (unsigned int) ;
 int FUNC_12 (struct gfs2_inode*) ;
 int VAR_3 ;
 struct gfs2_dirent* FUNC_13 (struct inode*,scalar_t__,int ,int ,int *,struct dirent_gather*) ;
 int FUNC_14 (struct gfs2_sbd*,struct buffer_head*,unsigned int,struct gfs2_dirent**,unsigned int) ;
 int FUNC_15 (struct buffer_head**) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_4, struct dir_context *VAR_5,
         int *VAR_6, unsigned *VAR_7,
         u64 VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_1(VAR_4);
 struct gfs2_sbd *VAR_10 = FUNC_2(VAR_4);
 struct buffer_head *VAR_11;
 struct gfs2_leaf *VAR_12;
 unsigned VAR_13 = 0, VAR_14 = 0;
 unsigned VAR_15 = 0, VAR_16 = 0, VAR_17, VAR_18;
 struct gfs2_dirent **VAR_19, *VAR_20;
 struct dirent_gather VAR_21;
 struct buffer_head **VAR_22;
 int VAR_23, VAR_24, VAR_25 = 0, VAR_26;
 u64 VAR_27 = VAR_8;

 do {
  VAR_23 = FUNC_10(VAR_9, VAR_27, &VAR_11);
  if (VAR_23)
   goto out;
  VAR_12 = (struct gfs2_leaf *)VAR_11->b_data;
  if (VAR_15 == 0)
   *VAR_7 = FUNC_5(VAR_12->lf_depth);
  VAR_13 += FUNC_5(VAR_12->lf_entries);
  VAR_15++;
  VAR_27 = FUNC_6(VAR_12->lf_next);
  FUNC_7(VAR_11);
 } while(VAR_27);

 if (*VAR_7 < VAR_2 || !VAR_10->sd_args.ar_loccookie) {
  VAR_25 = 1;
  VAR_18 = 0;
 }

 if (!VAR_13)
  return 0;

 VAR_23 = -VAR_1;






 VAR_22 = FUNC_11((VAR_15 + VAR_13 + 99) * sizeof(void *));
 if (!VAR_22)
  goto out;
 VAR_19 = (struct gfs2_dirent **)(VAR_22 + VAR_15);
 VAR_21.pdent = (const struct gfs2_dirent **)VAR_19;
 VAR_21.offset = 0;
 VAR_27 = VAR_8;

 do {
  VAR_23 = FUNC_10(VAR_9, VAR_27, &VAR_11);
  if (VAR_23)
   goto out_free;
  VAR_12 = (struct gfs2_leaf *)VAR_11->b_data;
  VAR_27 = FUNC_6(VAR_12->lf_next);
  if (VAR_12->lf_entries) {
   VAR_17 = VAR_21.offset;
   VAR_14 += FUNC_5(VAR_12->lf_entries);
   VAR_20 = FUNC_13(VAR_4, VAR_11->b_data, VAR_11->b_size,
      VAR_3, ((void*)0), &VAR_21);
   VAR_23 = FUNC_4(VAR_20);
   if (FUNC_3(VAR_20))
    goto out_free;
   if (VAR_14 != VAR_21.offset) {
    FUNC_9(VAR_10, "Number of entries corrupt in dir "
      "leaf %llu, entries2 (%u) != "
      "g.offset (%u)\n",
     (unsigned long long)VAR_11->b_blocknr,
     VAR_14, VAR_21.offset);
    FUNC_12(VAR_9);
    VAR_23 = -VAR_0;
    goto out_free;
   }
   VAR_23 = 0;
   VAR_26 = FUNC_14(VAR_10, VAR_11, VAR_16, &VAR_19[VAR_17],
         FUNC_5(VAR_12->lf_entries));
   if (!VAR_25 && VAR_26 >= 0) {
    VAR_25 = 1;
    VAR_18 = VAR_17 + VAR_26;
   }
   VAR_22[VAR_16++] = VAR_11;
  } else {
   VAR_22[VAR_16++] = ((void*)0);
   FUNC_7(VAR_11);
  }
 } while(VAR_27);

 FUNC_0(VAR_14 != VAR_13);
 VAR_23 = FUNC_8(VAR_9, VAR_5, VAR_19, VAR_13, VAR_25 ?
    VAR_18 : VAR_13, VAR_6);
out_free:
 for(VAR_24 = 0; VAR_24 < VAR_16; VAR_24++)
  FUNC_7(VAR_22[VAR_24]);
 FUNC_15(VAR_22);
out:
 return VAR_23;
}
