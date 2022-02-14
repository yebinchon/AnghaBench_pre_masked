
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct file_dentry_t {int type; int attr; } ;
struct dentry_t {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

void FUNC_1(struct dentry_t *VAR_13, u32 VAR_14)
{
 struct file_dentry_t *VAR_15 = (struct file_dentry_t *)VAR_13;

 if (VAR_14 == VAR_10) {
  VAR_15->type = 0x0;
 } else if (VAR_14 == VAR_4) {
  VAR_15->type &= ~0x80;
 } else if (VAR_14 == VAR_8) {
  VAR_15->type = 0xC0;
 } else if (VAR_14 == VAR_6) {
  VAR_15->type = 0xC1;
 } else if (VAR_14 == VAR_3) {
  VAR_15->type = 0x81;
 } else if (VAR_14 == VAR_11) {
  VAR_15->type = 0x82;
 } else if (VAR_14 == VAR_12) {
  VAR_15->type = 0x83;
 } else if (VAR_14 == VAR_5) {
  VAR_15->type = 0x85;
  FUNC_0(VAR_15->attr, VAR_1);
 } else if (VAR_14 == VAR_7) {
  VAR_15->type = 0x85;
  FUNC_0(VAR_15->attr, VAR_0);
 } else if (VAR_14 == VAR_9) {
  VAR_15->type = 0x85;
  FUNC_0(VAR_15->attr, VAR_0 | VAR_2);
 }
}
