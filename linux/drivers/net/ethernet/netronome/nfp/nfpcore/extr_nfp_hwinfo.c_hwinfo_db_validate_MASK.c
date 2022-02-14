
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_hwinfo {scalar_t__ start; int size; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfp_hwinfo*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nfp_cpp*,struct nfp_hwinfo*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nfp_cpp*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct nfp_cpp *VAR_1, struct nfp_hwinfo *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_3(VAR_2->size);
 if (VAR_4 > VAR_3) {
  FUNC_4(VAR_1, "Unsupported hwinfo size %u > %u\n", VAR_4, VAR_3);
  return -VAR_0;
 }

 VAR_4 -= sizeof(u32);
 VAR_5 = FUNC_0(VAR_2, VAR_4);
 if (VAR_5 != FUNC_1(VAR_2->start + VAR_4)) {
  FUNC_4(VAR_1, "Corrupt hwinfo table (CRC mismatch), calculated 0x%x, expected 0x%x\n",
   VAR_5, FUNC_1(VAR_2->start + VAR_4));

  return -VAR_0;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_4);
}
