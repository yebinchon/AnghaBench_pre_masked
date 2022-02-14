
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u16 ;
struct nls_table {int dummy; } ;
struct TYPE_16__ {int response; int len; } ;
struct cifs_ses {TYPE_3__* ntlmssp; int * user_name; int * domainName; TYPE_5__ auth_key; TYPE_2__* server; } ;
typedef int __u32 ;
typedef int __le16 ;
struct TYPE_20__ {scalar_t__ MaximumLength; scalar_t__ Length; void* BufferOffset; } ;
struct TYPE_19__ {void* MaximumLength; void* Length; void* BufferOffset; } ;
struct TYPE_18__ {void* MaximumLength; void* Length; void* BufferOffset; } ;
struct TYPE_17__ {void* MaximumLength; void* Length; void* BufferOffset; } ;
struct TYPE_15__ {scalar_t__ MaximumLength; scalar_t__ Length; void* BufferOffset; } ;
struct TYPE_14__ {int server_flags; int ciphertext; scalar_t__ sesskey_per_smbsess; } ;
struct TYPE_13__ {int session_estab; scalar_t__ sign; } ;
struct TYPE_12__ {void* MaximumLength; void* Length; void* BufferOffset; } ;
struct TYPE_11__ {unsigned char* Signature; TYPE_1__ SessionKey; TYPE_9__ WorkstationName; TYPE_8__ UserName; TYPE_7__ DomainName; TYPE_6__ NtChallengeResponse; TYPE_4__ LmChallengeResponse; void* NegotiateFlags; int MessageType; } ;
typedef TYPE_10__ AUTHENTICATE_MESSAGE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct cifs_ses*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int *,int ,struct nls_table const*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 unsigned char* FUNC_5 (int ,int ) ;
 int FUNC_6 (unsigned char*,int,int) ;
 int FUNC_7 (struct cifs_ses*,struct nls_table const*) ;
 int FUNC_8 (struct cifs_ses*) ;

int FUNC_9(unsigned char **VAR_19,
     u16 *VAR_20,
       struct cifs_ses *VAR_21,
       const struct nls_table *VAR_22)
{
 int VAR_23;
 AUTHENTICATE_MESSAGE *VAR_24;
 __u32 VAR_25;
 unsigned char *VAR_26;

 VAR_23 = FUNC_7(VAR_21, VAR_22);
 if (VAR_23) {
  FUNC_1(VAR_18, "Error %d during NTLMSSP authentication\n", VAR_23);
  *VAR_20 = 0;
  goto setup_ntlmv2_ret;
 }
 *VAR_19 = FUNC_5(FUNC_8(VAR_21), VAR_5);
 if (!*VAR_19) {
  VAR_23 = -VAR_4;
  FUNC_1(VAR_18, "Error %d during NTLMSSP allocation\n", VAR_23);
  *VAR_20 = 0;
  goto setup_ntlmv2_ret;
 }
 VAR_24 = (AUTHENTICATE_MESSAGE *)*VAR_19;

 FUNC_6(VAR_24->Signature, VAR_16, 8);
 VAR_24->MessageType = VAR_17;

 VAR_25 = VAR_7 |
  VAR_15 | VAR_13 |
  VAR_6 | VAR_14 |
  VAR_10 | VAR_8 |
  VAR_11;
 if (VAR_21->server->sign)
  VAR_25 |= VAR_12;
 if (!VAR_21->server->session_estab || VAR_21->ntlmssp->sesskey_per_smbsess)
  VAR_25 |= VAR_9;

 VAR_26 = *VAR_19 + sizeof(AUTHENTICATE_MESSAGE);
 VAR_24->NegotiateFlags = FUNC_4(VAR_25);

 VAR_24->LmChallengeResponse.BufferOffset =
    FUNC_4(sizeof(AUTHENTICATE_MESSAGE));
 VAR_24->LmChallengeResponse.Length = 0;
 VAR_24->LmChallengeResponse.MaximumLength = 0;

 VAR_24->NtChallengeResponse.BufferOffset =
    FUNC_4(VAR_26 - *VAR_19);
 if (VAR_21->user_name != ((void*)0)) {
  FUNC_6(VAR_26, VAR_21->auth_key.response + VAR_3,
    VAR_21->auth_key.len - VAR_3);
  VAR_26 += VAR_21->auth_key.len - VAR_3;

  VAR_24->NtChallengeResponse.Length =
    FUNC_3(VAR_21->auth_key.len - VAR_3);
  VAR_24->NtChallengeResponse.MaximumLength =
    FUNC_3(VAR_21->auth_key.len - VAR_3);
 } else {



  VAR_24->NtChallengeResponse.Length = 0;
  VAR_24->NtChallengeResponse.MaximumLength = 0;
 }

 if (VAR_21->domainName == ((void*)0)) {
  VAR_24->DomainName.BufferOffset = FUNC_4(VAR_26 - *VAR_19);
  VAR_24->DomainName.Length = 0;
  VAR_24->DomainName.MaximumLength = 0;
  VAR_26 += 2;
 } else {
  int VAR_27;
  VAR_27 = FUNC_2((__le16 *)VAR_26, VAR_21->domainName,
          VAR_1, VAR_22);
  VAR_27 *= 2;
  VAR_24->DomainName.BufferOffset = FUNC_4(VAR_26 - *VAR_19);
  VAR_24->DomainName.Length = FUNC_3(VAR_27);
  VAR_24->DomainName.MaximumLength = FUNC_3(VAR_27);
  VAR_26 += VAR_27;
 }

 if (VAR_21->user_name == ((void*)0)) {
  VAR_24->UserName.BufferOffset = FUNC_4(VAR_26 - *VAR_19);
  VAR_24->UserName.Length = 0;
  VAR_24->UserName.MaximumLength = 0;
  VAR_26 += 2;
 } else {
  int VAR_28;
  VAR_28 = FUNC_2((__le16 *)VAR_26, VAR_21->user_name,
          VAR_2, VAR_22);
  VAR_28 *= 2;
  VAR_24->UserName.BufferOffset = FUNC_4(VAR_26 - *VAR_19);
  VAR_24->UserName.Length = FUNC_3(VAR_28);
  VAR_24->UserName.MaximumLength = FUNC_3(VAR_28);
  VAR_26 += VAR_28;
 }

 VAR_24->WorkstationName.BufferOffset = FUNC_4(VAR_26 - *VAR_19);
 VAR_24->WorkstationName.Length = 0;
 VAR_24->WorkstationName.MaximumLength = 0;
 VAR_26 += 2;

 if (((VAR_21->ntlmssp->server_flags & VAR_9) ||
  (VAR_21->ntlmssp->server_flags & VAR_8))
   && !FUNC_0(VAR_21)) {
  FUNC_6(VAR_26, VAR_21->ntlmssp->ciphertext, VAR_0);
  VAR_24->SessionKey.BufferOffset = FUNC_4(VAR_26 - *VAR_19);
  VAR_24->SessionKey.Length = FUNC_3(VAR_0);
  VAR_24->SessionKey.MaximumLength =
    FUNC_3(VAR_0);
  VAR_26 += VAR_0;
 } else {
  VAR_24->SessionKey.BufferOffset = FUNC_4(VAR_26 - *VAR_19);
  VAR_24->SessionKey.Length = 0;
  VAR_24->SessionKey.MaximumLength = 0;
 }

 *VAR_20 = VAR_26 - *VAR_19;
setup_ntlmv2_ret:
 return VAR_23;
}
