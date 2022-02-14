
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cifs_sid {int dummy; } ;
struct cifs_acl {void* size; void* num_aces; } ;
struct TYPE_3__ {int num_subauth; int revision; void** sub_auth; int * authority; } ;
struct cifs_ace {int flags; void* size; TYPE_1__ sid; scalar_t__ access_req; int type; } ;
typedef int __u64 ;
struct TYPE_4__ {void** sub_auth; int * authority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct cifs_ace*,struct cifs_sid*,int,int ) ;
 struct cifs_sid VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static int FUNC_3(struct cifs_acl *VAR_7, struct cifs_sid *VAR_8,
   struct cifs_sid *VAR_9, __u64 VAR_10, bool VAR_11)
{
 u16 VAR_12 = 0;
 u32 VAR_13 = 0;
 struct cifs_acl *VAR_14;

 VAR_14 = (struct cifs_acl *)((char *)VAR_7 + sizeof(struct cifs_acl));

 if (VAR_11) {
  struct cifs_ace *VAR_15 =
   (struct cifs_ace *)((char *)VAR_14 + VAR_12);
  int VAR_16;

  VAR_15->type = VAR_0;
  VAR_15->flags = 0x0;
  VAR_15->access_req = 0;
  VAR_15->sid.num_subauth = 3;
  VAR_15->sid.revision = 1;
  for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++)
   VAR_15->sid.authority[VAR_16] =
    VAR_6.authority[VAR_16];
  VAR_15->sid.sub_auth[0] = VAR_6.sub_auth[0];
  VAR_15->sid.sub_auth[1] = VAR_6.sub_auth[1];
  VAR_15->sid.sub_auth[2] = FUNC_1(VAR_10 & 07777);


  VAR_15->size = FUNC_0(28);
  VAR_12 += 28;
  VAR_13++;
 }

 VAR_12 += FUNC_2((struct cifs_ace *) ((char *)VAR_14 + VAR_12),
     VAR_8, VAR_10, VAR_4);
 VAR_13++;
 VAR_12 += FUNC_2((struct cifs_ace *)((char *)VAR_14 + VAR_12),
     VAR_9, VAR_10, VAR_2);
 VAR_13++;
 VAR_12 += FUNC_2((struct cifs_ace *)((char *)VAR_14 + VAR_12),
      &VAR_5, VAR_10, VAR_3);
 VAR_13++;

 VAR_7->num_aces = FUNC_1(VAR_13);
 VAR_7->size = FUNC_0(VAR_12 + sizeof(struct cifs_acl));

 return 0;
}
