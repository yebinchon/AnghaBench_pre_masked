
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sdescsha512; int * sdescmd5; int * sdeschmacmd5; int * sdeschmacsha256; int * sdesccmacaes; int * ccmaesdecrypt; int * ccmaesencrypt; int * hmacmd5; int * sha512; int * md5; int * hmacsha256; int * cmacaes; } ;
struct TCP_Server_Info {TYPE_1__ secmech; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct TCP_Server_Info *VAR_0)
{
 if (VAR_0->secmech.cmacaes) {
  FUNC_1(VAR_0->secmech.cmacaes);
  VAR_0->secmech.cmacaes = ((void*)0);
 }

 if (VAR_0->secmech.hmacsha256) {
  FUNC_1(VAR_0->secmech.hmacsha256);
  VAR_0->secmech.hmacsha256 = ((void*)0);
 }

 if (VAR_0->secmech.md5) {
  FUNC_1(VAR_0->secmech.md5);
  VAR_0->secmech.md5 = ((void*)0);
 }

 if (VAR_0->secmech.sha512) {
  FUNC_1(VAR_0->secmech.sha512);
  VAR_0->secmech.sha512 = ((void*)0);
 }

 if (VAR_0->secmech.hmacmd5) {
  FUNC_1(VAR_0->secmech.hmacmd5);
  VAR_0->secmech.hmacmd5 = ((void*)0);
 }

 if (VAR_0->secmech.ccmaesencrypt) {
  FUNC_0(VAR_0->secmech.ccmaesencrypt);
  VAR_0->secmech.ccmaesencrypt = ((void*)0);
 }

 if (VAR_0->secmech.ccmaesdecrypt) {
  FUNC_0(VAR_0->secmech.ccmaesdecrypt);
  VAR_0->secmech.ccmaesdecrypt = ((void*)0);
 }

 FUNC_2(VAR_0->secmech.sdesccmacaes);
 VAR_0->secmech.sdesccmacaes = ((void*)0);
 FUNC_2(VAR_0->secmech.sdeschmacsha256);
 VAR_0->secmech.sdeschmacsha256 = ((void*)0);
 FUNC_2(VAR_0->secmech.sdeschmacmd5);
 VAR_0->secmech.sdeschmacmd5 = ((void*)0);
 FUNC_2(VAR_0->secmech.sdescmd5);
 VAR_0->secmech.sdescmd5 = ((void*)0);
 FUNC_2(VAR_0->secmech.sdescsha512);
 VAR_0->secmech.sdescsha512 = ((void*)0);
}
