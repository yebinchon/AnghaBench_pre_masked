
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct file_allocated_range_buffer {void* length; void* file_offset; } ;
struct fiemap_extent_info {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct TYPE_2__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; } ;
typedef int in_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,struct cifs_tcon*,int ,int ,int ,int,char*,int,int,char**,int*) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct fiemap_extent_info*,int ) ;
 int FUNC_3 (struct fiemap_extent_info*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (struct file_allocated_range_buffer*) ;
 scalar_t__ FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(struct cifs_tcon *VAR_6,
         struct cifsFileInfo *VAR_7,
         struct fiemap_extent_info *VAR_8, u64 VAR_9, u64 VAR_10)
{
 unsigned int VAR_11;
 struct file_allocated_range_buffer VAR_12, *VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u64 VAR_20;

 if (FUNC_2(VAR_8, VAR_4))
  return -VAR_1;

 VAR_11 = FUNC_5();
 again:
 VAR_12.file_offset = FUNC_1(VAR_9);
 VAR_12.length = FUNC_1(VAR_10);

 VAR_17 = FUNC_0(VAR_11, VAR_6, VAR_7->fid.persistent_fid,
   VAR_7->fid.volatile_fid,
   VAR_5, 1,
   (char *)&VAR_12, sizeof(VAR_12),
   1024 * sizeof(struct file_allocated_range_buffer),
   (char **)&VAR_13, &VAR_14);
 if (VAR_17 == -VAR_0) {
  VAR_19 = 0;
  VAR_17 = 0;
 } else
  VAR_19 = 1;
 if (VAR_17)
  goto out;

 if (VAR_14 < sizeof(struct file_allocated_range_buffer)) {
  VAR_17 = -VAR_2;
  goto out;
 }
 if (VAR_14 % sizeof(struct file_allocated_range_buffer)) {
  VAR_17 = -VAR_2;
  goto out;
 }

 VAR_16 = VAR_14 / sizeof(struct file_allocated_range_buffer);
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_18 = 0;
  if (VAR_15 == VAR_16 - 1 && VAR_19)
   VAR_18 |= VAR_3;

  VAR_17 = FUNC_3(VAR_8,
    FUNC_7(VAR_13[VAR_15].file_offset),
    FUNC_7(VAR_13[VAR_15].file_offset),
    FUNC_7(VAR_13[VAR_15].length),
    VAR_18);
  if (VAR_17 < 0)
   goto out;
  if (VAR_17 == 1) {
   VAR_17 = 0;
   goto out;
  }
 }

 if (!VAR_19) {
  VAR_20 = FUNC_7(VAR_13[VAR_16 - 1].file_offset) +
    FUNC_7(VAR_13[VAR_16 - 1].length);
  VAR_10 = VAR_10 - (VAR_20 - VAR_9);
  VAR_9 = VAR_20;
  goto again;
 }

 out:
 FUNC_4(VAR_11);
 FUNC_6(VAR_13);
 return VAR_17;
}
