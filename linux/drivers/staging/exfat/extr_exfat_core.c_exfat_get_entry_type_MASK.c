
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file_dentry_t {int type; int attr; } ;
struct dentry_t {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

u32 FUNC_1(struct dentry_t *VAR_19)
{
 struct file_dentry_t *VAR_20 = (struct file_dentry_t *)VAR_19;

 if (VAR_20->type == 0x0) {
  return VAR_16;
 } else if (VAR_20->type < 0x80) {
  return VAR_8;
 } else if (VAR_20->type == 0x80) {
  return VAR_13;
 } else if (VAR_20->type < 0xA0) {
  if (VAR_20->type == 0x81) {
   return VAR_5;
  } else if (VAR_20->type == 0x82) {
   return VAR_17;
  } else if (VAR_20->type == 0x83) {
   return VAR_18;
  } else if (VAR_20->type == 0x85) {
   if (FUNC_0(VAR_20->attr) & VAR_0)
    return VAR_9;
   else
    return VAR_11;
  }
  return VAR_6;
 } else if (VAR_20->type < 0xC0) {
  if (VAR_20->type == 0xA0)
   return VAR_12;
  else if (VAR_20->type == 0xA1)
   return VAR_14;
  else if (VAR_20->type == 0xA2)
   return VAR_2;
  return VAR_3;
 } else if (VAR_20->type < 0xE0) {
  if (VAR_20->type == 0xC0)
   return VAR_15;
  else if (VAR_20->type == 0xC1)
   return VAR_10;
  else if (VAR_20->type == 0xC2)
   return VAR_1;
  return VAR_7;
 }

 return VAR_4;
}
