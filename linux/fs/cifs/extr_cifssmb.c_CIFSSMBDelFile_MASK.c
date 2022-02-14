
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct TYPE_8__ {int num_deletes; } ;
struct TYPE_9__ {TYPE_2__ cifs_stats; } ;
struct cifs_tcon {TYPE_3__ stats; int ses; } ;
struct cifs_sb_info {int local_nls; } ;
typedef int __le16 ;
struct TYPE_7__ {int Flags2; } ;
struct TYPE_10__ {int BufferFormat; void* ByteCount; void* SearchAttributes; scalar_t__ fileName; TYPE_1__ hdr; } ;
typedef int DELETE_FILE_RSP ;
typedef TYPE_4__ DELETE_FILE_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (int *,char const*,int ,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct cifs_sb_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,char const*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (int ,int,struct cifs_tcon*,void**,void**) ;

int
FUNC_10(const unsigned int VAR_8, struct cifs_tcon *VAR_9, const char *VAR_10,
        struct cifs_sb_info *VAR_11)
{
 DELETE_FILE_REQ *VAR_12 = ((void*)0);
 DELETE_FILE_RSP *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;
 int VAR_17 = FUNC_4(VAR_11);

DelFileRetry:
 VAR_14 = FUNC_9(VAR_7, 1, VAR_9, (void **) &VAR_12,
        (void **) &VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_12->hdr.Flags2 & VAR_6) {
  VAR_16 = FUNC_1((__le16 *) VAR_12->fileName, VAR_10,
           VAR_5, VAR_11->local_nls,
           VAR_17);
  VAR_16++;
  VAR_16 *= 2;
 } else {
  VAR_16 = FUNC_6(VAR_12->fileName, VAR_10);
 }
 VAR_12->SearchAttributes =
     FUNC_7(VAR_1 | VAR_0 | VAR_2);
 VAR_12->BufferFormat = 0x04;
 FUNC_8(VAR_12, VAR_16 + 1);
 VAR_12->ByteCount = FUNC_7(VAR_16 + 1);
 VAR_14 = FUNC_0(VAR_8, VAR_9->ses, (struct smb_hdr *) VAR_12,
    (struct smb_hdr *) VAR_13, &VAR_15, 0);
 FUNC_5(&VAR_9->stats.cifs_stats.num_deletes);
 if (VAR_14)
  FUNC_3(VAR_4, "Error in RMFile = %d\n", VAR_14);

 FUNC_2(VAR_12);
 if (VAR_14 == -VAR_3)
  goto DelFileRetry;

 return VAR_14;
}
