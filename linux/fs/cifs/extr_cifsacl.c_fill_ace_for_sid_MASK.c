
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct cifs_sid {int num_subauth; int * sub_auth; int * authority; int revision; } ;
struct TYPE_2__ {int num_subauth; int * sub_auth; int * authority; int revision; } ;
struct cifs_ace {int flags; int size; TYPE_1__ sid; int access_req; int type; } ;
typedef int __u64 ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;

__attribute__((used)) static __u16 FUNC_3(struct cifs_ace *VAR_3,
   const struct cifs_sid *VAR_4, __u64 VAR_5, umode_t VAR_6)
{
 int VAR_7;
 __u16 VAR_8 = 0;
 __u32 VAR_9 = 0;

 VAR_3->type = VAR_0;
 VAR_3->flags = 0x0;
 FUNC_2(VAR_5, VAR_6, &VAR_9);
 if (!VAR_9)
  VAR_9 = VAR_2;
 VAR_3->access_req = FUNC_1(VAR_9);

 VAR_3->sid.revision = VAR_4->revision;
 VAR_3->sid.num_subauth = VAR_4->num_subauth;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_3->sid.authority[VAR_7] = VAR_4->authority[VAR_7];
 for (VAR_7 = 0; VAR_7 < VAR_4->num_subauth; VAR_7++)
  VAR_3->sid.sub_auth[VAR_7] = VAR_4->sub_auth[VAR_7];

 VAR_8 = 1 + 1 + 2 + 4 + 1 + 1 + 6 + (VAR_4->num_subauth * 4);
 VAR_3->size = FUNC_0(VAR_8);

 return VAR_8;
}
