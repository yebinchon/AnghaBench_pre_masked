
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct duplicate_extents_to_file {void* ByteCount; void* TargetFileOffset; void* SourceFileOffset; int PersistentFileHandle; int VolatileFileHandle; } ;
struct TYPE_3__ {int Attributes; } ;
struct cifs_tcon {TYPE_1__ fsAttrInfo; } ;
struct TYPE_4__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_2__ fid; int tlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int,char*,int,int ,int *,unsigned int*) ;
 int FUNC_1 (int ,char*,...) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int const,struct cifs_tcon*,struct cifsFileInfo*,scalar_t__,int) ;
 struct cifs_tcon* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(const unsigned int VAR_5,
   struct cifsFileInfo *VAR_6,
   struct cifsFileInfo *VAR_7, u64 VAR_8,
   u64 VAR_9, u64 VAR_10)
{
 int VAR_11;
 unsigned int VAR_12;
 struct duplicate_extents_to_file VAR_13;
 struct cifs_tcon *VAR_14 = FUNC_5(VAR_7->tlink);


 if ((FUNC_3(VAR_14->fsAttrInfo.Attributes) &
      VAR_2) == 0)
  return -VAR_1;

 VAR_13.VolatileFileHandle = VAR_6->fid.volatile_fid;
 VAR_13.PersistentFileHandle = VAR_6->fid.persistent_fid;
 VAR_13.SourceFileOffset = FUNC_2(VAR_8);
 VAR_13.TargetFileOffset = FUNC_2(VAR_10);
 VAR_13.ByteCount = FUNC_2(VAR_9);
 FUNC_1(VAR_4, "Duplicate extents: src off %lld dst off %lld len %lld\n",
  VAR_8, VAR_10, VAR_9);

 VAR_11 = FUNC_4(VAR_5, VAR_14, VAR_7, VAR_10 + VAR_9, 0);
 if (VAR_11)
  goto duplicate_extents_out;

 VAR_11 = FUNC_0(VAR_5, VAR_14, VAR_7->fid.persistent_fid,
   VAR_7->fid.volatile_fid,
   VAR_3,
   1 ,
   (char *)&VAR_13,
   sizeof(struct duplicate_extents_to_file),
   VAR_0, ((void*)0),
   &VAR_12);

 if (VAR_12 > 0)
  FUNC_1(VAR_4, "Non-zero response length in duplicate extents\n");

duplicate_extents_out:
 return VAR_11;
}
