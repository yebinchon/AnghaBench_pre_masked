
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {scalar_t__ eh_magic; scalar_t__ eh_depth; scalar_t__ eh_max; scalar_t__ eh_entries; } ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct inode*,char const*,unsigned int,int ,char*,unsigned long long,char const*,int,int,int,int,int,int) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,struct ext4_extent_header*) ;
 int FUNC_3 (struct inode*,struct ext4_extent_header*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, unsigned int VAR_4,
       struct inode *VAR_5, struct ext4_extent_header *VAR_6,
       int VAR_7, ext4_fsblk_t VAR_8)
{
 const char *VAR_9;
 int VAR_10 = 0, VAR_11 = -VAR_1;

 if (FUNC_6(VAR_6->eh_magic != VAR_2)) {
  VAR_9 = "invalid magic";
  goto corrupted;
 }
 if (FUNC_6(FUNC_5(VAR_6->eh_depth) != VAR_7)) {
  VAR_9 = "unexpected eh_depth";
  goto corrupted;
 }
 if (FUNC_6(VAR_6->eh_max == 0)) {
  VAR_9 = "invalid eh_max";
  goto corrupted;
 }
 VAR_10 = FUNC_1(VAR_5, VAR_7);
 if (FUNC_6(FUNC_5(VAR_6->eh_max) > VAR_10)) {
  VAR_9 = "too large eh_max";
  goto corrupted;
 }
 if (FUNC_6(FUNC_5(VAR_6->eh_entries) > FUNC_5(VAR_6->eh_max))) {
  VAR_9 = "invalid eh_entries";
  goto corrupted;
 }
 if (!FUNC_3(VAR_5, VAR_6, VAR_7)) {
  VAR_9 = "invalid extent entries";
  goto corrupted;
 }
 if (FUNC_6(VAR_7 > 32)) {
  VAR_9 = "too large eh_depth";
  goto corrupted;
 }

 if (FUNC_4(VAR_5) != VAR_7 &&
     !FUNC_2(VAR_5, VAR_6)) {
  VAR_9 = "extent tree corrupted";
  VAR_11 = -VAR_0;
  goto corrupted;
 }
 return 0;

corrupted:
 FUNC_0(VAR_5, VAR_3, VAR_4, 0,
    "pblk %llu bad header/extent: %s - magic %x, "
    "entries %u, max %u(%u), depth %u(%u)",
    (unsigned long long) VAR_8, VAR_9,
    FUNC_5(VAR_6->eh_magic),
    FUNC_5(VAR_6->eh_entries), FUNC_5(VAR_6->eh_max),
    VAR_10, FUNC_5(VAR_6->eh_depth), VAR_7);
 return VAR_11;
}
