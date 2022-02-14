
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcopy_op {int dummy; } ;
struct se_cmd {int dummy; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,unsigned char,...) ;
 int FUNC_1 (struct se_cmd*,struct xcopy_op*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct se_cmd *VAR_6,
    struct xcopy_op *VAR_7, unsigned char *VAR_8,
    unsigned int VAR_9, sense_reason_t *VAR_10)
{
 unsigned char *VAR_11 = VAR_8;
 unsigned int VAR_12 = 0;
 int VAR_13 = VAR_9 % VAR_5, VAR_14, VAR_15 = 0;

 *VAR_10 = VAR_2;

 if (VAR_13 != 0) {
  FUNC_0("XCOPY segment descriptor list length is not"
   " multiple of %d\n", VAR_5);
  *VAR_10 = VAR_4;
  return -VAR_0;
 }
 if (VAR_9 > VAR_1 * VAR_5) {
  FUNC_0("XCOPY supports %u segment descriptor(s), sdll: %u too"
   " large..\n", VAR_1, VAR_9);

  *VAR_10 = VAR_3;
  return -VAR_0;
 }

 while (VAR_12 < VAR_9) {



  switch (VAR_11[0]) {
  case 0x02:
   VAR_14 = FUNC_1(VAR_6, VAR_7, VAR_11);
   if (VAR_14 < 0)
    goto out;

   VAR_15++;
   VAR_12 += VAR_5;
   VAR_11 += VAR_5;
   break;
  default:
   FUNC_0("XCOPY unsupported segment descriptor"
    "type: 0x%02x\n", VAR_11[0]);
   *VAR_10 = VAR_4;
   goto out;
  }
 }

 return VAR_15;

out:
 return -VAR_0;
}
