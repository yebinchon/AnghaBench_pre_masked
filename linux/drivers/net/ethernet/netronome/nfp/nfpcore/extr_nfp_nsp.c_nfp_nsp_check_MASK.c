
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ major; scalar_t__ minor; } ;
struct nfp_nsp {TYPE_1__ ver; int res; struct nfp_cpp* cpp; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct nfp_cpp*,int ,int,int*) ;
 int FUNC_2 (struct nfp_cpp*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct nfp_nsp *VAR_11)
{
 struct nfp_cpp *VAR_12 = VAR_11->cpp;
 u64 VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_15 = FUNC_4(VAR_11->res);
 VAR_13 = FUNC_3(VAR_11->res) + VAR_6;

 VAR_16 = FUNC_1(VAR_12, VAR_15, VAR_13, &VAR_14);
 if (VAR_16 < 0)
  return VAR_16;

 if (FUNC_0(VAR_8, VAR_14) != VAR_3) {
  FUNC_2(VAR_12, "Cannot detect NFP Service Processor\n");
  return -VAR_2;
 }

 VAR_11->ver.major = FUNC_0(VAR_9, VAR_14);
 VAR_11->ver.minor = FUNC_0(VAR_10, VAR_14);

 if (VAR_11->ver.major != VAR_4) {
  FUNC_2(VAR_12, "Unsupported ABI %hu.%hu\n",
   VAR_11->ver.major, VAR_11->ver.minor);
  return -VAR_1;
 }
 if (VAR_11->ver.minor < VAR_5) {
  FUNC_2(VAR_12, "ABI too old to support NIC operation (%u.%hu < %u.%u), please update the management FW on the flash\n",
   VAR_4, VAR_11->ver.minor, VAR_4, VAR_5);
  return -VAR_1;
 }

 if (VAR_14 & VAR_7) {
  FUNC_2(VAR_12, "Service processor busy!\n");
  return -VAR_0;
 }

 return 0;
}
