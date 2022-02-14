
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct qed_dev {int dummy; } ;
struct firmware {int size; } ;


 int FUNC_0 (struct qed_dev*,char*,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct qed_dev *VAR_3,
     const struct firmware *VAR_4,
     const u8 **VAR_5)
{
 u32 VAR_6, VAR_7;


 if (VAR_4->size < 12) {
  FUNC_0(VAR_3, "Image is too short [%08x]\n", (u32)VAR_4->size);
  return -VAR_0;
 }


 VAR_6 = *((u32 *)(*VAR_5));
 if (VAR_6 != VAR_2) {
  FUNC_0(VAR_3, "Wrong signature '%08x'\n", VAR_6);
  return -VAR_0;
 }

 *VAR_5 += 4;

 VAR_7 = *((u32 *)(*VAR_5));
 if (VAR_7 != VAR_4->size) {
  FUNC_0(VAR_3, "Size mismatch: internal = %08x image = %08x\n",
         VAR_7, (u32)VAR_4->size);
  return -VAR_0;
 }

 *VAR_5 += 4;

 if (*((u16 *)(*VAR_5)) >= VAR_1) {
  FUNC_0(VAR_3, "File contains unsupported commands [Need %04x]\n",
         *((u16 *)(*VAR_5)));
  return -VAR_0;
 }

 *VAR_5 += 4;

 return 0;
}
