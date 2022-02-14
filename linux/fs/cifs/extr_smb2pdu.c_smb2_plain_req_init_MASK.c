
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct smb2_sync_hdr {int dummy; } ;
struct TYPE_3__ {int * smb2_com_sent; } ;
struct TYPE_4__ {TYPE_1__ smb2_stats; } ;
struct cifs_tcon {int num_smbs_sent; TYPE_2__ stats; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 () ;
 void* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,struct cifs_tcon*,struct smb2_sync_hdr*,unsigned int*) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,struct cifs_tcon*) ;

__attribute__((used)) static int
FUNC_6(__le16 VAR_2, struct cifs_tcon *VAR_3,
      void **VAR_4, unsigned int *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;


 if (VAR_2 == VAR_1)
  *VAR_4 = FUNC_0();
 else
  *VAR_4 = FUNC_1();
 if (*VAR_4 == ((void*)0)) {

  return -VAR_0;
 }

 FUNC_3(VAR_2, VAR_3,
         (struct smb2_sync_hdr *)(*VAR_4),
         VAR_5);

 if (VAR_3 != ((void*)0)) {
  uint16_t VAR_7 = FUNC_4(VAR_2);
  FUNC_2(&VAR_3->stats.smb2_stats.smb2_com_sent[VAR_7]);
  FUNC_2(&VAR_3->num_smbs_sent);
 }

 return VAR_6;
}
