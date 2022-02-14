
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp_mip {scalar_t__ signature; scalar_t__ mip_version; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nfp_cpp*,int ,int ,struct nfp_mip*,int) ;
 int FUNC_2 (struct nfp_cpp*,char*,int,int) ;
 int FUNC_3 (struct nfp_cpp*,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nfp_cpp *VAR_4, u32 VAR_5, u64 VAR_6, struct nfp_mip *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, sizeof(*VAR_7));
 if (VAR_8 != sizeof(*VAR_7)) {
  FUNC_2(VAR_4, "Failed to read MIP data (%d, %zu)\n",
   VAR_8, sizeof(*VAR_7));
  return -VAR_1;
 }
 if (VAR_7->signature != VAR_2) {
  FUNC_3(VAR_4, "Incorrect MIP signature (0x%08x)\n",
    FUNC_0(VAR_7->signature));
  return -VAR_0;
 }
 if (VAR_7->mip_version != VAR_3) {
  FUNC_3(VAR_4, "Unsupported MIP version (%d)\n",
    FUNC_0(VAR_7->mip_version));
  return -VAR_0;
 }

 return 0;
}
