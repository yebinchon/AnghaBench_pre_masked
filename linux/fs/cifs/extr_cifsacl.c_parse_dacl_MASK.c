
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct cifs_sid {int dummy; } ;
struct cifs_fattr {int cf_mode; } ;
struct cifs_acl {int num_aces; int size; int revision; } ;
struct TYPE_2__ {int * sub_auth; } ;
struct cifs_ace {int size; int type; int access_req; TYPE_1__ sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int*,int*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct cifs_sid*) ;
 int FUNC_3 (struct cifs_ace*,char*) ;
 int FUNC_4 (struct cifs_ace**) ;
 struct cifs_ace** FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct cifs_sid VAR_8 ;
 struct cifs_sid VAR_9 ;
 struct cifs_sid VAR_10 ;

__attribute__((used)) static void FUNC_8(struct cifs_acl *VAR_11, char *VAR_12,
         struct cifs_sid *VAR_13, struct cifs_sid *VAR_14,
         struct cifs_fattr *VAR_15, bool VAR_16)
{
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 char *VAR_20;
 struct cifs_ace **VAR_21;



 if (!VAR_11) {


  VAR_15->cf_mode |= VAR_5;
  return;
 }


 if (VAR_12 < (char *)VAR_11 + FUNC_6(VAR_11->size)) {
  FUNC_1(VAR_7, "ACL too small to parse DACL\n");
  return;
 }

 FUNC_1(VAR_1, "DACL revision %d size %d num aces %d\n",
   FUNC_6(VAR_11->revision), FUNC_6(VAR_11->size),
   FUNC_7(VAR_11->num_aces));




 VAR_15->cf_mode &= ~(VAR_5);

 VAR_20 = (char *)VAR_11;
 VAR_19 = sizeof(struct cifs_acl);

 VAR_18 = FUNC_7(VAR_11->num_aces);
 if (VAR_18 > 0) {
  umode_t VAR_22 = VAR_4;
  umode_t VAR_23 = VAR_2;
  umode_t VAR_24 = VAR_4 | VAR_2 | VAR_3;

  if (VAR_18 > VAR_6 / sizeof(struct cifs_ace *))
   return;
  VAR_21 = FUNC_5(VAR_18, sizeof(struct cifs_ace *),
          VAR_0);
  if (!VAR_21)
   return;

  for (VAR_17 = 0; VAR_17 < VAR_18; ++VAR_17) {
   VAR_21[VAR_17] = (struct cifs_ace *) (VAR_20 + VAR_19);



   if (VAR_16 &&
       (FUNC_2(&(VAR_21[VAR_17]->sid),
       &VAR_10) == 0)) {





    VAR_15->cf_mode &= ~07777;
    VAR_15->cf_mode |=
     FUNC_7(VAR_21[VAR_17]->sid.sub_auth[2]);
    break;
   } else if (FUNC_2(&(VAR_21[VAR_17]->sid), VAR_13) == 0)
    FUNC_0(VAR_21[VAR_17]->access_req,
           VAR_21[VAR_17]->type,
           &VAR_15->cf_mode,
           &VAR_22);
   else if (FUNC_2(&(VAR_21[VAR_17]->sid), VAR_14) == 0)
    FUNC_0(VAR_21[VAR_17]->access_req,
           VAR_21[VAR_17]->type,
           &VAR_15->cf_mode,
           &VAR_23);
   else if (FUNC_2(&(VAR_21[VAR_17]->sid), &VAR_9) == 0)
    FUNC_0(VAR_21[VAR_17]->access_req,
           VAR_21[VAR_17]->type,
           &VAR_15->cf_mode,
           &VAR_24);
   else if (FUNC_2(&(VAR_21[VAR_17]->sid), &VAR_8) == 0)
    FUNC_0(VAR_21[VAR_17]->access_req,
           VAR_21[VAR_17]->type,
           &VAR_15->cf_mode,
           &VAR_24);






   VAR_20 = (char *)VAR_21[VAR_17];
   VAR_19 = FUNC_6(VAR_21[VAR_17]->size);
  }

  FUNC_4(VAR_21);
 }

 return;
}
