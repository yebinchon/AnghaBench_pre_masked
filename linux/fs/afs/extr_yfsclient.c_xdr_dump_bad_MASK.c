
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(const __be32 *VAR_0)
{
 __be32 VAR_1[4];
 int VAR_2;

 FUNC_2("YFS XDR: Bad status record\n");
 for (VAR_2 = 0; VAR_2 < 5 * 4 * 4; VAR_2 += 16) {
  FUNC_0(VAR_1, VAR_0, 16);
  VAR_0 += 4;
  FUNC_2("%03x: %08x %08x %08x %08x\n",
     VAR_2, FUNC_1(VAR_1[0]), FUNC_1(VAR_1[1]), FUNC_1(VAR_1[2]), FUNC_1(VAR_1[3]));
 }

 FUNC_0(VAR_1, VAR_0, 4);
 FUNC_2("0x50: %08x\n", FUNC_1(VAR_1[0]));
}
