
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spk_synth {int dummy; } ;


 int FUNC_0 (struct spk_synth*,int) ;

__attribute__((used)) static int FUNC_1(struct spk_synth *VAR_0, u16 VAR_1)
{
 int VAR_2;

 if (VAR_1 < 0x80) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 } else if (VAR_1 < 0x800) {
  VAR_2 = FUNC_0(VAR_0, 0xc0 | (VAR_1 >> 6));
  VAR_2 &= FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3f));
 } else {
  VAR_2 = FUNC_0(VAR_0, 0xe0 | (VAR_1 >> 12));
  VAR_2 &= FUNC_0(VAR_0, 0x80 | ((VAR_1 >> 6) & 0x3f));
  VAR_2 &= FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3f));
 }
 return VAR_2;
}
