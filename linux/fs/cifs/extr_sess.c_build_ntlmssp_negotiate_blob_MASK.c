
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cifs_ses {TYPE_2__* ntlmssp; TYPE_1__* server; } ;
typedef int __u32 ;
struct TYPE_9__ {scalar_t__ MaximumLength; scalar_t__ Length; scalar_t__ BufferOffset; } ;
struct TYPE_8__ {scalar_t__ MaximumLength; scalar_t__ Length; scalar_t__ BufferOffset; } ;
struct TYPE_10__ {TYPE_4__ DomainName; TYPE_3__ WorkstationName; int NegotiateFlags; int MessageType; int Signature; } ;
struct TYPE_7__ {scalar_t__ sesskey_per_smbsess; } ;
struct TYPE_6__ {int session_estab; scalar_t__ sign; } ;
typedef TYPE_5__ NEGOTIATE_MESSAGE ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

void FUNC_3(unsigned char *VAR_11,
      struct cifs_ses *VAR_12)
{
 NEGOTIATE_MESSAGE *VAR_13 = (NEGOTIATE_MESSAGE *)VAR_11;
 __u32 VAR_14;

 FUNC_2(VAR_11, 0, sizeof(NEGOTIATE_MESSAGE));
 FUNC_1(VAR_13->Signature, VAR_9, 8);
 VAR_13->MessageType = VAR_10;


 VAR_14 = VAR_1 | VAR_8 |
  VAR_0 | VAR_7 |
  VAR_4 | VAR_2 |
  VAR_5;
 if (VAR_12->server->sign)
  VAR_14 |= VAR_6;
 if (!VAR_12->server->session_estab || VAR_12->ntlmssp->sesskey_per_smbsess)
  VAR_14 |= VAR_3;

 VAR_13->NegotiateFlags = FUNC_0(VAR_14);

 VAR_13->WorkstationName.BufferOffset = 0;
 VAR_13->WorkstationName.Length = 0;
 VAR_13->WorkstationName.MaximumLength = 0;


 VAR_13->DomainName.BufferOffset = 0;
 VAR_13->DomainName.Length = 0;
 VAR_13->DomainName.MaximumLength = 0;
}
