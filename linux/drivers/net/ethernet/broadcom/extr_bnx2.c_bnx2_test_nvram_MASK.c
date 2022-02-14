
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2 {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2*,int,int *,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_3)
{
 __be32 VAR_4[VAR_2 / 4];
 u8 *VAR_5 = (u8 *) VAR_4;
 int VAR_6 = 0;
 u32 VAR_7, VAR_8;

 if ((VAR_6 = FUNC_1(VAR_3, 0, VAR_5, 4)) != 0)
  goto test_nvram_done;

        VAR_7 = FUNC_0(VAR_4[0]);
 if (VAR_7 != 0x669955aa) {
  VAR_6 = -VAR_1;
  goto test_nvram_done;
 }

 if ((VAR_6 = FUNC_1(VAR_3, 0x100, VAR_5, VAR_2)) != 0)
  goto test_nvram_done;

 VAR_8 = FUNC_2(0x100, VAR_5);
 if (VAR_8 != VAR_0) {
  VAR_6 = -VAR_1;
  goto test_nvram_done;
 }

 VAR_8 = FUNC_2(0x100, VAR_5 + 0x100);
 if (VAR_8 != VAR_0) {
  VAR_6 = -VAR_1;
 }

test_nvram_done:
 return VAR_6;
}
