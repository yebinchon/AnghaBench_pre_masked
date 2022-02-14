
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fc0013_priv {int dummy; } ;


 int FUNC_0 (struct fc0013_priv*,int,int*) ;
 int FUNC_1 (struct fc0013_priv*,int,int) ;

__attribute__((used)) static int FUNC_2(struct fc0013_priv *VAR_0, u32 VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_0, 0x1d, &VAR_3);
 if (VAR_2)
  goto error_out;
 VAR_3 &= 0xe3;
 if (VAR_1 <= 177500) {
  VAR_2 = FUNC_1(VAR_0, 0x1d, VAR_3 | 0x1c);
 } else if (VAR_1 <= 184500) {
  VAR_2 = FUNC_1(VAR_0, 0x1d, VAR_3 | 0x18);
 } else if (VAR_1 <= 191500) {
  VAR_2 = FUNC_1(VAR_0, 0x1d, VAR_3 | 0x14);
 } else if (VAR_1 <= 198500) {
  VAR_2 = FUNC_1(VAR_0, 0x1d, VAR_3 | 0x10);
 } else if (VAR_1 <= 205500) {
  VAR_2 = FUNC_1(VAR_0, 0x1d, VAR_3 | 0x0c);
 } else if (VAR_1 <= 219500) {
  VAR_2 = FUNC_1(VAR_0, 0x1d, VAR_3 | 0x08);
 } else if (VAR_1 < 300000) {
  VAR_2 = FUNC_1(VAR_0, 0x1d, VAR_3 | 0x04);
 } else {
  VAR_2 = FUNC_1(VAR_0, 0x1d, VAR_3 | 0x1c);
 }
error_out:
 return VAR_2;
}
