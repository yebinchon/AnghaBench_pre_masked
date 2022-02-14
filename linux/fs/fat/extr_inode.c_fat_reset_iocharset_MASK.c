
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fat_mount_options {scalar_t__ iocharset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fat_mount_options *VAR_1)
{
 if (VAR_1->iocharset != VAR_0) {

  FUNC_0(VAR_1->iocharset);
  VAR_1->iocharset = VAR_0;
 }
}
