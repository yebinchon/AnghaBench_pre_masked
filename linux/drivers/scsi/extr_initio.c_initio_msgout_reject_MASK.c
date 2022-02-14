
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initio_host {scalar_t__ phase; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct initio_host*) ;

__attribute__((used)) static int FUNC_4(struct initio_host * VAR_8)
{
 FUNC_2(((FUNC_0(VAR_8->addr + VAR_7) & (VAR_2 | 7)) | VAR_3), VAR_8->addr + VAR_7);

 if (FUNC_1(VAR_8) == -1)
  return -1;

 if (VAR_8->phase == VAR_0) {
  FUNC_2(VAR_1, VAR_8->addr + VAR_6);
  FUNC_2(VAR_4, VAR_8->addr + VAR_5);
  return FUNC_3(VAR_8);
 }
 return VAR_8->phase;
}
