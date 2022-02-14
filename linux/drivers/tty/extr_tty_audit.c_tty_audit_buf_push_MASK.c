
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_audit_buf {scalar_t__ valid; int data; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct tty_audit_buf *VAR_2)
{
 if (VAR_2->valid == 0)
  return;
 if (VAR_1 == VAR_0) {
  VAR_2->valid = 0;
  return;
 }
 FUNC_0("tty", VAR_2->dev, VAR_2->data, VAR_2->valid);
 VAR_2->valid = 0;
}
