
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct qedi_ctx {int mac; } ;
struct TYPE_17__ {char* byte; } ;
struct TYPE_14__ {char* byte; } ;
struct TYPE_12__ {char* byte; } ;
struct TYPE_18__ {TYPE_8__ gateway; TYPE_5__ subnet_mask; TYPE_3__ addr; } ;
struct TYPE_15__ {char* byte; } ;
struct TYPE_13__ {char* byte; } ;
struct TYPE_11__ {char* byte; } ;
struct TYPE_16__ {TYPE_6__ gateway; TYPE_4__ subnet_mask; TYPE_2__ addr; } ;
struct nvm_iscsi_initiator {int generic_cont0; TYPE_9__ ipv4; TYPE_7__ ipv6; } ;
struct TYPE_10__ {int ctrl_flags; } ;
struct nvm_iscsi_block {TYPE_1__ generic; struct nvm_iscsi_initiator initiator; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nvm_iscsi_block* FUNC_1 (struct qedi_ctx*) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(void *VAR_7, int VAR_8, char *VAR_9)
{
 struct qedi_ctx *VAR_10 = VAR_7;
 struct nvm_iscsi_initiator *VAR_11;
 int VAR_12 = 1;
 u32 VAR_13, VAR_14, VAR_15;
 struct nvm_iscsi_block *VAR_16;
 char *VAR_17, *VAR_18, *VAR_19, *VAR_20;

 VAR_16 = FUNC_1(VAR_10);
 if (!VAR_16)
  return 0;

 VAR_11 = &VAR_16->initiator;
 VAR_13 = VAR_16->generic.ctrl_flags &
    VAR_4;
 VAR_14 = VAR_16->generic.ctrl_flags &
    VAR_3;

 VAR_17 = VAR_13 ? "%pI6\n" : "%pI4\n";
 VAR_18 = VAR_13 ? VAR_11->ipv6.addr.byte : VAR_11->ipv4.addr.byte;
 VAR_15 = VAR_13 ? VAR_2 : VAR_1;
 VAR_19 = VAR_13 ? VAR_11->ipv6.subnet_mask.byte :
       VAR_11->ipv4.subnet_mask.byte;
 VAR_20 = VAR_13 ? VAR_11->ipv6.gateway.byte :
      VAR_11->ipv4.gateway.byte;

 VAR_17 = VAR_14 ? "%s\n" : VAR_17;
 if (VAR_14) {
  VAR_18 = VAR_13 ? "0::0" : "0.0.0.0";
  VAR_19 = VAR_18;
  VAR_20 = VAR_18;
  VAR_15 = VAR_13 ? 5 : 8;
 }

 switch (VAR_8) {
 case 132:
  VAR_12 = FUNC_2(VAR_9, VAR_15, VAR_17, VAR_18);
  break;
 case 129:
  VAR_12 = FUNC_2(VAR_9, VAR_15, VAR_17, VAR_19);
  break;
 case 134:
  VAR_12 = FUNC_2(VAR_9, VAR_15, VAR_17, VAR_20);
  break;
 case 135:
  VAR_12 = FUNC_2(VAR_9, 3, "%hhd\n",
         VAR_6);
  break;
 case 133:
  VAR_12 = FUNC_2(VAR_9, 3, "0\n");
  break;
 case 131:
  VAR_12 = FUNC_3(VAR_9, VAR_10->mac, VAR_0);
  break;
 case 128:
  VAR_12 = FUNC_2(VAR_9, 12, "%d\n",
         FUNC_0(VAR_11->generic_cont0,
      VAR_5));
  break;
 case 130:
  if (VAR_14)
   VAR_12 = FUNC_2(VAR_9, 3, "3\n");
  break;
 default:
  VAR_12 = 0;
  break;
 }

 return VAR_12;
}
