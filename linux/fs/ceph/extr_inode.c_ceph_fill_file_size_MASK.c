
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct inode {scalar_t__ i_size; int i_mapping; int i_blocks; int i_mode; } ;
struct ceph_inode_info {scalar_t__ i_truncate_seq; scalar_t__ i_truncate_size; int i_truncate_pending; scalar_t__ i_reported_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ceph_inode_info*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct inode*) ;
 struct ceph_inode_info* FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*) ;

int FUNC_11(struct inode *VAR_6, int VAR_7,
   u32 VAR_8, u64 VAR_9, u64 VAR_10)
{
 struct ceph_inode_info *VAR_11 = FUNC_5(VAR_6);
 int VAR_12 = 0;

 if (FUNC_6(VAR_8, VAR_11->i_truncate_seq) > 0 ||
     (VAR_8 == VAR_11->i_truncate_seq && VAR_10 > VAR_6->i_size)) {
  FUNC_7("size %lld -> %llu\n", VAR_6->i_size, VAR_10);
  if (VAR_10 > 0 && FUNC_0(VAR_6->i_mode)) {
   FUNC_10("fill_file_size non-zero size for directory\n");
   VAR_10 = 0;
  }
  FUNC_8(VAR_6, VAR_10);
  VAR_6->i_blocks = FUNC_3(VAR_10);
  VAR_11->i_reported_size = VAR_10;
  if (VAR_8 != VAR_11->i_truncate_seq) {
   FUNC_7("truncate_seq %u -> %u\n",
        VAR_11->i_truncate_seq, VAR_8);
   VAR_11->i_truncate_seq = VAR_8;


   FUNC_1(VAR_7 & (VAR_2 |
            VAR_4 |
            VAR_5 |
            VAR_3));






   if ((VAR_7 & (VAR_1|
           VAR_0)) ||
       FUNC_9(VAR_6->i_mapping) ||
       FUNC_2(VAR_11)) {
    VAR_11->i_truncate_pending++;
    VAR_12 = 1;
   }
  }
 }
 if (FUNC_6(VAR_8, VAR_11->i_truncate_seq) >= 0 &&
     VAR_11->i_truncate_size != VAR_9) {
  FUNC_7("truncate_size %lld -> %llu\n", VAR_11->i_truncate_size,
       VAR_9);
  VAR_11->i_truncate_size = VAR_9;
 }

 if (VAR_12)
  FUNC_4(VAR_6);

 return VAR_12;
}
